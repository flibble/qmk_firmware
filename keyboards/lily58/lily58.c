#include "lily58.h"

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
  return process_record_user(keycode, record);
}

// void encoder_update_kb(uint8_t index, bool clockwise) {
    // encoder_update_user(index, clockwise);
// }
