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
#define _______ KC_TRNS


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
#define KC_RHUI RGB_HUI
#define KC_RHUD RGB_HUD
#define KC_RSAI RGB_SAI
#define KC_RSAD RGB_SAD
#define KC_RVAI RGB_VAI
#define KC_RVAD RGB_VAD

#define KC_RONS RGB_MODE_PLAIN
#define KC_RBRE RGB_MODE_BREATHE

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     GRV , 1  , 2  , 3  , 4  , 5  ,                6  , 7  , 8  , 9  , 0  ,MINS,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     TAB , Q  , W  , E  , R  , T  ,                Y  , U  , I  , O  , P  ,BSLS,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     RED , A  , S  , D  , F  , G  ,                H  , J  , K  , L  ,SCLN,QUOT,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
     LSFT, Z  , X  , C  , V  , B  ,LWIN,     BLU , N  , M  ,COMM,DOT ,SLSH,RSFT,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                      LCTL,LALT,ENT ,         SPC,SBLC,SBRC
  //                  `----+----+----'        `----+----+----'
  ),

  [_BLUE] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
      ESC,RTOG,RMOD,    ,    ,RVAI,               CALC,DEL ,ESC ,BSPC,PSLS,INS ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,    ,    ,    ,    ,RVAD,               SLCK, P7 , P8 , P9 ,PAST,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,RHUI,RHUD,    ,    ,RBRE,               PSCR, P4 , P5 , P6 ,PMNS,BSPC,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
         ,RSAI,RSAD,    ,    ,RONS,    ,         ,NLCK, P1 , P2 , P3 ,PPLS,PENT,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                        MPRV,MNXT,MPLY,        PENT,P0  , PDOT
  //                  `----+----+----'        `----+----+----'

),
  [_RED] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     F12 , F1 , F2 , F3 , F4 , F5 ,                F6 , F7 , F8 , F9 ,F10 ,F11 ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     WLCK,ALF4,CTF4,NDSK,LDSK,RDSK,               HOME,LWRD, UP ,RWRD, END, EQL,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,    ,LCBR,RCBR,LPRN,RPRN,               PGUP,LEFT,DOWN,RGHT,BSPC, DEL,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
     CALD,C_Z ,C_X ,C_C ,C_V ,CDOT,WTAB,     MINS,PLUS, EQL,LABK,RABK,PGDN,CDOT,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                           ,LSFT,A_EN,         ESC ,LCTL,LALT
  //                  `----+----+----'        `----+----+----'
  ),
  [_GREEN] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
         ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,    ,         ,    ,    ,    ,    ,    ,    ,
  //`----+----+----+--+-+----+----+----/    \----+----+----+----+----+----+----'
                           ,    ,    ,             ,    ,
  //                  `----+----+----'        `----+----+----'
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
