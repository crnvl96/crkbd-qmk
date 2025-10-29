/*
   Copyright 2019 @foostan
   Copyright 2020 Drashna Jaelre <@drashna>

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

// crkbd config of Adran Carnavale
// crnvl96
// add inside keyboards/crkbd/keymaps/crnvl96/keymap.c

#include QMK_KEYBOARD_H

#define UNICODE_SELECTED_MODES UC_LNX

// Home row mod aliases (max 5 letters)
#define GA LGUI_T(KC_A)
#define AA LALT_T(KC_S)
#define CA LCTL_T(KC_D)
#define SA LSFT_T(KC_F)
#define SJ RSFT_T(KC_J)
#define CK RCTL_T(KC_K)
#define AL RALT_T(KC_L)
#define GQ RGUI_T(KC_QUOT)

// Additional home row mods for X and .
#define XA RALT_T(KC_X)
#define DA RALT_T(KC_DOT)

// Mod taps for layers
#define SJ1 RSFT_T(KC_TRANSPARENT)
#define CK1 RCTL_T(KC_TRANSPARENT)
#define AL1 RALT_T(KC_TRANSPARENT)
#define GQ1 RGUI_T(KC_TRANSPARENT)

#define GA2 LGUI_T(KC_TRANSPARENT)
#define AA2 LALT_T(KC_TRANSPARENT)
#define CA2 LCTL_T(KC_TRANSPARENT)
#define SA2 LSFT_T(KC_TRANSPARENT)

#define SJ3 RSFT_T(KC_TRANSPARENT)
#define CK3 RCTL_T(KC_TRANSPARENT)
#define AL3 RALT_T(KC_TRANSPARENT)
#define GQ3 RGUI_T(KC_TRANSPARENT)

#define GA4 LGUI_T(KC_SCLN)
#define AA4 LALT_T(KC_4)
#define CA4 LCTL_T(KC_5)
#define SA4 LSFT_T(KC_6)

// Thumb key aliases
#define TAB1 LT(1, KC_TAB)
#define ENT2 LT(2, KC_ENT)
#define SPC3 LT(3, KC_SPC)
#define BSPC4 LT(4, KC_BSPC)

enum combo_events {
    COMBO_ESC,
    COMBO_ESC_TWO,
    COMBO_DEL,
    COMBO_CAPS,
};

const uint16_t PROGMEM combo_esc[] = {KC_G, KC_H, COMBO_END};
const uint16_t PROGMEM combo_del[] = {KC_Z, KC_SLSH, COMBO_END};
const uint16_t PROGMEM combo_caps[] = {KC_B, KC_N, COMBO_END};
const uint16_t PROGMEM combo_l_c[] = {KC_L, KC_C, COMBO_END};

combo_t key_combos[] = {
    [COMBO_ESC] = COMBO(combo_esc, KC_ESC),
    [COMBO_DEL] = COMBO(combo_del, KC_DEL),
    [COMBO_CAPS] = COMBO(combo_caps, KC_CAPS),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        KC_NO, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_Y,    KC_U,    KC_I,    KC_O,     KC_P,    KC_NO,
        KC_NO, GA,      AA,      CA,      SA,      KC_G,         KC_H,    SJ,      CK,      AL,       GQ,      KC_NO,
        KC_NO, KC_Z,    XA,      KC_C,    KC_V,    KC_B,         KC_N,    KC_M,    KC_COMM, DA,       KC_SLSH, KC_NO,
                                 KC_NO,   TAB1,    ENT2,         SPC3,    BSPC4,   KC_NO
    ),
    [1] = LAYOUT_split_3x6_3(
        KC_NO, KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_NO,        KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,
        KC_NO, KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_NO,        KC_NO,   SJ1,     CK1,     AL1,      GQ1,     KC_NO,
        KC_NO, KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_NO,        KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,
                                 KC_NO,   KC_NO,   KC_NO,        KC_NO,   KC_NO,   KC_NO
    ),
    [2] = LAYOUT_split_3x6_3(
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,        KC_NO,   KC_PSCR, KC_NO,   KC_NO,    KC_NO,   KC_NO,
        KC_NO, GA2,     AA2,     CA2,     SA2,     KC_NO,        KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_NO,   KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,        KC_HOME, KC_NO,   KC_NO,   KC_NO,    KC_END,  KC_NO,
                                 KC_NO,   KC_NO,   KC_NO,        KC_NO,   KC_NO,   KC_NO
    ),
    [3] = LAYOUT_split_3x6_3(
        KC_NO, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,      KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,
        KC_NO, KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,      KC_NO,   SJ3,     CK3,     AL3,      GQ3,     KC_NO,
        KC_NO, KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE,      KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,
                                 KC_NO,   KC_RPRN, KC_UNDS,      KC_NO,   KC_NO,   KC_NO
    ),
    [4] = LAYOUT_split_3x6_3(
        KC_NO, KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC,      KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,
        KC_NO, GA4,     AA4,     CA4,     SA4,     KC_EQL,       KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,
        KC_NO, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS,      KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,
                                 KC_NO,   KC_0,    KC_MINS,      KC_NO,   KC_NO,   KC_NO
    )
};
