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

#ifndef BSRENDER_H
#define BSRENDER_H

#define BSR_VERSION "0.9-dev-52"

#define _GNU_SOURCE // needed for strcasestr in string.h
#include <stdint.h> // needed for uint64_t

#include <unistd.h>

typedef struct {
  double icrs_x;
  double icrs_y;
  double icrs_z;
  uint64_t intensity_and_temperature;
} star_record_t;

typedef struct {
  pid_t pid;
  int status;
} bsr_status_t;

typedef struct {
  int status_left;
  long long image_offset;
  double r;
  double g;
  double b;
  int status_right; // left/right status fields help us deal with situation where struct is split between difference cache lines and written back at different times
} thread_buffer_t;

typedef struct {
  long long image_offset;
  double r;
  double g;
  double b;
} dedup_buffer_t;

typedef struct {
  dedup_buffer_t *dedup_record_p;
} dedup_index_t;

typedef struct {
  double r;
  double g;
  double b;
} pixel_composition_t;

typedef struct {
  // these are not globally mmapped so they can be set differently by each thread after fork()
  thread_buffer_t *thread_buf_p;
  int thread_buffer_index;
  int my_thread_id;
  pid_t my_pid;
} bsr_thread_state_t;

typedef struct {
  // bsr_state is globally mmapped so these should be the same in each thread
  thread_buffer_t *thread_buf; // globally mmaped
  pixel_composition_t *image_composition_buf; // globally mmaped
  pixel_composition_t *image_blur_buf; // globally mmaped
  pixel_composition_t *image_resize_buf;  // globally mmaped
  dedup_buffer_t *dedup_buf; // not globally mmapped
  dedup_index_t *dedup_index; // not globally mmapped
  int dedup_index_mode;
  int resize_res_x;
  int resize_res_y;
  pixel_composition_t *current_image_buf;
  int current_image_res_x;
  int current_image_res_y;
  int num_worker_threads;
  pid_t master_pid;
  pid_t master_pgid;
  pid_t httpd_pid;
  bsr_thread_state_t *perthread;
  int per_thread_buffers;
  bsr_status_t *status_array;
  double *rgb_red;
  double *rgb_green;
  double *rgb_blue;
  double *Airymap_red; // globally mmaped
  double *Airymap_green; // globally mmaped
  double *Airymap_blue; // globally mmaped
  double camera_hfov;
  double camera_half_res_x;
  double camera_half_res_y;
  double pixels_per_radian;
  double camera_3az_xy;
  double camera_3az_xz;
  double camera_3az_yz;
  double target_x;
  double target_y;
  double target_z;
  //double target_r;
  double target_xy_r;
  double target_xz_r;
  double target_yz_r;
  double target_3az_xy;
  double target_3az_xz;
  //double target_3az_yz;
} bsr_state_t;

typedef struct {
  int use_bandpass_ratios;
  int calibrate_parallax;
  int override_parallax_toolow;
  double minimum_parallax;
} mkg_config_t;

typedef struct {
  char config_file_name[256];
  char data_file_directory[256];
  int num_threads;
  int per_thread_buffer;
  int per_thread_buffer_Airy;
  int cgi_mode;
  int cgi_max_res_x;
  int cgi_max_res_y;
  int cgi_Gaia_min_parallax_quality;
  int cgi_allow_Airy_disk;
  double cgi_max_Airy_disk_camera_fov;
  double cgi_min_Airy_disk_first_null;
  int cgi_max_Airy_disk_max_extent;
  int enable_Gaia;
  int Gaia_min_parallax_quality;
  int enable_external;
  double render_distance_min;
  double render_distance_min2;
  double render_distance_max;
  double render_distance_max2;
  int render_distance_selector;
  double star_color_min;
  double star_color_max;
  int camera_res_x;
  int camera_res_y;
  double camera_fov;
  double camera_pixel_limit_mag;
  double camera_pixel_limit;
  int camera_pixel_limit_mode;
  int camera_wb_enable;
  double camera_wb_temp;
  double camera_color_saturation;
  double camera_gamma;
  int camera_projection;
  int spherical_orientation;
  int Mollewide_iterations;
  double red_filter_long_limit;
  double red_filter_short_limit;
  double green_filter_long_limit;
  double green_filter_short_limit;
  double blue_filter_long_limit;
  double blue_filter_short_limit;
  int Airy_disk;
  double Airy_disk_first_null;
  int Airy_disk_max_extent;
  double Gaussian_blur_radius;
  double output_scaling_factor;
  int draw_crosshairs;
  int draw_grid_lines;
  int sRGB_gamma;
  int bits_per_color;
  double camera_icrs_x;
  double camera_icrs_y;
  double camera_icrs_z;
  double camera_icrs_ra;
  double camera_icrs_dec;
  double camera_icrs_r;
  double target_icrs_x;
  double target_icrs_y;
  double target_icrs_z;
  double target_icrs_ra;
  double target_icrs_dec;
  double target_icrs_r;
  double camera_rotation;
  double camera_pan;
  double camera_tilt;
} bsr_config_t;

#endif // BSRENDER_H
