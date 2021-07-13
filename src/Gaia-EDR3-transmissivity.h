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

#ifndef BSR_GAIA_EDR3_TRANSMISSIVITY_H
#define BSR_GAIA_EDR3_TRANSMISSIVITY_H

//
// Gaia EDR3 passbands from https://www.cosmos.esa.int/web/gaia/edr3-passbands
// The value 99.99 for undefined wavelengths has been changed to 0.0 for faster processing
//
const double Gaia_EDR3_transmissivity_G[781] = {\
 2.37366962e-08, 1.57774443e-07, 9.08554755e-07, 4.78072331e-06, 2.39428071e-05, 1.03648276e-04, 3.72280534e-04, 1.09381843e-03,\
 2.65174642e-03, 5.45098195e-03, 9.76875472e-03, 1.56275855e-02, 2.27741233e-02, 3.07613294e-02, 3.93617092e-02, 4.81051591e-02,\
 5.65974619e-02, 6.48652284e-02, 7.25998465e-02, 7.99799035e-02, 8.68837415e-02, 9.34892114e-02, 9.95098198e-02, 1.04821332e-01,\
 1.09567735e-01, 1.13844787e-01, 1.17322246e-01, 1.20248035e-01, 1.22616478e-01, 1.24481362e-01, 1.25910068e-01, 1.26873854e-01,\
 1.27349628e-01, 1.27444244e-01, 1.27427159e-01, 1.26991649e-01, 1.26294051e-01, 1.25245997e-01, 1.24229812e-01, 1.22847822e-01,\
 1.21442511e-01, 1.20078061e-01, 1.18415896e-01, 1.17082052e-01, 1.15602744e-01, 1.14320018e-01, 1.13098680e-01, 1.11837348e-01,\
 1.10897166e-01, 1.10137634e-01, 1.09349045e-01, 1.08993010e-01, 1.08528360e-01, 1.08229538e-01, 1.08180230e-01, 1.08450962e-01,\
 1.09108058e-01, 1.09989532e-01, 1.11262658e-01, 1.13409497e-01, 1.16293195e-01, 1.20058072e-01, 1.25004759e-01, 1.30901086e-01,\
 1.38026499e-01, 1.46290114e-01, 1.55929479e-01, 1.66606022e-01, 1.78362874e-01, 1.91168005e-01, 2.04618287e-01, 2.18642941e-01,\
 2.33241881e-01, 2.47757369e-01, 2.62449781e-01, 2.76561595e-01, 2.90484469e-01, 3.03786844e-01, 3.16444340e-01, 3.29036320e-01,\
 3.40847770e-01, 3.51727560e-01, 3.62523374e-01, 3.73395293e-01, 3.83168700e-01, 3.92487346e-01, 4.01706247e-01, 4.10080494e-01,\
 4.18111383e-01, 4.25897751e-01, 4.33235889e-01, 4.40713666e-01, 4.47897608e-01, 4.54324711e-01, 4.60313158e-01, 4.66419545e-01,\
 4.72245468e-01, 4.77786567e-01, 4.83212885e-01, 4.88154684e-01, 4.92915186e-01, 4.97607962e-01, 5.01941461e-01, 5.06615898e-01,\
 5.10655404e-01, 5.14230358e-01, 5.18167599e-01, 5.22231851e-01, 5.25884022e-01, 5.29172592e-01, 5.32506055e-01, 5.35557712e-01,\
 5.38516925e-01, 5.41710200e-01, 5.44806843e-01, 5.47920299e-01, 5.50737813e-01, 5.52849279e-01, 5.55240306e-01, 5.57625555e-01,\
 5.60121042e-01, 5.62517558e-01, 5.64955650e-01, 5.67467523e-01, 5.69698519e-01, 5.72038798e-01, 5.74015357e-01, 5.75728511e-01,\
 5.77940776e-01, 5.80249335e-01, 5.81871670e-01, 5.83393689e-01, 5.85627955e-01, 5.87493500e-01, 5.89025129e-01, 5.90851821e-01,\
 5.92639378e-01, 5.94015900e-01, 5.95568847e-01, 5.97392260e-01, 5.98921356e-01, 6.00467112e-01, 6.01872775e-01, 6.03066831e-01,\
 6.04504831e-01, 6.06293819e-01, 6.07859461e-01, 6.08846935e-01, 6.09885369e-01, 6.11545267e-01, 6.12743401e-01, 6.13700318e-01,\
 6.15380987e-01, 6.16749011e-01, 6.17688856e-01, 6.18785060e-01, 6.20192685e-01, 6.21716954e-01, 6.22886630e-01, 6.23670434e-01,\
 6.24456273e-01, 6.26143241e-01, 6.26892897e-01, 6.27326934e-01, 6.28187372e-01, 6.29416394e-01, 6.30628928e-01, 6.31828135e-01,\
 6.32722910e-01, 6.33616251e-01, 6.34592054e-01, 6.35434859e-01, 6.35983967e-01, 6.36865441e-01, 6.38096399e-01, 6.39616883e-01,\
 6.40545836e-01, 6.41348409e-01, 6.42108215e-01, 6.42351253e-01, 6.42876868e-01, 6.43808628e-01, 6.45325554e-01, 6.45905626e-01,\
 6.46467361e-01, 6.47428068e-01, 6.48242074e-01, 6.49437751e-01, 6.50016704e-01, 6.50237494e-01, 6.51384274e-01, 6.52558487e-01,\
 6.53107718e-01, 6.53193092e-01, 6.54576951e-01, 6.55353077e-01, 6.55740029e-01, 6.56366459e-01, 6.56867754e-01, 6.57856500e-01,\
 6.59234285e-01, 6.60148241e-01, 6.60620000e-01, 6.60955282e-01, 6.61622879e-01, 6.62540346e-01, 6.63165524e-01, 6.63795529e-01,\
 6.64335678e-01, 6.64734894e-01, 6.65180853e-01, 6.66268123e-01, 6.67208557e-01, 6.68146172e-01, 6.69145477e-01, 6.69370870e-01,\
 6.69893287e-01, 6.70337034e-01, 6.70884594e-01, 6.71759917e-01, 6.72624175e-01, 6.73233807e-01, 6.73699106e-01, 6.73762546e-01,\
 6.73945752e-01, 6.74601086e-01, 6.75695142e-01, 6.76761074e-01, 6.76993856e-01, 6.77374846e-01, 6.77892686e-01, 6.78116593e-01,\
 6.78309994e-01, 6.79798319e-01, 6.80593478e-01, 6.80912200e-01, 6.81446794e-01, 6.81945051e-01, 6.82234503e-01, 6.82489453e-01,\
 6.83372830e-01, 6.83572670e-01, 6.84490942e-01, 6.84828530e-01, 6.85509533e-01, 6.85967162e-01, 6.86276681e-01, 6.87171589e-01,\
 6.87640135e-01, 6.87385830e-01, 6.88218588e-01, 6.88276111e-01, 6.88660926e-01, 6.89091864e-01, 6.89951441e-01, 6.90115617e-01,\
 6.90545104e-01, 6.91100965e-01, 6.92206906e-01, 6.92398556e-01, 6.92909244e-01, 6.93808876e-01, 6.93856543e-01, 6.94810612e-01,\
 6.94963614e-01, 6.95048621e-01, 6.94907946e-01, 6.96212408e-01, 6.96758839e-01, 6.97678494e-01, 6.98360314e-01, 6.98097155e-01,\
 6.97535735e-01, 6.98671173e-01, 6.99129682e-01, 6.99648804e-01, 7.00919796e-01, 7.00475939e-01, 7.00833160e-01, 7.00785329e-01,\
 7.01281364e-01, 7.02978763e-01, 7.02561423e-01, 7.02903719e-01, 7.03730632e-01, 7.03629981e-01, 7.04114710e-01, 7.04179758e-01,\
 7.05022411e-01, 7.05677010e-01, 7.05926392e-01, 7.06855634e-01, 7.06706307e-01, 7.07329700e-01, 7.07692222e-01, 7.08372072e-01,\
 7.08807335e-01, 7.08917813e-01, 7.08520426e-01, 7.09231182e-01, 7.09945761e-01, 7.10313233e-01, 7.11336132e-01, 7.10919514e-01,\
 7.10400041e-01, 7.10869704e-01, 7.11196891e-01, 7.11807813e-01, 7.11904674e-01, 7.12401128e-01, 7.12286557e-01, 7.12851880e-01,\
 7.13771318e-01, 7.13691645e-01, 7.13868346e-01, 7.13697745e-01, 7.14492999e-01, 7.14678077e-01, 7.15388754e-01, 7.14921456e-01,\
 7.14900215e-01, 7.15024655e-01, 7.15672997e-01, 7.16050141e-01, 7.16029673e-01, 7.15691967e-01, 7.15876385e-01, 7.16960226e-01,\
 7.16885590e-01, 7.16335586e-01, 7.16852196e-01, 7.17133044e-01, 7.17218193e-01, 7.17476337e-01, 7.17378145e-01, 7.17074319e-01,\
 7.17315340e-01, 7.17141788e-01, 7.17788804e-01, 7.17426278e-01, 7.18062023e-01, 7.17863061e-01, 7.17904999e-01, 7.17349336e-01,\
 7.17572183e-01, 7.17855475e-01, 7.18331919e-01, 7.18591257e-01, 7.18370434e-01, 7.17904819e-01, 7.17424017e-01, 7.17843160e-01,\
 7.17132656e-01, 7.18053057e-01, 7.17816316e-01, 7.17454983e-01, 7.16810763e-01, 7.16613730e-01, 7.16703680e-01, 7.16807547e-01,\
 7.16404699e-01, 7.16026816e-01, 7.15499602e-01, 7.15194638e-01, 7.14879264e-01, 7.14721608e-01, 7.14450875e-01, 7.14094940e-01,\
 7.13726844e-01, 7.13923319e-01, 7.13025742e-01, 7.13036723e-01, 7.13585254e-01, 7.11755622e-01, 7.12043117e-01, 7.11160229e-01,\
 7.11020577e-01, 7.10521348e-01, 7.09937406e-01, 7.10055660e-01, 7.09495858e-01, 7.09043040e-01, 7.07167516e-01, 7.06464455e-01,\
 7.06753219e-01, 7.06325785e-01, 7.05940442e-01, 7.04739929e-01, 7.03579509e-01, 7.02717312e-01, 7.02344476e-01, 7.01830306e-01,\
 7.01171670e-01, 7.00393918e-01, 6.99831057e-01, 6.98460827e-01, 6.97818643e-01, 6.97153616e-01, 6.95742888e-01, 6.94712311e-01,\
 6.94885081e-01, 6.92885573e-01, 6.91711104e-01, 6.90353195e-01, 6.90406445e-01, 6.88749013e-01, 6.88944913e-01, 6.87407572e-01,\
 6.85488901e-01, 6.84378064e-01, 6.82863231e-01, 6.82507641e-01, 6.81127183e-01, 6.80226610e-01, 6.79059439e-01, 6.77756760e-01,\
 6.75739777e-01, 6.74126836e-01, 6.73332111e-01, 6.72389245e-01, 6.70880823e-01, 6.68980520e-01, 6.67243532e-01, 6.65983957e-01,\
 6.64046543e-01, 6.62867306e-01, 6.60693305e-01, 6.59014151e-01, 6.58198324e-01, 6.56407760e-01, 6.54375536e-01, 6.52956919e-01,\
 6.51626270e-01, 6.49032293e-01, 6.47150544e-01, 6.46231665e-01, 6.44301161e-01, 6.42591901e-01, 6.40525269e-01, 6.38859881e-01,\
 6.36105955e-01, 6.34343902e-01, 6.32896096e-01, 6.30976684e-01, 6.29296421e-01, 6.27303744e-01, 6.25030680e-01, 6.22227291e-01,\
 6.20911861e-01, 6.17873955e-01, 6.15501457e-01, 6.13840826e-01, 6.11354644e-01, 6.09068523e-01, 6.07479810e-01, 6.05089456e-01,\
 6.02636396e-01, 5.99457487e-01, 5.97541445e-01, 5.95929448e-01, 5.92399976e-01, 5.89922928e-01, 5.88498932e-01, 5.86177867e-01,\
 5.82739383e-01, 5.79941538e-01, 5.77515441e-01, 5.74941869e-01, 5.72573190e-01, 5.70267159e-01, 5.67402553e-01, 5.64846737e-01,\
 5.62591010e-01, 5.60125763e-01, 5.57100029e-01, 5.53910813e-01, 5.51199750e-01, 5.48455714e-01, 5.45932611e-01, 5.42721649e-01,\
 5.39583616e-01, 5.36476760e-01, 5.33862789e-01, 5.31436326e-01, 5.28403880e-01, 5.25122912e-01, 5.21778073e-01, 5.19067752e-01,\
 5.15840113e-01, 5.13186641e-01, 5.10092228e-01, 5.07382387e-01, 5.03885556e-01, 5.02115590e-01, 4.99224107e-01, 4.95971510e-01,\
 4.91996429e-01, 4.88823768e-01, 4.86045767e-01, 4.82688992e-01, 4.79125400e-01, 4.75897338e-01, 4.73142654e-01, 4.69907593e-01,\
 4.66919323e-01, 4.63232702e-01, 4.59884631e-01, 4.56889113e-01, 4.53346951e-01, 4.50045780e-01, 4.47393833e-01, 4.44309807e-01,\
 4.41085939e-01, 4.38000883e-01, 4.35105537e-01, 4.32121809e-01, 4.28620861e-01, 4.24482653e-01, 4.21066579e-01, 4.18041166e-01,\
 4.14784905e-01, 4.10985509e-01, 4.07626467e-01, 4.04648726e-01, 4.02525287e-01, 3.98521565e-01, 3.94418335e-01, 3.90756327e-01,\
 3.87320969e-01, 3.84182575e-01, 3.80351910e-01, 3.77177090e-01, 3.74020127e-01, 3.70148583e-01, 3.66996318e-01, 3.64135266e-01,\
 3.60849931e-01, 3.57884173e-01, 3.53910876e-01, 3.49887801e-01, 3.47263747e-01, 3.43570151e-01, 3.41020516e-01, 3.37872504e-01,\
 3.34147192e-01, 3.30135408e-01, 3.27489043e-01, 3.23644477e-01, 3.18944273e-01, 3.16843391e-01, 3.13995072e-01, 3.10184285e-01,\
 3.06793674e-01, 3.04739258e-01, 3.01508837e-01, 2.97823400e-01, 2.94744663e-01, 2.91236311e-01, 2.87749108e-01, 2.83898442e-01,\
 2.80491684e-01, 2.77753035e-01, 2.74883831e-01, 2.71422986e-01, 2.67856627e-01, 2.64606752e-01, 2.61455674e-01, 2.58601267e-01,\
 2.56050390e-01, 2.52764468e-01, 2.49470941e-01, 2.46164578e-01, 2.42695811e-01, 2.39475017e-01, 2.36928652e-01, 2.33626713e-01,\
 2.30619554e-01, 2.27896049e-01, 2.24587600e-01, 2.21176759e-01, 2.18314877e-01, 2.15486395e-01, 2.12462553e-01, 2.09351058e-01,\
 2.06526022e-01, 2.03620957e-01, 2.00906225e-01, 1.97864533e-01, 1.95053221e-01, 1.92552590e-01, 1.89578109e-01, 1.86409222e-01,\
 1.83406018e-01, 1.80697640e-01, 1.78273497e-01, 1.75677222e-01, 1.72996955e-01, 1.70346904e-01, 1.67375209e-01, 1.64513615e-01,\
 1.62072087e-01, 1.59580389e-01, 1.56851728e-01, 1.54259129e-01, 1.51670819e-01, 1.49021982e-01, 1.46366087e-01, 1.43985377e-01,\
 1.41630826e-01, 1.39368431e-01, 1.37119296e-01, 1.34531623e-01, 1.32145238e-01, 1.29818524e-01, 1.27475437e-01, 1.25125476e-01,\
 1.22937568e-01, 1.20711798e-01, 1.18314345e-01, 1.16018797e-01, 1.13758622e-01, 1.11693532e-01, 1.09615906e-01, 1.07402656e-01,\
 1.05374647e-01, 1.03239456e-01, 1.01061930e-01, 9.90179458e-02, 9.70876723e-02, 9.50985582e-02, 9.31891382e-02, 9.12931456e-02,\
 8.95365374e-02, 8.76406868e-02, 8.58260089e-02, 8.38964310e-02, 8.18011580e-02, 8.01260722e-02, 7.84905076e-02, 7.67571241e-02,\
 7.49832850e-02, 7.32033366e-02, 7.14271926e-02, 6.97384298e-02, 6.81054818e-02, 6.65621078e-02, 6.50566774e-02, 6.35366549e-02,\
 6.19414516e-02, 6.03444134e-02, 5.88194970e-02, 5.72842491e-02, 5.58320087e-02, 5.44731256e-02, 5.31892434e-02, 5.18819276e-02,\
 5.04960013e-02, 4.91043518e-02, 4.77397242e-02, 4.64290407e-02, 4.51523186e-02, 4.39537936e-02, 4.27842864e-02, 4.16059976e-02,\
 4.04491284e-02, 3.93175265e-02, 3.81228672e-02, 3.70017155e-02, 3.58892120e-02, 3.48694504e-02, 3.38677803e-02, 3.28545025e-02,\
 3.18635224e-02, 3.08505958e-02, 2.98422262e-02, 2.88698314e-02, 2.79096167e-02, 2.70155912e-02, 2.61826380e-02, 2.53761189e-02,\
 2.45381883e-02, 2.36901917e-02, 2.28654041e-02, 2.20616877e-02, 2.12750382e-02, 2.05393730e-02, 1.98252817e-02, 1.91392465e-02,\
 1.84634887e-02, 1.77940347e-02, 1.71045299e-02, 1.64408885e-02, 1.57992794e-02, 1.51890084e-02, 1.46000832e-02, 1.40438991e-02,\
 1.35152060e-02, 1.29890078e-02, 1.24326267e-02, 1.19180270e-02, 1.13958923e-02, 1.09115390e-02, 1.04521107e-02, 1.00129018e-02,\
 9.59084092e-03, 9.19348122e-03, 8.79047352e-03, 8.38172296e-03, 7.98808843e-03, 7.61580777e-03, 7.25157056e-03, 6.91641033e-03,\
 6.59050148e-03, 6.28198777e-03, 5.97895856e-03, 5.68605069e-03, 5.40603194e-03, 5.12860149e-03, 4.86306725e-03, 4.60737466e-03,\
 4.36700622e-03, 4.13684231e-03, 3.91409777e-03, 3.70426533e-03, 3.49768928e-03, 3.29787242e-03, 3.10114462e-03, 2.91166362e-03,\
 2.73715363e-03, 2.57163006e-03, 2.41251048e-03, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0\
};

const double Gaia_EDR3_transmissivity_bp[781] = {\
 0.0, 0.0, 0.0, 0.0, 0.0, 3.87054116e-05, 1.75771984e-04, 6.49485416e-04,\
 1.96690820e-03, 5.01083084e-03, 1.09458069e-02, 2.07035425e-02, 3.46967871e-02, 5.25319303e-02, 7.35388438e-02, 9.60352312e-02,\
 1.18775774e-01, 1.42278579e-01, 1.65557648e-01, 1.88569139e-01, 2.09777042e-01, 2.28816153e-01, 2.43876762e-01, 2.51683002e-01,\
 2.52028055e-01, 2.46237110e-01, 2.36607056e-01, 2.24177192e-01, 2.09227858e-01, 1.94530288e-01, 1.84648618e-01, 1.79305755e-01,\
 1.78271311e-01, 1.81390624e-01, 1.87815712e-01, 1.96988564e-01, 2.08368927e-01, 2.18816761e-01, 2.27393150e-01, 2.32695680e-01,\
 2.35262373e-01, 2.35236779e-01, 2.32622220e-01, 2.30119196e-01, 2.26963302e-01, 2.23965129e-01, 2.20851952e-01, 2.17141260e-01,\
 2.13344154e-01, 2.09205477e-01, 2.04351616e-01, 1.99662718e-01, 1.94047545e-01, 1.88483494e-01, 1.83208476e-01, 1.78318209e-01,\
 1.73890313e-01, 1.69635287e-01, 1.65792693e-01, 1.63149992e-01, 1.62143918e-01, 1.62970621e-01, 1.65710956e-01, 1.69961239e-01,\
 1.76098800e-01, 1.84059158e-01, 1.94238295e-01, 2.06356006e-01, 2.20657102e-01, 2.37116719e-01, 2.54352193e-01, 2.72190884e-01,\
 2.90902882e-01, 3.09720582e-01, 3.28957214e-01, 3.47617390e-01, 3.66115424e-01, 3.83814919e-01, 4.00577473e-01, 4.17033309e-01,\
 4.32175816e-01, 4.45724674e-01, 4.58577354e-01, 4.71165073e-01, 4.82197230e-01, 4.92469156e-01, 5.02413396e-01, 5.11097031e-01,\
 5.19143948e-01, 5.26682329e-01, 5.33465853e-01, 5.40222840e-01, 5.46430076e-01, 5.51528478e-01, 5.55995849e-01, 5.60569552e-01,\
 5.64778087e-01, 5.68622415e-01, 5.72312056e-01, 5.75414198e-01, 5.78302699e-01, 5.81114252e-01, 5.83509508e-01, 5.86304473e-01,\
 5.88367544e-01, 5.89904162e-01, 5.91869044e-01, 5.94047094e-01, 5.95856172e-01, 5.97358538e-01, 5.99022080e-01, 6.00480299e-01,\
 6.01947486e-01, 6.03784439e-01, 6.05619651e-01, 6.07578555e-01, 6.09316261e-01, 6.10383330e-01, 6.11873002e-01, 6.13471421e-01,\
 6.15301491e-01, 6.17051916e-01, 6.18770262e-01, 6.20491848e-01, 6.21830825e-01, 6.23213524e-01, 6.24124728e-01, 6.24677054e-01,\
 6.25700390e-01, 6.26754139e-01, 6.26992584e-01, 6.27045018e-01, 6.27776042e-01, 6.28024959e-01, 6.27830049e-01, 6.27863884e-01,\
 6.27768801e-01, 6.27250734e-01, 6.27002752e-01, 6.27126244e-01, 6.27028071e-01, 6.27038150e-01, 6.26988856e-01, 6.26807361e-01,\
 6.26966695e-01, 6.27574894e-01, 6.28031807e-01, 6.27969393e-01, 6.28034517e-01, 6.28815234e-01, 6.29195435e-01, 6.29405816e-01,\
 6.30436775e-01, 6.31227249e-01, 6.31647699e-01, 6.32206645e-01, 6.33048910e-01, 6.33972467e-01, 6.34496550e-01, 6.34587167e-01,\
 6.34636782e-01, 6.35558641e-01, 6.35486327e-01, 6.35059167e-01, 6.35031560e-01, 6.35341726e-01, 6.35598111e-01, 6.35800632e-01,\
 6.35649698e-01, 6.35449674e-01, 6.35285854e-01, 6.34943958e-01, 6.34267324e-01, 6.33881589e-01, 6.33817275e-01, 6.34064731e-01,\
 6.33754596e-01, 6.33352373e-01, 6.32940243e-01, 6.32048101e-01, 6.31462795e-01, 6.31300874e-01, 6.31736116e-01, 6.31278808e-01,\
 6.30828067e-01, 6.30788190e-01, 6.30627132e-01, 6.30860842e-01, 6.30519886e-01, 6.29858587e-01, 6.30124067e-01, 6.30443816e-01,\
 6.30188857e-01, 6.29517281e-01, 6.30127692e-01, 6.30179832e-01, 6.29884582e-01, 6.29782293e-01, 6.29491858e-01, 6.29598184e-01,\
 6.30007723e-01, 6.29904426e-01, 6.29312639e-01, 6.28529909e-01, 6.28005828e-01, 6.27664462e-01, 6.26993552e-01, 6.26274714e-01,\
 6.25418417e-01, 6.24374101e-01, 6.23347947e-01, 6.22999495e-01, 6.22592485e-01, 6.22259676e-01, 6.22061721e-01, 6.21221392e-01,\
 6.20734428e-01, 6.20254650e-01, 6.19949449e-01, 6.20024330e-01, 6.20168751e-01, 6.20156406e-01, 6.20094685e-01, 6.19748512e-01,\
 6.19594371e-01, 6.19955482e-01, 6.20800221e-01, 6.21696432e-01, 6.21903020e-01, 6.22291358e-01, 6.22688637e-01, 6.22673936e-01,\
 6.22488654e-01, 6.23351843e-01, 6.23439440e-01, 6.22951427e-01, 6.22524834e-01, 6.21930222e-01, 6.21015987e-01, 6.19944641e-01,\
 6.19327372e-01, 6.18055506e-01, 6.17419906e-01, 6.16247289e-01, 6.15369731e-01, 6.14279326e-01, 6.13045729e-01, 6.12320396e-01,\
 6.11200481e-01, 6.09421475e-01, 6.08587274e-01, 6.07049120e-01, 6.05884592e-01, 6.05187274e-01, 6.05313069e-01, 6.05268590e-01,\
 6.05894731e-01, 6.07065131e-01, 6.09151193e-01, 6.10863647e-01, 6.13287749e-01, 6.16485610e-01, 6.19356389e-01, 6.23466374e-01,\
 6.27265648e-01, 6.30766480e-01, 6.33546314e-01, 6.37132151e-01, 6.39512166e-01, 6.41722015e-01, 6.43202692e-01, 6.43306317e-01,\
 6.42637309e-01, 6.43043740e-01, 6.42341725e-01, 6.41217847e-01, 6.40308326e-01, 6.37371984e-01, 6.34714950e-01, 6.31253118e-01,\
 6.27856079e-01, 6.25130567e-01, 6.20818510e-01, 6.17806737e-01, 6.15826556e-01, 6.13625406e-01, 6.12503210e-01, 6.11550345e-01,\
 6.11800173e-01, 6.12404288e-01, 6.13169161e-01, 6.15032031e-01, 6.16458678e-01, 6.19059805e-01, 6.21930198e-01, 6.25579651e-01,\
 6.29519224e-01, 6.33682267e-01, 6.37903928e-01, 6.43645113e-01, 6.49530382e-01, 6.54457810e-01, 6.59320954e-01, 6.62172748e-01,\
 6.64236833e-01, 6.66534979e-01, 6.68010993e-01, 6.69063943e-01, 6.68947536e-01, 6.68528803e-01, 6.66866457e-01, 6.65185307e-01,\
 6.63192663e-01, 6.59649829e-01, 6.55741785e-01, 6.50929127e-01, 6.46427993e-01, 6.40821305e-01, 6.35157012e-01, 6.27950218e-01,\
 6.20667611e-01, 6.13058786e-01, 6.05465373e-01, 5.97227840e-01, 5.88272243e-01, 5.78699833e-01, 5.69215236e-01, 5.60134530e-01,\
 5.49846211e-01, 5.38892059e-01, 5.28381533e-01, 5.17226528e-01, 5.05295762e-01, 4.92593396e-01, 4.78396697e-01, 4.62366590e-01,\
 4.44457339e-01, 4.23517898e-01, 3.99810682e-01, 3.72012218e-01, 3.41204564e-01, 3.06842538e-01, 2.70231311e-01, 2.32192119e-01,\
 1.94558666e-01, 1.58484372e-01, 1.25293348e-01, 9.59304114e-02, 7.10224768e-02, 5.08224576e-02, 3.51559339e-02, 2.35547920e-02,\
 1.52746744e-02, 9.66652664e-03, 5.99667294e-03, 3.70522417e-03, 2.33209081e-03, 1.54197378e-03, 1.10159476e-03, 8.60998556e-04,\
 7.28910264e-04, 6.53755796e-04, 6.06871317e-04, 5.73865400e-04, 5.47322835e-04, 5.24017362e-04, 4.41104484e-04, 3.78473008e-04,\
 3.38360180e-04, 3.10827338e-04, 2.84946553e-04, 2.58229547e-04, 2.32119752e-04, 1.93693104e-04, 1.51301154e-04, 1.13610422e-04,\
 7.82949834e-05, 5.44503302e-05, 3.95909706e-05, 2.81433109e-05, 2.02556920e-05, 1.56164202e-05, 1.19623965e-05, 9.69169436e-06,\
 8.30922234e-06, 6.08899493e-06, 5.12904688e-06, 5.26021058e-06, 4.17818770e-06, 4.09618565e-06, 4.25533546e-06, 4.14991273e-06,\
 3.89151804e-06, 3.73973114e-06, 3.52809172e-06, 2.88792024e-06, 2.75585712e-06, 2.25863219e-06, 1.76627925e-06, 1.34440289e-06,\
 9.89680713e-07, 8.91421482e-07, 8.07018399e-07, 6.25088405e-07, 5.30301365e-07, 4.24900727e-07, 3.41109937e-07, 2.40118549e-07,\
 1.96577010e-07, 2.63470328e-07, 1.27016225e-07, 1.60511787e-07, 9.68093350e-08, 1.29384271e-07, 9.38186762e-08, 1.16831386e-07,\
 8.16035228e-09, 6.90362772e-08, 7.36657024e-08, 4.22541479e-08, 7.93884518e-09, 6.42887980e-08, 9.94567096e-09, 2.33008537e-08,\
 3.43582782e-08, 1.27555036e-07, 8.34518225e-08, 4.04428169e-08, 3.05135838e-08, 4.88601873e-08, 2.17167412e-08, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0\
};

const double Gaia_EDR3_transmissivity_rp[781] = {\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 1.06681221e-04, 1.49827932e-04, 2.16489151e-04, 3.10012201e-04, 4.59318092e-04, 7.05041053e-04,\
 1.08825407e-03, 1.75652781e-03, 2.96747712e-03, 5.11095889e-03, 8.95907309e-03, 1.40238253e-02, 2.27167792e-02, 3.67832816e-02,\
 5.83109622e-02, 8.94185931e-02, 1.31499658e-01, 1.85014033e-01, 2.48642041e-01, 3.19950920e-01, 3.94534800e-01, 4.68484363e-01,\
 5.37419486e-01, 5.96909124e-01, 6.45859720e-01, 6.83215133e-01, 7.10877473e-01, 7.28669791e-01, 7.39030155e-01, 7.38272843e-01,\
 7.28457428e-01, 7.10608685e-01, 6.93950034e-01, 6.83428150e-01, 6.78729881e-01, 6.78374219e-01, 6.79905727e-01, 6.83573277e-01,\
 6.87245867e-01, 6.90083917e-01, 6.93245723e-01, 6.95478292e-01, 6.96818673e-01, 6.97807956e-01, 6.98526266e-01, 6.99165256e-01,\
 7.00450943e-01, 7.01455167e-01, 7.03417228e-01, 7.04553404e-01, 7.06834498e-01, 7.08459145e-01, 7.10490359e-01, 7.12096413e-01,\
 7.14485907e-01, 7.16866105e-01, 7.19372726e-01, 7.21597813e-01, 7.23269224e-01, 7.24618450e-01, 7.25857931e-01, 7.27808356e-01,\
 7.28396987e-01, 7.30436609e-01, 7.31097733e-01, 7.31458167e-01, 7.31376313e-01, 7.31605856e-01, 7.31975219e-01, 7.32203384e-01,\
 7.31772921e-01, 7.31223211e-01, 7.30433309e-01, 7.29938411e-01, 7.29574681e-01, 7.29552955e-01, 7.29598601e-01, 7.29743428e-01,\
 7.30046635e-01, 7.31099972e-01, 7.31126236e-01, 7.32094919e-01, 7.33633497e-01, 7.32755648e-01, 7.34072009e-01, 7.34199660e-01,\
 7.35120995e-01, 7.35680531e-01, 7.36146244e-01, 7.37264830e-01, 7.37591134e-01, 7.37963906e-01, 7.36782421e-01, 7.36741666e-01,\
 7.37664493e-01, 7.37758714e-01, 7.37828131e-01, 7.36972311e-01, 7.36069497e-01, 7.35413271e-01, 7.35191330e-01, 7.34727665e-01,\
 7.34045209e-01, 7.33258731e-01, 7.32862703e-01, 7.31770487e-01, 7.31607430e-01, 7.31600651e-01, 7.30954884e-01, 7.30876832e-01,\
 7.32234825e-01, 7.31470511e-01, 7.31739731e-01, 7.31969867e-01, 7.33875536e-01, 7.34115229e-01, 7.36494572e-01, 7.37177848e-01,\
 7.37596109e-01, 7.38865259e-01, 7.39555760e-01, 7.41387257e-01, 7.41993465e-01, 7.43023835e-01, 7.43627066e-01, 7.43952261e-01,\
 7.43396509e-01, 7.43139363e-01, 7.43688353e-01, 7.43912916e-01, 7.43436809e-01, 7.42484692e-01, 7.41695682e-01, 7.41400514e-01,\
 7.40344246e-01, 7.40188180e-01, 7.39031261e-01, 7.38576716e-01, 7.39172501e-01, 7.38887455e-01, 7.38385747e-01, 7.38754785e-01,\
 7.39291051e-01, 7.38602134e-01, 7.38787481e-01, 7.40073712e-01, 7.40090085e-01, 7.40343842e-01, 7.40136266e-01, 7.40311577e-01,\
 7.39191603e-01, 7.39099803e-01, 7.39420194e-01, 7.38936831e-01, 7.38716800e-01, 7.37826166e-01, 7.36639044e-01, 7.34544013e-01,\
 7.34212987e-01, 7.31627838e-01, 7.29990507e-01, 7.29097892e-01, 7.27382044e-01, 7.25771532e-01, 7.25137891e-01, 7.23438736e-01,\
 7.21850197e-01, 7.19261348e-01, 7.18329759e-01, 7.17642151e-01, 7.14835253e-01, 7.13275435e-01, 7.13181348e-01, 7.11970462e-01,\
 7.09605551e-01, 7.08105796e-01, 7.07276904e-01, 7.06274165e-01, 7.05780241e-01, 7.05322576e-01, 7.04541773e-01, 7.04016212e-01,\
 7.04292896e-01, 7.04105005e-01, 7.03726619e-01, 7.02904404e-01, 7.03217428e-01, 7.03217911e-01, 7.04036301e-01, 7.03688727e-01,\
 7.03762968e-01, 7.03495462e-01, 7.04043133e-01, 7.04609536e-01, 7.04359599e-01, 7.03778789e-01, 7.02827491e-01, 7.03053082e-01,\
 7.02003614e-01, 7.02159197e-01, 7.01226944e-01, 7.00971779e-01, 6.99718522e-01, 7.00321700e-01, 7.00079804e-01, 6.98328955e-01,\
 6.96403737e-01, 6.94931033e-01, 6.94217419e-01, 6.92814859e-01, 6.90464415e-01, 6.89373845e-01, 6.88244735e-01, 6.86825967e-01,\
 6.85778518e-01, 6.83017896e-01, 6.81721426e-01, 6.79851960e-01, 6.78107696e-01, 6.76209938e-01, 6.75018496e-01, 6.73710351e-01,\
 6.71397570e-01, 6.69966893e-01, 6.68895327e-01, 6.66883106e-01, 6.65359978e-01, 6.61003683e-01, 6.59287732e-01, 6.57443751e-01,\
 6.55245302e-01, 6.52879106e-01, 6.49910845e-01, 6.48182851e-01, 6.47767170e-01, 6.43749713e-01, 6.40826913e-01, 6.37501423e-01,\
 6.34389967e-01, 6.32650221e-01, 6.27862580e-01, 6.26414475e-01, 6.23607819e-01, 6.19551068e-01, 6.17868826e-01, 6.14220302e-01,\
 6.11964486e-01, 6.09289305e-01, 6.04668734e-01, 6.01439376e-01, 5.98486591e-01, 5.94649618e-01, 5.92796442e-01, 5.89277625e-01,\
 5.85986777e-01, 5.81745683e-01, 5.79366492e-01, 5.75540889e-01, 5.69490317e-01, 5.67792894e-01, 5.66429329e-01, 5.61923905e-01,\
 5.58618198e-01, 5.58354062e-01, 5.53640545e-01, 5.50574328e-01, 5.47561359e-01, 5.43062830e-01, 5.41321906e-01, 5.35553318e-01,\
 5.32055430e-01, 5.30394443e-01, 5.25946605e-01, 5.24029455e-01, 5.19829411e-01, 5.15689753e-01, 5.14196406e-01, 5.09592042e-01,\
 5.07531179e-01, 5.04865337e-01, 4.99840376e-01, 4.97484320e-01, 4.93148965e-01, 4.88356879e-01, 4.86782411e-01, 4.81714489e-01,\
 4.78085444e-01, 4.76087434e-01, 4.71349359e-01, 4.66669272e-01, 4.63183085e-01, 4.59059557e-01, 4.54737171e-01, 4.51097030e-01,\
 4.47586163e-01, 4.43314996e-01, 4.40479278e-01, 4.35472181e-01, 4.30684357e-01, 4.28669162e-01, 4.23654460e-01, 4.18915973e-01,\
 4.15890966e-01, 4.10143623e-01, 4.07133098e-01, 4.04197844e-01, 3.98043522e-01, 3.95939870e-01, 3.91905588e-01, 3.85372349e-01,\
 3.83730402e-01, 3.79115196e-01, 3.72956086e-01, 3.71090295e-01, 3.65953197e-01, 3.61122163e-01, 3.58664245e-01, 3.53080428e-01,\
 3.48646485e-01, 3.45985143e-01, 3.40958152e-01, 3.36678596e-01, 3.33484319e-01, 3.28855358e-01, 3.24670165e-01, 3.20112994e-01,\
 3.15973109e-01, 3.11791075e-01, 3.06799651e-01, 3.03668198e-01, 2.99197500e-01, 2.94028081e-01, 2.91504230e-01, 2.86248966e-01,\
 2.80446125e-01, 2.78412000e-01, 2.73720891e-01, 2.67994732e-01, 2.65971876e-01, 2.61426010e-01, 2.55540294e-01, 2.52565205e-01,\
 2.49010746e-01, 2.44003016e-01, 2.41150012e-01, 2.37207521e-01, 2.31747474e-01, 2.28323747e-01, 2.24369982e-01, 2.20233136e-01,\
 2.16538662e-01, 2.12179493e-01, 2.08783952e-01, 2.05285483e-01, 2.00535578e-01, 1.97731477e-01, 1.94424961e-01, 1.89447876e-01,\
 1.86851985e-01, 1.83816386e-01, 1.78790820e-01, 1.76044540e-01, 1.73426443e-01, 1.68332833e-01, 1.65360351e-01, 1.63473244e-01,\
 1.58644238e-01, 1.55069019e-01, 1.53546970e-01, 1.49523820e-01, 1.45390223e-01, 1.43640682e-01, 1.40515886e-01, 1.35959300e-01,\
 1.33697586e-01, 1.31857189e-01, 1.27314965e-01, 1.24215489e-01, 1.22090509e-01, 1.18222628e-01, 1.14263946e-01, 1.11685617e-01,\
 1.08729706e-01, 1.04437227e-01, 1.01489157e-01, 9.87332966e-02, 9.44685040e-02, 9.12183012e-02, 8.83980751e-02, 8.47538402e-02,\
 8.15165215e-02, 7.86732282e-02, 7.51605505e-02, 7.20496541e-02, 6.93747773e-02, 6.61172781e-02, 6.28712013e-02, 6.04979441e-02,\
 5.77320676e-02, 5.43783149e-02, 5.21648656e-02, 4.98818943e-02, 4.67519123e-02, 4.43954393e-02, 4.25383196e-02, 4.00457635e-02,\
 3.75725452e-02, 3.60426235e-02, 3.41708897e-02, 3.18119130e-02, 3.01690233e-02, 2.88635385e-02, 2.69578199e-02, 2.52710953e-02,\
 2.41169738e-02, 2.28553054e-02, 2.12025816e-02, 2.00423128e-02, 1.90770916e-02, 1.77731553e-02, 1.65918440e-02, 1.57559173e-02,\
 1.48486139e-02, 1.37182572e-02, 1.29141151e-02, 1.22217690e-02, 1.13707307e-02, 1.05711368e-02, 9.99104989e-03, 9.37161738e-03,\
 8.61890823e-03, 8.07236638e-03, 7.60517614e-03, 7.04576714e-03, 6.49708839e-03, 6.11395300e-03, 5.72535895e-03, 5.22217613e-03,\
 4.85607994e-03, 4.56761733e-03, 4.22677141e-03, 3.84829941e-03, 3.59845977e-03, 3.36810276e-03, 3.07450240e-03, 2.81129339e-03,\
 2.63746389e-03, 2.45553507e-03, 2.20908009e-03, 2.03073979e-03, 1.90498995e-03, 1.75292299e-03, 1.56799085e-03, 1.45283230e-03,\
 1.35710511e-03, 1.23235835e-03, 1.10451616e-03, 1.02517422e-03, 9.52947059e-04, 8.54406689e-04, 7.69338960e-04, 7.13493700e-04,\
 6.58462324e-04, 5.84632519e-04, 5.28503009e-04, 4.90531778e-04, 4.49461985e-04, 3.96150459e-04, 3.59992587e-04, 3.33217606e-04,\
 3.02837270e-04, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,\
 0.0, 0.0, 0.0, 0.0, 0.0\
};

#endif // BSR_GAIA_EDR3_TRANSMISSIVITY_H
