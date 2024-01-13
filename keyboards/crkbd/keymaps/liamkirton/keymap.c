/*
Copyright 2019 @foostan
Copyright 2023 Liam Kirton

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

#define C_DSK_L LCTL(LGUI(KC_LEFT))
#define C_DKS_R LCTL(LGUI(KC_RIGHT))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TAB,    KC_A,    KC_S,    KC_D,    KC_F,     KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RGUI,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCTL,   TT(1),  KC_SPC,     KC_ENT,   TT(2), KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, C_DSK_L,   KC_UP, C_DKS_R, XXXXXXX, XXXXXXX,                         KC_7,    KC_8,    KC_9, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_LEFT, KC_DOWN,KC_RIGHT, XXXXXXX, XXXXXXX,                         KC_4,    KC_5,    KC_6, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_LCTL, KC_LGUI, KC_LALT, XXXXXXX, XXXXXXX,                         KC_1,    KC_2,    KC_3, XXXXXXX ,XXXXXXX, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,       KC_0, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_GRV, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_NUHS, LSFT(KC_NUHS), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_MUTE, KC_MPRV, KC_MSTP, KC_MPLY, KC_MNXT,                      KC_MINS, KC_PLUS,  KC_EQL, KC_UNDS, KC_NUBS, LSFT(KC_NUBS),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,                      KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  )
};

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

const key_override_t pgup_key_override = ko_make_basic(MOD_MASK_ALT, KC_UP, KC_PGUP);
const key_override_t pgdn_key_override = ko_make_basic(MOD_MASK_ALT, KC_DOWN, KC_PGDN);
const key_override_t home_key_override = ko_make_basic(MOD_MASK_ALT, KC_LEFT, KC_HOME);
const key_override_t end_key_override = ko_make_basic(MOD_MASK_ALT, KC_RIGHT, KC_END);

const key_override_t f1_key_override = ko_make_basic(MOD_MASK_CTRL, KC_GRV, KC_F1);
const key_override_t f2_key_override = ko_make_basic(MOD_MASK_CTRL, KC_EXLM, KC_F2);
const key_override_t f3_key_override = ko_make_basic(MOD_MASK_CTRL, KC_AT, KC_F3);
const key_override_t f4_key_override = ko_make_basic(MOD_MASK_CTRL, KC_HASH, KC_F4);
const key_override_t f5_key_override = ko_make_basic(MOD_MASK_CTRL, KC_DLR, KC_F5);
const key_override_t f6_key_override = ko_make_basic(MOD_MASK_CTRL, KC_PERC, KC_F6);
const key_override_t f7_key_override = ko_make_basic(MOD_MASK_CTRL, KC_CIRC, KC_F7);
const key_override_t f8_key_override = ko_make_basic(MOD_MASK_CTRL, KC_AMPR, KC_F8);
const key_override_t f9_key_override = ko_make_basic(MOD_MASK_CTRL, KC_ASTR, KC_F9);
const key_override_t f10_key_override = ko_make_basic(MOD_MASK_CTRL, KC_KB_MUTE, KC_F10);
const key_override_t f11_key_override = ko_make_basic(MOD_MASK_CTRL, KC_KB_VOLUME_DOWN, KC_F11);
const key_override_t f12_key_override = ko_make_basic(MOD_MASK_CTRL, KC_KB_VOLUME_UP, KC_F12);

const key_override_t **key_overrides = (const key_override_t *[]){
    &delete_key_override,

    &pgup_key_override,
    &pgdn_key_override,
    &home_key_override,
    &end_key_override,

    &f1_key_override,
    &f2_key_override,
    &f3_key_override,
    &f4_key_override,
    &f5_key_override,
    &f6_key_override,
    &f7_key_override,
    &f8_key_override,
    &f9_key_override,
    &f10_key_override,
    &f11_key_override,
    &f12_key_override,

    NULL
};