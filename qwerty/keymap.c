#include QMK_KEYBOARD_H
#include "version.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
    RGB_SLD = ML_SAFE_RANGE,
    ST_MACRO_0,
    ST_MACRO_1,
    A_CIRCLE,
    A_UMLAUT,
    O_UMLAUT,
    TILDE,
};

enum tap_dance_codes {
    DANCE_0,
    DANCE_1,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    LT(4,KC_ESCAPE), KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           ST_MACRO_0,                                     KC_BSLASH,      KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPACE,      
    KC_TAB,          KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           LGUI(KC_H),                                     KC_SLASH,       KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           A_CIRCLE,          
    LGUI(LSFT(KC_P)),KC_A,           KC_S,           KC_D,           KC_F,           KC_G,          TILDE,                                                                       KC_QUOTE,       KC_H,           KC_J,           KC_K,           KC_L,           O_UMLAUT,        A_UMLAUT,        
    KC_LSHIFT,       KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SCOLON,      KC_RSHIFT,      
    KC_TRANSPARENT,  KC_LCTRL,       KC_LALT,        KC_LEFT,        KC_RIGHT,       MO(1),                                                                                                          MO(3),          KC_UP,          KC_DOWN,        KC_LBRACKET,    KC_RBRACKET,    MO(2),          
    KC_SPACE,        MO(5),          KC_LGUI,                        KC_RGUI,        KC_BSPACE,      KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LCTL(KC_UP),    KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_PIPE,        KC_AMPR,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,         
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_GRAVE,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_TILD,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_BSLASH,      KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_COMMA,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_0,           KC_DOT,         KC_EQUAL,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_LPRN,        KC_RPRN,        KC_ASTR,        KC_EQUAL,       KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LCBR,        KC_RCBR,        KC_MINUS,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LBRACKET,    KC_RBRACKET,    KC_PLUS,        KC_DLR,         KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LABK,        KC_RABK,        KC_SLASH,       KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_END,         KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, WEBUSB_PAIR,    RESET,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, TD(DANCE_0),    LGUI(KC_W),     KC_TRANSPARENT, LGUI(KC_R),     LGUI(KC_T),     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LGUI(KC_A),     LGUI(KC_S),     ST_MACRO_1,     TD(DANCE_1),    KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LGUI(KC_Z),     LGUI(KC_X),     LGUI(KC_C),     LGUI(KC_V),     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_HOME),  LSFT(KC_END),   KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

extern rgb_config_t rgb_matrix_config;

void eeconfig_init_keymap(void) { set_unicode_input_mode(UC_MAC); };
void keyboard_post_init_user(void) { rgb_matrix_enable(); }

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = {{0,255,255}, {0,0,255}, {215,255,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {215,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,255,255}, {0,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {0,255,255}, {0,0,255}, {0,255,255} },
    [1] = {{0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,251,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,251,255}, {0,0,0}, {172,255,255}, {0,0,0}, {0,0,0}, {86,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {172,255,255}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {215,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255} },
    [2] = {{0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {223,218,204}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {223,218,204}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {223,218,204}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {223,218,204}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {223,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {223,218,204}, {223,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {223,218,204}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {223,218,204}, {0,255,255}, {0,255,255}, {0,255,255}, {86,255,255}, {223,218,204}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {223,218,204}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {223,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },
    [3] = {{0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {172,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },
    [4] = {{0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {148,157,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },
    [5] = {{0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {172,255,255}, {0,0,0}, {86,255,255}, {86,255,255}, {43,255,255}, {172,255,255}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },
};

void set_layer_color(int layer) {
    for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v) {
            rgb_matrix_set_color(i, 0, 0, 0);
        } else {
            RGB   rgb = hsv_to_rgb(hsv);
            float f   = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
            rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
        }
    }
}

void rgb_matrix_indicators_user(void) {
    switch (biton32(layer_state)) {
        case 0:
            set_layer_color(0);
            break;
        case 1:
            set_layer_color(1);
            break;
        case 2:
            set_layer_color(2);
            break;
        case 3:
            set_layer_color(3);
            break;
        case 4:
            set_layer_color(4);
            break;
        case 5:
            set_layer_color(5);
            break;
        default:
            if (rgb_matrix_get_flags() == LED_FLAG_NONE) rgb_matrix_set_color_all(0, 0, 0);
            break;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ST_MACRO_0:
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)));
            }
            break;
        case ST_MACRO_1:
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI(SS_TAP(X_C)) SS_DELAY(100) SS_LGUI(SS_TAP(X_V)));
            }
            break;
        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;

        case A_CIRCLE:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT)
                    send_unicode_string("Å");
                else
                    send_unicode_string("å");
            }
            return false;

        case A_UMLAUT:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT)
                    send_unicode_string("Ä");
                else
                    send_unicode_string("ä");
            }
            return false;

        case O_UMLAUT:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT)
                    send_unicode_string("Ö");
                else
                    send_unicode_string("ö");
            }
            return false;

        case TILDE:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT)
                    send_unicode_string("`");
                else
                    send_unicode_string("~");
            }
            return false;
    }
    return true;
}

typedef struct {
    bool    is_press_action;
    uint8_t step;
} tap;

enum { SINGLE_TAP = 1, SINGLE_HOLD, DOUBLE_TAP, DOUBLE_HOLD, DOUBLE_SINGLE_TAP, MORE_TAPS };
static tap dance_state[2];
uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed)
            return SINGLE_TAP;
        else
            return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted)
            return DOUBLE_SINGLE_TAP;
        else if (state->pressed)
            return DOUBLE_HOLD;
        else
            return DOUBLE_TAP;
    }
    return MORE_TAPS;
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case DOUBLE_TAP:
            register_code16(LGUI(KC_Q));
            break;
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case DOUBLE_TAP:
            unregister_code16(LGUI(KC_Q));
            break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(LGUI(KC_F));
        tap_code16(LGUI(KC_F));
        tap_code16(LGUI(KC_F));
    }
    if (state->count > 3) {
        tap_code16(LGUI(KC_F));
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP:
            register_code16(LGUI(KC_F));
            break;
        case DOUBLE_TAP:
            register_code16(LGUI(LSFT(KC_F)));
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(LGUI(KC_F));
            register_code16(LGUI(KC_F));
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP:
            unregister_code16(LGUI(KC_F));
            break;
        case DOUBLE_TAP:
            unregister_code16(LGUI(LSFT(KC_F)));
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(LGUI(KC_F));
            break;
    }
    dance_state[1].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
    [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
};
