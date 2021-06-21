/*
Copyright 2020 DonutCables <contact@donutcables.com>

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

#define VENDOR_ID 			0x4443
#define PRODUCT_ID 		0x7270
#define DEVICE_VER 		0x0001
#define MANUFACTURER 	DonutCables
#define PRODUCT 				RotaryPad

#define MATRIX_ROWS 3
#define MATRIX_COLS 3

#define MATRIX_ROW_PINS { F4, F6, B3 }
#define MATRIX_COL_PINS { B6, E6, C6 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW
#define DEBOUNCE 8

#define ENCODERS_PAD_A { F5, F5, F5, F7, F7, F7, B1, B1, B1 } //rows
// Since I have PAD_A set up as rows it probably needs to be changed to the below option to work with the multiple-columns setup
// #define ENCODERS_PAD_A { F5, F7, B1, F5, F7, B1, F5, F7, B1 }

#define ENCODERS_PAD_B { B2, D7, D4, B2, D7, D4, B2, D7, D4 } //columns
