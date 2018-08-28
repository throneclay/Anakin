/* Copyright (c) 2018 Anakin Authors, Inc. All Rights Reserved.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

  http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#ifndef ANAKIN_SABER_FUNCS_IMPL_CONV_POOLING_H
#define ANAKIN_SABER_FUNCS_IMPL_CONV_POOLING_H

#include "saber/funcs/impl/impl_macro.h"
namespace anakin{

namespace saber{

template <typename TargetType, DataType OpDtype = AK_FLOAT>
class SaberConv2DPooling : public ImplBase<
        TargetType, OpDtype,
        ConvPoolingParam <TargetType> > {
    SaberStatus trans_weights(const std::vector<Tensor<TargetType> *>& inputs,
                              std::vector<Tensor<TargetType> *>& outputs,
                              ConvPoolingParam<TargetType>& param, Context<TargetType> &ctx,
                              bool in_place = true, Tensor<TargetType>* weight_dev = nullptr) {
        return SaberUnImplError;
    }
};

template <typename TargetType,
        DataType OpDtype = AK_FLOAT>
class VenderConv2DPooling : public ImplBase<
        TargetType, OpDtype,
        ConvPoolingParam <TargetType> > {
    SaberStatus trans_weights(const std::vector<Tensor<TargetType> *>& inputs,
                              std::vector<Tensor<TargetType> *>& outputs,
                              ConvPoolingParam<TargetType>& param, Context<TargetType> &ctx,
                              bool in_place = true, Tensor<TargetType>* weight_dev = nullptr) {
        return SaberUnImplError;
    }
};

}
}

#endif //ANAKIN_SABER_FUNCS_IMPL_CONV_POOLING_H