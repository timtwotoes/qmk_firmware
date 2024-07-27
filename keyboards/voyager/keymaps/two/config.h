/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

#define ORYX_CONFIGURATOR
#undef IGNORE_MOD_TAP_INTERRUPT
#define PERMISSIVE_HOLD

#define USB_SUSPEND_WAKEUP_DELAY 0
#define CAPS_LOCK_STATUS
#define FIRMWARE_VERSION u8"v5vgb/EEGpY"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_8BIT
#define COMBO_COUNT 1

#define TAPPING_TERM_PER_KEY
#define RGB_MATRIX_STARTUP_SPD 60

