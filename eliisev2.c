
#include "quantum.h"
#include "i2c_master.h"


bool led_update_kb(led_t led_state) {
    if (led_update_user(led_state)) {
        if (led_state.caps_lock) {
            rgblight_setrgb_at(255, 255, 255, 64); //white
        } else {
            rgblight_setrgb_at(0, 0, 0, 0);
        }
    }
    return true;
}