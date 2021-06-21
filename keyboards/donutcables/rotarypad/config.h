/*
Copyright 2021 DonutCables <contact@donutcables.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

#define VENDOR_ID 		0x4443
#define PRODUCT_ID 		0x7270
#define DEVICE_VER 		0x0001
#define MANUFACTURER 	DonutCables
#define PRODUCT 		RotaryPad

#define MATRIX_ROWS 3
#define MATRIX_COLS 3

#define MATRIX_ROW_PINS { F4, F6, B3 }
#define MATRIX_COL_PINS { B6, E6, C6 }

#define DIODE_DIRECTION COL2ROW
#define DEBOUNCE 5

#define ENCODER_MATRIX
#define ENCODERS_ROW_PINS { F4, F6, B3 } 
#define ENCODERS_COL_PINS { B2, F5, D7, F7, D4, B1 }

#define ENCODERS_PAD_A { { 0, 0 }, { 0, 2 }, { 0, 4 }, \
                         { 1, 0 }, { 1, 2 }, { 1, 4 }, \
                         { 2, 0 }, { 2, 2 }, { 2, 4 } } 
#define ENCODERS_PAD_B { { 0, 1 }, { 0, 3 }, { 0, 5 }, \
                         { 1, 1 }, { 1, 3 }, { 1, 5 }, \
                         { 2, 1 }, { 2, 3 }, { 2, 5 } }
