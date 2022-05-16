#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _BLUE 1
#define _RED 2
#define _GREEN 3

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  BLUE,
  RED,
  GREEN,
  ADJUST,
  // DYNAMIC_MACRO_RANGE,
};

// void backlight_toggle(void) {
//   //none
// }

//#include "dynamic_macro.h"

#define KC_ KC_TRNS
//#define _______ KC_TRNS

//Layer keys
#define KC_RED TT(_RED)
#define KC_BLU TG(_BLUE)
//#define KC_GRN TT(_GREEN)

//#define KC_LSGR LM(_GREEN, MOD_LSFT)
//#define KC_RSGR LM(_GREEN, MOD_RSFT)
//caps modifier replacements
#define KC_C_Z LCTL(KC_Z)
#define KC_C_C LCTL(KC_C)
#define KC_C_X LCTL(KC_X)
#define KC_C_V LCTL(KC_V)
//#define KC_C_TB LCTL(KC_TAB)
//#define KC_C_T LCTL(KC_T)
//#define KC_S_TB LSFT(KC_TAB)
//#define KC_A_TB LALT(KC_TAB)
#define KC_A_EN LALT(KC_ENT)
#define KC_LWRD LCTL(KC_LEFT)
#define KC_RWRD LCTL(KC_RGHT)
#define KC_CALD LALT(LCTL(KC_DEL))
#define KC_WLCK LWIN(KC_L)
//#define KC_RCTP MT(MOD_CTL, (KC_RPRN))
#define KC_ALF4 LALT(KC_F4)
#define KC_CTF4 LCTL(KC_F4)
// #define KC_STP DYN_REC_STOP
// #define KC_REC DYN_REC_START1                    r
// #define KC_PLAY DYN_MACRO_PLAY1
#define KC_WENT LALT_T(KC_ENT)
#define KC_WTAB LWIN(KC_TAB)

//Win virtual desktop
#define KC_NDSK LGUI(LCTL(KC_D)) //new desktop
#define KC_LDSK LGUI(LCTL(KC_LEFT)) //prev desktop
#define KC_RDSK LGUI(LCTL(KC_RIGHT)) //next desktop
#define KC_CDSK LGUI(LTCL(KC_F4)) //close desktop

//VS quick-action helper
#define KC_CDOT LCTL(KC_DOT)

#define KC_SBLC LSFT_T(KC_LBRC)
#define KC_SBRC LSFT_T(KC_RBRC)

#define KC_RTOG RGB_TOG
#define KC_RMOD RGB_MOD
#define KC_RRMD RGB_RMOD
#define KC_RHUI RGB_HUI
#define KC_RHUD RGB_HUD
#define KC_RSAI RGB_SAI
#define KC_RSAD RGB_SAD
#define KC_RVAI RGB_VAI
#define KC_RVAD RGB_VAD

#define KC_RONS RGB_MODE_PLAIN
#define KC_RBRE RGB_MODE_BREATHE

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_RED,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LWIN,          KC_BLU,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LCTL, KC_LALT, KC_ENT,                    KC_SPC,  KC_SBLC, KC_SBRC
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_BLUE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_RTOG, KC_RMOD, KC_RRMD, _______, KC_RVAI,                            KC_TAB,  KC_SLSH, KC_PAST, KC_BSPC, KC_CALC, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, KC_RVAD,                            KC_P7,   KC_P8,   KC_P9,   KC_PMNS, KC_NLCK, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_RHUI, KC_RHUD, _______, _______, KC_RBRE,                            KC_P4,   KC_P5,   KC_P6,   KC_PPLS, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_RSAI, KC_RSAD, _______, _______, KC_RONS, _______,          _______, KC_P1,   KC_P2,   KC_P3,   KC_PENT, KC_PEQL, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, KC_P0,   KC_PDOT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

   [_RED] = LAYOUT(
   //┌────────┬────────┬────────┬────────┬────────┬────────┐                    ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_F12,  KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                      KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,
   //├────────┼────────┼────────┼────────┼────────┼────────┤                    ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_WLCK, _______, _______, _______, _______, _______,                     KC_HOME, KC_LWRD, KC_UP  , KC_RWRD, KC_END , KC_EQL ,
   //├────────┼────────┼────────┼────────┼────────┼────────┤                    ├────────┼────────┼────────┼────────┼────────┼────────┤
      _______, _______, KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN,                      KC_PGUP, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC, KC_DEL,
   //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐  ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_CALD, KC_C_Z,  KC_C_X,  KC_C_C,  KC_C_V,  KC_CDOT, KC_WTAB,    KC_MINS, KC_PLUS, KC_EQL,  KC_LABK, KC_RABK, KC_PGDN, KC_CDOT,
   //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘  └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                     _______, KC_LSFT, KC_A_EN,              KC_ESC,  KC_LCTL, KC_LALT
                                 // └────────┴────────┴────────┘           └────────┴────────┴────────┘
   ),

   [_GREEN] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )

};

bool bnumlock=false;
// bool otherpressed=false;
// bool inblue=false;

void led_set_kb(uint8_t usb_led){
    if (usb_led & (1<<USB_LED_NUM_LOCK)) {
        bnumlock = true;
    } else {
        bnumlock = false;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record){
  switch (keycode) {
    case BLUE:
      if (record->event.pressed) {
        // otherpressed=false;
        // inblue=true;
        if(IS_LAYER_OFF(_BLUE)){
          if(!bnumlock){
            register_code(KC_NLCK);
            unregister_code(KC_NLCK);
          }
          layer_on(_BLUE);
        }
        else{
          layer_off(_BLUE);
        }
      }
      //else{
        // if(otherpressed){
          layer_off(_BLUE);
        //}
        // inblue=false;
        // otherpressed=false;
      //}
      return false;
      break;
  }
  // if(inblue && !otherpressed && (keycode != BLUE) && (keycode != KC_NLCK) && record->event.pressed){
  //   inblue=false;
  //   otherpressed=true;
  // }
  return true;
}
