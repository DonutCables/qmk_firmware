/*
Copyright 2020 DonutCables

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

#define VENDOR_ID 			0xDCDC
#define PRODUCT_ID 		0x0003
#define DEVICE_VER 		0x0001
#define MANUFACTURER 	DonutCables
#define PRODUCT 				RotaryPad
#define DESCRIPTION 		DonutCables RotaryPad testbed

#define MATRIX_ROWS 3
#define MATRIX_COLS 3

#define MATRIX_ROW_PINS { D4, C6, D7 }
/#define MATRIX_ROW_PINS { D4, C6, D7 } /* 4, 5, 6 */
#define MATRIX_COL_PINS { B3, B2, B6 }
/#define MATRIX_COL_PINS { B3, B2, B6 } /* 14, 16, 10, flipped horizontal */
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

/* Manually added encoder settings */
#define ENCODERS_PAD_A { E6, E6, E6, B4, B4, B4, B5, B5, B5 } /* 7, 8, 9 */
#define ENCODERS_PAD_B { F6, F7, B1, F6, F7, B1, F6, F7, B1 } /* A1, A0, 15, flipped horizontal */
#define ENCODER_DIRECTION_FLIP

#define DEBOUNCE 5
