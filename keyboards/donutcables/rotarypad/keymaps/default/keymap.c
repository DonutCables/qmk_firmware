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

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
};

// Defines the keycodes used by our macros in process_record_user
// Only use 'SAFE_RANGE' on the first one
enum custom_keycodes {
    ENC0 = SAFE_RANGE,
    ENC1,
    ENC2,
    ENC3,
    ENC4,
    ENC5,
    ENC6,
    ENC7,
    ENC8,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
		ENC0, ENC1, ENC2, 
		ENC3, ENC4, ENC5, 
		ENC6, ENC7, ENC8)
};

// Block for setting my tap/hold binds for the encoders
// ridingqwerty on Discord did this for me
uint32_t key_timer;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ENC0:  // system block
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) < TAPPING_TERM) {
                    register_code(KC_F24);
                    tap_code(KC_F3);
                    unregister_code(KC_F24);
                } else {
                    register_code(KC_F24);
                    tap_code(KC_F4);
                    unregister_code(KC_F24);
                }
            }
            return false;
            break;
        case ENC1:  // focused block
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) < TAPPING_TERM) {
                    register_code(KC_F24);
                    tap_code(KC_F7);
                    unregister_code(KC_F24);
                } else {
                    register_code(KC_F24);
                    tap_code(KC_F8);
                    unregister_code(KC_F24);
                }
            }
            return false;
            break;
        case ENC2:  // spotify block
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) < TAPPING_TERM) {
                    register_code(KC_F24);
                    tap_code(KC_F11);
                    unregister_code(KC_F24);
                } else {
                    register_code(KC_F24);
                    tap_code(KC_F12);
                    unregister_code(KC_F24);
                }
            }
            return false;
            break;
        case ENC3:  // discord block
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) < TAPPING_TERM) {
                    register_code(KC_F24);
                    tap_code(KC_3);
                    unregister_code(KC_F24);
                } else {
                    register_code(KC_F24);
                    tap_code(KC_4);
                    unregister_code(KC_F24);
                }
            }
            return false;
            break;
        case ENC4:  // firefox block
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) < TAPPING_TERM) {
                    register_code(KC_F24);
                    tap_code(KC_7);
                    unregister_code(KC_F24);
                } else {
                    register_code(KC_F24);
                    tap_code(KC_8);
                    unregister_code(KC_F24);
                }
            }
            return false;
            break;
        case ENC5:  // F17 block
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) < TAPPING_TERM) {
                    register_code(KC_F24);
                    tap_code(KC_MINS);
                    unregister_code(KC_F24);
                } else {
                    register_code(KC_F24);
                    tap_code(KC_EQL);
                    unregister_code(KC_F24);
                }
            }
            return false;
            break;
        case ENC6:  // F18 block
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) < TAPPING_TERM) {
                    register_code(KC_F24);
                    tap_code(KC_P3);
                    unregister_code(KC_F24);
                } else {
                    register_code(KC_F24);
                    tap_code(KC_P4);
                    unregister_code(KC_F24);
                }
            }
            return false;
            break;
        case ENC7:  // F19 block
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) < TAPPING_TERM) {
                    register_code(KC_F24);
                    tap_code(KC_P7);
                    unregister_code(KC_F24);
                } else {
                    register_code(KC_F24);
                    tap_code(KC_P8);
                    unregister_code(KC_F24);
                }
            }
            return false;
            break;
        case ENC8:  // F20 block
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) < TAPPING_TERM) {
                    register_code(KC_F24);
                    tap_code(KC_PMNS);
                    unregister_code(KC_F24);
                } else {
                    register_code(KC_F24);
                    tap_code(KC_PPLS);
                    unregister_code(KC_F24);
                }
            }
            return false;
            break;
    }
    return true;
}

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {  // First encoder
        if (clockwise) {
            register_code(KC_F24);
            tap_code(KC_F2);
            unregister_code(KC_F24);
        } else {
            register_code(KC_F24);
            tap_code(KC_F1);
            unregister_code(KC_F24);
        }
    } else if (index == 1) {  // Second encoder
        if (clockwise) {
            register_code(KC_F24);
            tap_code(KC_F6);
            unregister_code(KC_F24);
        } else {
            register_code(KC_F24);
            tap_code(KC_F5);
            unregister_code(KC_F24);
        }
    } else if (index == 2) {  // Third encoder
        if (clockwise) {
            register_code(KC_F24);
            tap_code(KC_F10);
            unregister_code(KC_F24);
        } else {
            register_code(KC_F24);
            tap_code(KC_F9);
            unregister_code(KC_F24);
        }
    } else if (index == 3) {  // Fourth encoder
        if (clockwise) {
            register_code(KC_F24);
            tap_code(KC_2);
            unregister_code(KC_F24);
        } else {
            register_code(KC_F24);
            tap_code(KC_1);
            unregister_code(KC_F24);
        }
    } else if (index == 4) {  // Fifth encoder
        if (clockwise) {
            register_code(KC_F24);
            tap_code(KC_6);
            unregister_code(KC_F24);
        } else {
            register_code(KC_F24);
            tap_code(KC_5);
            unregister_code(KC_F24);
        }
    } else if (index == 5) {  // Sixth encoder
        if (clockwise) {
            register_code(KC_F24);
            tap_code(KC_0);
            unregister_code(KC_F24);
        } else {
            register_code(KC_F24);
            tap_code(KC_9);
            unregister_code(KC_F24);
        }
    } else if (index == 6) {  // Seventh encoder
        if (clockwise) {
            register_code(KC_F24);
            tap_code(KC_P2);
            unregister_code(KC_F24);
        } else {
            register_code(KC_F24);
            tap_code(KC_P1);
            unregister_code(KC_F24);
        }
    } else if (index == 7) {  // Eighth encoder
        if (clockwise) {
            register_code(KC_F24);
            tap_code(KC_P6);
            unregister_code(KC_F24);
        } else {
            register_code(KC_F24);
            tap_code(KC_P5);
            unregister_code(KC_F24);
        }
    } else if (index == 8) {  // Ninth encoder
        if (clockwise) {
            register_code(KC_F24);
            tap_code(KC_P0);
            unregister_code(KC_F24);
        } else {
            register_code(KC_F24);
            tap_code(KC_P9);
            unregister_code(KC_F24);
        }
    }
}
