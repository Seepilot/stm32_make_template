/*
 * Copyright (C) 2010-2021 Arm Limited or its affiliates. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Generated by generate_test_data.py using TFL version 2.5.0 as reference.
#pragma once
#include <stdint.h>

const q15_t fully_connected_int16_big_input[2100] = {
    -3, 1,  -4, -3, 1,  3,  -2, 3,  4,  -4, 4,  1,  -2, -2, -4, 0,  2,  -3, 3,  3,  -1, -3, 4,  -4, -2, -2, 3,  2,  0,
    -4, 3,  -2, -1, 2,  2,  3,  -2, -1, -2, -3, -1, 2,  -5, -1, 0,  3,  2,  -5, 1,  3,  -4, 4,  -4, -4, -2, 4,  -3, -1,
    -4, -4, -4, -3, -2, 3,  -5, 3,  2,  1,  2,  4,  -3, 0,  0,  2,  4,  -2, -3, 2,  1,  2,  -1, -5, -3, 2,  3,  -1, 2,
    -4, 2,  -4, -5, -4, 1,  -2, 0,  -5, -3, 1,  3,  4,  3,  0,  -4, 0,  4,  2,  4,  3,  -5, -1, -4, 3,  4,  1,  -2, -2,
    1,  -5, 0,  -2, -4, -3, -4, 0,  -2, -3, -5, 0,  -5, -4, 1,  3,  1,  -2, -5, -2, -5, 2,  1,  0,  -3, -3, 3,  -3, -1,
    4,  -2, -1, -4, 4,  2,  4,  0,  3,  -3, 1,  -5, -5, 2,  3,  2,  4,  1,  -5, 1,  2,  1,  3,  4,  0,  4,  2,  3,  0,
    -2, 0,  0,  4,  0,  -5, -5, 4,  2,  -1, -2, 0,  -1, -3, 1,  4,  2,  -4, 0,  4,  3,  -4, 2,  -5, 0,  1,  -3, 0,  -5,
    4,  -5, 3,  0,  -3, 4,  2,  2,  0,  -3, -1, 1,  -2, 3,  -3, 4,  -2, -3, -1, 0,  -5, 4,  0,  2,  -2, 2,  -3, 4,  2,
    1,  -2, -3, 3,  -5, -4, -2, -1, 0,  4,  4,  -4, -1, -2, -1, 4,  -1, -1, -1, 0,  -1, -5, 2,  -3, 2,  3,  3,  2,  -1,
    0,  4,  1,  -2, 0,  -1, 4,  1,  -1, 0,  -1, 1,  1,  -3, -3, 0,  -3, 1,  -3, 0,  3,  -1, 0,  -1, 0,  4,  -5, 3,  -5,
    -1, 3,  -3, -4, 3,  -4, -3, -4, 2,  -1, 0,  -3, 2,  -2, 3,  -5, 1,  -2, -1, -4, 1,  -2, -4, -3, -3, 1,  2,  1,  -3,
    4,  -5, -3, 2,  0,  -1, 3,  -3, 3,  2,  -1, -5, 3,  -5, 4,  1,  1,  4,  -3, -5, 0,  -5, 0,  3,  1,  3,  0,  2,  -4,
    2,  -1, 1,  -1, -1, 1,  4,  4,  0,  -2, 2,  2,  -1, 1,  0,  -3, -3, 3,  4,  3,  3,  -1, 4,  1,  -3, 4,  -1, 3,  -3,
    -3, -4, 4,  2,  -4, -2, -4, 1,  1,  -5, -5, -2, -3, -1, 1,  -3, -2, -2, -2, -3, -5, -3, 0,  3,  -1, 2,  -1, -5, -4,
    4,  4,  0,  3,  -3, 0,  4,  2,  3,  -3, 0,  3,  -4, 1,  -1, -3, 1,  -2, -1, -1, -3, -4, -2, 4,  3,  -2, 0,  2,  4,
    0,  -4, 2,  1,  -5, -4, 4,  -3, 3,  3,  -4, -3, 1,  -1, 4,  -5, -3, -3, -4, 0,  4,  1,  -3, 3,  1,  3,  -3, 0,  -5,
    1,  -5, -4, 3,  -5, -1, 1,  -5, -4, 2,  0,  2,  3,  -5, -5, -2, 1,  0,  -1, -1, -1, -2, 1,  4,  -4, -2, 0,  1,  2,
    -4, 0,  1,  -1, -2, 3,  4,  -2, -4, 0,  -2, 0,  0,  4,  1,  0,  -4, 4,  -5, 2,  -3, 4,  4,  1,  -3, -1, -1, 2,  3,
    -2, 0,  0,  3,  -3, 4,  -3, -5, -3, 2,  0,  4,  -2, 3,  -4, 3,  3,  -1, -2, -5, -2, -1, 2,  0,  4,  2,  0,  4,  -2,
    0,  3,  3,  0,  2,  -1, 4,  3,  1,  3,  -3, 4,  2,  2,  2,  -2, 4,  0,  -1, 0,  1,  0,  -3, -2, -4, 1,  0,  -1, 3,
    2,  -5, -1, 0,  -4, -2, -4, -5, -1, 0,  -3, -5, 0,  1,  -3, -3, 4,  3,  -1, -3, 3,  -5, 0,  -2, -1, 1,  -5, -2, -2,
    -1, 2,  0,  -3, -4, 2,  -1, -1, -2, -4, -2, 0,  -3, -1, -2, -4, -3, -2, -3, -1, -1, -3, 2,  -3, 3,  -2, 2,  3,  -1,
    1,  -4, -4, 0,  3,  4,  -3, -1, 4,  -4, 2,  -2, -1, 2,  -1, 3,  -3, 3,  0,  -2, -5, 2,  4,  -1, -1, 3,  -2, 1,  -1,
    -4, 2,  3,  0,  3,  3,  4,  4,  2,  4,  4,  -1, 4,  -4, 4,  4,  1,  2,  -3, 2,  -4, 2,  0,  -2, 2,  0,  -3, 1,  4,
    -3, -1, 3,  -1, 0,  0,  -4, -3, 1,  -2, -1, -3, 2,  -5, 0,  -1, -1, 1,  0,  -2, 0,  1,  0,  1,  1,  4,  -1, 3,  0,
    2,  0,  3,  0,  -2, 4,  3,  -5, -1, -3, 0,  -1, -3, 0,  3,  -4, 2,  -4, 4,  -3, 1,  1,  -5, -2, -1, 3,  2,  2,  0,
    4,  3,  -1, -2, -4, 0,  0,  4,  4,  2,  0,  0,  -4, -5, 1,  -2, -2, 2,  -1, -3, -2, 0,  0,  -4, 3,  2,  2,  3,  -4,
    -5, -2, -5, 4,  -4, 2,  4,  4,  3,  -4, 4,  4,  -3, -2, 1,  -1, -5, -5, 2,  2,  -5, 3,  3,  -3, -5, -5, 0,  -1, -2,
    0,  3,  2,  -4, -4, 2,  -1, -1, -3, -3, -2, 1,  -4, 4,  4,  -2, -2, 0,  3,  -4, -5, -5, 2,  -5, 4,  4,  -5, -3, -2,
    -2, 4,  4,  1,  4,  1,  -1, -2, 0,  -3, 2,  1,  3,  -3, 0,  -1, 2,  -5, -5, 3,  2,  3,  4,  -2, -3, 3,  -1, -5, 2,
    4,  0,  4,  -1, 4,  -2, -2, -5, 1,  -4, -4, -2, 4,  2,  -4, 0,  1,  -5, 0,  2,  4,  -2, -4, 2,  -3, 4,  1,  1,  -4,
    -3, -4, 1,  1,  1,  4,  -2, 4,  -3, -2, 1,  1,  -1, -3, 0,  1,  4,  0,  -4, 4,  4,  -2, -3, 2,  -1, 1,  4,  -5, 0,
    -3, -5, 4,  -3, -1, 4,  4,  0,  -4, -4, 3,  -1, 0,  -3, -1, -4, -5, 2,  -5, 4,  2,  -2, -2, 4,  4,  -2, -5, -4, 2,
    -4, -3, -4, -3, -5, -2, 1,  -5, -1, -5, -3, 4,  3,  0,  -4, 2,  0,  2,  4,  -2, -3, 1,  -5, -2, 4,  3,  -5, -2, 4,
    0,  -5, -1, 3,  -1, -1, -2, 3,  0,  4,  1,  -4, 2,  4,  1,  4,  -4, 3,  -1, -4, -3, -4, -2, -2, -4, 3,  -4, -5, 0,
    -3, -3, -1, -3, 4,  1,  2,  -5, 0,  0,  -3, 3,  -2, 4,  -5, -3, -4, 1,  -5, 1,  0,  3,  2,  3,  -3, 4,  1,  -4, 2,
    -5, -5, -3, -2, -4, 0,  -5, 2,  -1, -2, 1,  0,  4,  2,  -3, -5, 1,  4,  -4, 0,  -2, -3, -3, -3, 1,  0,  2,  -5, -1,
    -3, -5, -5, 2,  3,  4,  -4, 3,  2,  -2, -1, -2, -3, 0,  4,  4,  1,  -4, 2,  -4, 2,  -5, 4,  -1, 1,  2,  -4, -4, -3,
    3,  -3, -4, 0,  4,  0,  1,  -3, -1, 4,  -2, 3,  -5, 1,  3,  0,  -1, -2, 1,  4,  4,  -1, 2,  0,  -4, -5, 2,  1,  4,
    -3, 3,  -3, -3, 1,  2,  -4, -2, -1, -2, -3, -3, -1, -3, 1,  -4, 4,  -4, -1, 3,  1,  0,  -3, 1,  1,  -1, 2,  4,  1,
    3,  3,  -1, -2, -1, -3, 3,  4,  4,  1,  3,  0,  3,  4,  4,  0,  4,  -3, 0,  -1, 1,  3,  -4, 3,  -3, -4, -5, -5, -1,
    -4, 4,  4,  4,  -1, -2, -5, 4,  -2, 1,  -3, -5, 1,  4,  4,  4,  -2, -5, -1, -2, 2,  1,  -5, 4,  -2, 3,  -5, 0,  -1,
    0,  2,  -2, -5, 4,  -2, 1,  2,  4,  -4, -3, -4, 2,  4,  -1, 3,  -2, 1,  -3, 0,  1,  -4, 4,  2,  -2, 3,  -1, -5, 4,
    1,  1,  3,  -5, 1,  -4, -1, -2, -5, -2, 2,  -3, -4, -3, -3, 4,  -5, -1, 0,  1,  1,  -4, -2, 0,  -5, -4, -2, 4,  -4,
    -1, 3,  -4, 0,  -5, 3,  1,  -4, -5, -4, -3, 1,  -2, -2, -5, 0,  3,  0,  -4, 3,  1,  2,  -1, 1,  4,  -2, -3, -1, 3,
    -2, 2,  3,  -1, -1, 3,  2,  1,  -5, -1, -5, 3,  2,  2,  2,  1,  -5, -5, -1, 0,  0,  0,  -1, 1,  -5, -2, 1,  -4, 2,
    -2, 2,  4,  -4, 0,  -3, -1, -4, 0,  -1, -1, -1, 4,  1,  -5, -5, -5, -5, 2,  1,  0,  -1, 1,  1,  -4, 3,  -5, 0,  0,
    4,  2,  -4, -1, -2, -2, 0,  2,  -5, -1, 2,  1,  1,  3,  -4, 4,  -4, -1, 3,  1,  3,  -3, -4, -3, 1,  -2, -4, 1,  0,
    -1, 2,  1,  -2, -5, -4, 2,  -2, 1,  -4, 1,  2,  -5, -2, 1,  -1, -4, -5, 0,  4,  1,  -4, 0,  2,  3,  -5, -2, -4, -4,
    -2, 2,  -1, 3,  -3, 3,  0,  3,  3,  -5, 0,  -4, 2,  0,  4,  -3, -4, -4, 2,  3,  1,  3,  -4, -2, -3, 1,  2,  -4, 0,
    -4, -5, 0,  3,  -2, 4,  -4, -4, -5, 4,  -1, -2, 4,  -4, 0,  -1, 1,  4,  -2, -4, -4, -4, 2,  2,  -4, -2, 3,  3,  -5,
    -3, -4, -5, -3, 1,  -3, -4, 3,  -5, 0,  -4, -1, -4, 2,  0,  -1, 4,  -3, 1,  0,  -5, -3, 0,  4,  1,  -5, -1, -2, 0,
    0,  -4, 2,  -5, -2, 0,  3,  4,  2,  1,  -4, -1, 2,  -3, 4,  -4, -4, 0,  -4, 2,  1,  2,  4,  3,  -2, -4, -1, 3,  -4,
    1,  3,  -4, 0,  -4, -3, 2,  -1, 1,  3,  4,  -5, 3,  -5, -2, -2, -1, -2, 3,  -5, -1, -3, 0,  2,  -4, -3, 0,  -2, 4,
    -2, -3, -5, -4, -1, -2, -4, -4, -1, 3,  -2, -5, 2,  4,  -4, -4, 0,  1,  0,  -2, -2, -2, 4,  2,  -2, 2,  0,  -1, 2,
    3,  4,  -2, -5, 0,  4,  2,  -4, 0,  2,  -5, 0,  -3, -3, -4, -3, -2, 3,  -3, -3, 2,  2,  -2, 4,  -3, -1, -3, -1, -2,
    3,  -4, -1, 2,  -1, -1, 1,  1,  3,  3,  -3, -5, -4, 0,  -1, 3,  -5, 2,  -1, 0,  2,  -4, -2, -5, -1, 4,  -5, -1, 4,
    2,  -4, -2, 4,  2,  -2, -2, -4, 3,  0,  1,  2,  -2, 0,  -4, -5, 4,  3,  1,  3,  3,  -4, 0,  -5, -4, 2,  3,  4,  0,
    -4, 1,  -4, 0,  -1, 3,  2,  -3, 0,  -1, 4,  3,  -3, 3,  0,  0,  0,  -4, -3, 3,  -4, 3,  -1, -4, 1,  -4, 2,  2,  -3,
    2,  -1, 3,  0,  0,  -2, 1,  -3, -2, -1, -4, 1,  -3, 4,  1,  4,  -5, 0,  1,  1,  3,  -3, 4,  4,  0,  -5, 4,  1,  0,
    -2, -5, 0,  4,  -3, -2, -1, 0,  -2, 4,  -1, -5, 4,  0,  -4, 1,  -1, 3,  2,  0,  3,  1,  3,  3,  -5, -2, 1,  4,  -3,
    0,  4,  -4, 4,  -4, -4, -2, -5, 3,  -1, 1,  4,  3,  -5, 4,  -5, -2, -2, -5, -3, -2, -5, 0,  -2, -1, -4, 4,  1,  -2,
    3,  -4, -2, -5, 2,  -5, -5, 0,  -4, -3, 2,  -3, 3,  4,  1,  -4, 4,  1,  -3, -1, -1, 4,  -2, -4, -3, 3,  3,  4,  3,
    1,  -5, 0,  -3, 3,  0,  4,  -5, -4, 3,  -3, -2, -5, 4,  2,  0,  -4, -5, 2,  3,  -1, -1, 4,  3,  2,  0,  -3, 3,  0,
    2,  -4, 1,  -4, -5, 1,  -3, 4,  0,  -5, 4,  -4, -3, -4, 3,  2,  4,  3,  -5, 0,  3,  4,  -2, 1,  -5, 3,  0,  -2, 4,
    2,  4,  -3, -2, -2, -5, 1,  -3, 1,  -5, 1,  -1, 2,  -5, 4,  -2, 4,  -4, -2, -2, -1, 2,  -4, 0,  3,  -3, 2,  -1, -2,
    -2, -4, -4, -3, 1,  -2, 2,  0,  -5, 3,  -2, 2,  -3, -1, 4,  3,  -5, -2, -2, 4,  4,  -2, -3, -1, -1, 4,  -5, 1,  3,
    2,  -3, 3,  -3, -2, 0,  3,  3,  -3, 2,  4,  2,  0,  3,  -2, -2, 2,  1,  -1, -1, 2,  4,  -4, 1,  2,  1,  -3, -2, 3,
    -3, -2, -2, -3, -4, -4, -1, -2, -5, 1,  0,  -2, 1,  4,  -1, -2, 0,  4,  -3, 4,  2,  -3, 2,  4,  4,  4,  -5, 4,  -3,
    0,  4,  3,  -2, 0,  3,  -2, 1,  4,  3,  4,  -4, 1,  3,  3,  -5, 0,  3,  4,  3,  1,  -2, -2, 4,  -5, -4, 1,  4,  -3,
    -5, 0,  0,  -4, -4, -1, 3,  -5, -5, 2,  -3, 1,  -3, 4,  -3, -2, -2, 0,  0,  -1, -1, 3,  2,  3,  3,  3,  -2, -5, -4,
    -3, -4, -4, -1, -2, 3,  -2, -1, -4, 1,  -1, -4, -4, 3,  -1, -4, 1,  -2, 3,  4,  -1, 2,  -5, -4, 2,  -5, -3, 4,  -1,
    3,  -3, 3,  -5, 1,  -3, 2,  1,  -1, 2,  4,  -2};
