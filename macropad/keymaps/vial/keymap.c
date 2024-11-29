
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_AUDIO_MUTE, KC_1, KC_2, KC_3,
        KC_4, KC_5, KC_6,
        KC_7, KC_8, KC_9,
        KC_LBRC, KC_0, KC_RBRC
    )
};
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][1][2] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  }
};
#endif

