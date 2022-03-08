//
// Billion Star 3D Rendering Engine
// Kevin M. Loch
//
// 3D rendering engine for the ESA Gaia EDR3 star dataset

/*
 * BSD 3-Clause License
 *
 * Copyright (c) 2021, Kevin Loch
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "bsrender.h" // needs to be first to get GNU_SOURCE define for strcasestr
#include <stdlib.h>
#include <math.h>
#define PNG_SETJMP_NOT_SUPPORTED
#include <png.h>
#include "util.h"
#include "cgi.h"

int outputPNG(bsr_config_t *bsr_config, bsr_state_t *bsr_state) {
  FILE *output_file=NULL;
  png_structp png_ptr;
  png_infop info_ptr;
  png_byte color_type=PNG_COLOR_TYPE_RGB;
  png_byte bit_depth=8;
  struct timespec starttime;
  struct timespec endtime;
  double elapsed_time;

  //
  // display status update if not in CGI mode
  //
  if ((bsr_config->cgi_mode != 1) && (bsr_config->print_status == 1)) {
    clock_gettime(CLOCK_REALTIME, &starttime);
    printf("Writing %s...", bsr_config->output_file_name);
    fflush(stdout);
  }

  //
  // if not CGI mode, open output file
  //
  if (bsr_config->cgi_mode != 1) {
    output_file=fopen(bsr_config->output_file_name, "wb");
    if (output_file == NULL) {
      printf("Error: could not open %s for writing\n", bsr_config->output_file_name);
      fflush(stdout);
      return(1);
    }
  }
  
  //
  // initialize PNG library
  //
  png_ptr=png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
  info_ptr=png_create_info_struct(png_ptr);
  if (bsr_config->cgi_mode == 1) {
    png_init_io(png_ptr, stdout);
  } else {
    png_init_io(png_ptr, output_file);
  } 
  
  //
  // write PNG header
  //
  if (bsr_config->rgb_color_space == 1) {
    png_set_sRGB_gAMA_and_cHRM(png_ptr, info_ptr, PNG_sRGB_INTENT_PERCEPTUAL); // https://www.dougchinnery.com/what-are-rendering-intents-and-how-should-i-use-them/
  } else {
    png_set_gAMA(png_ptr, info_ptr, 1.0); // linear RGB, no colorspace info
  }
  if (bsr_config->bits_per_color == 16) {
    bit_depth=16;
  } else {
    bit_depth=8;
  }
  png_set_IHDR(png_ptr, info_ptr, bsr_state->current_image_res_x, bsr_state->current_image_res_y, bit_depth, color_type, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_BASE, PNG_FILTER_TYPE_BASE);
  png_write_info(png_ptr, info_ptr);
  // wringe PNG image data
  png_write_image(png_ptr, bsr_state->row_pointers);
  // end write
  png_write_end(png_ptr, NULL);

  //
  // if not CGI mode display status message and close output file
  //
  if ((bsr_config->cgi_mode != 1) && (bsr_config->print_status == 1)) {
    clock_gettime(CLOCK_REALTIME, &endtime);
    elapsed_time=((double)(endtime.tv_sec - 1500000000) + ((double)endtime.tv_nsec / 1.0E9)) - ((double)(starttime.tv_sec - 1500000000) + ((double)starttime.tv_nsec) / 1.0E9);
    printf(" (%.3fs)\n", elapsed_time);
    fflush(stdout);

    // clean up
    fclose(output_file);
  }

  return(0);
}
