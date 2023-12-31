/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.8-dev */

#ifndef PB_ENUMS_PB_H_INCLUDED
#define PB_ENUMS_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _ButtonLayout {
    BUTTON_LAYOUT_STICK = 0,
    BUTTON_LAYOUT_STICKLESS = 1,
    BUTTON_LAYOUT_BUTTONS_ANGLED = 2,
    BUTTON_LAYOUT_BUTTONS_BASIC = 3,
    BUTTON_LAYOUT_KEYBOARD_ANGLED = 4,
    BUTTON_LAYOUT_KEYBOARDA = 5,
    BUTTON_LAYOUT_DANCEPADA = 6,
    BUTTON_LAYOUT_TWINSTICKA = 7,
    BUTTON_LAYOUT_BLANKA = 8,
    BUTTON_LAYOUT_VLXA = 9,
    BUTTON_LAYOUT_FIGHTBOARD_STICK = 10,
    BUTTON_LAYOUT_FIGHTBOARD_MIRRORED = 11,
    BUTTON_LAYOUT_CUSTOMA = 12
} ButtonLayout;

typedef enum _ButtonLayoutRight {
    BUTTON_LAYOUT_ARCADE = 0,
    BUTTON_LAYOUT_STICKLESSB = 1,
    BUTTON_LAYOUT_BUTTONS_ANGLEDB = 2,
    BUTTON_LAYOUT_VEWLIX = 3,
    BUTTON_LAYOUT_VEWLIX7 = 4,
    BUTTON_LAYOUT_CAPCOM = 5,
    BUTTON_LAYOUT_CAPCOM6 = 6,
    BUTTON_LAYOUT_SEGA2P = 7,
    BUTTON_LAYOUT_NOIR8 = 8,
    BUTTON_LAYOUT_KEYBOARDB = 9,
    BUTTON_LAYOUT_DANCEPADB = 10,
    BUTTON_LAYOUT_TWINSTICKB = 11,
    BUTTON_LAYOUT_BLANKB = 12,
    BUTTON_LAYOUT_VLXB = 13,
    BUTTON_LAYOUT_FIGHTBOARD = 14,
    BUTTON_LAYOUT_FIGHTBOARD_STICK_MIRRORED = 15,
    BUTTON_LAYOUT_CUSTOMB = 16
} ButtonLayoutRight;

typedef enum _SplashMode {
    SPLASH_MODE_STATIC = 0,
    SPLASH_MODE_CLOSEIN = 1,
    SPLASH_MODE_CLOSEINCUSTOM = 2,
    SPLASH_MODE_NONE = 3
} SplashMode;

typedef enum _SplashChoice {
    SPLASH_CHOICE_MAIN = 0,
    SPLASH_CHOICE_X = 1,
    SPLASH_CHOICE_Y = 2,
    SPLASH_CHOICE_Z = 3,
    SPLASH_CHOICE_CUSTOM = 4,
    SPLASH_CHOICE_LEGACY = 5
} SplashChoice;

typedef enum _OnBoardLedMode {
    ON_BOARD_LED_MODE_OFF = 0,
    ON_BOARD_LED_MODE_MODE_INDICATOR = 1,
    ON_BOARD_LED_MODE_INPUT_TEST = 2
} OnBoardLedMode;

typedef enum _InputMode {
    INPUT_MODE_XINPUT = 0,
    INPUT_MODE_SWITCH = 1,
    INPUT_MODE_HID = 2,
    INPUT_MODE_KEYBOARD = 3,
    INPUT_MODE_PS4 = 4,
    INPUT_MODE_CONFIG = 255
} InputMode;

typedef enum _DpadMode {
    DPAD_MODE_DIGITAL = 0,
    DPAD_MODE_LEFT_ANALOG = 1,
    DPAD_MODE_RIGHT_ANALOG = 2
} DpadMode;

typedef enum _InvertMode {
    INVERT_NONE = 0,
    INVERT_X = 1,
    INVERT_Y = 2,
    INVERT_XY = 3
} InvertMode;

typedef enum _SOCDMode {
    SOCD_MODE_UP_PRIORITY = 0, /* U+D=U, L+R=N */
    SOCD_MODE_NEUTRAL = 1, /* U+D=N, L+R=N */
    SOCD_MODE_SECOND_INPUT_PRIORITY = 2, /* U>D=D, L>R=R (Last Input Priority, aka Last Win) */
    SOCD_MODE_FIRST_INPUT_PRIORITY = 3, /* U>D=U, L>R=L (First Input Priority, aka First Win) */
    SOCD_MODE_BYPASS = 4 /* U+D=UD, L+R=LR (No cleaning applied) */
} SOCDMode;

typedef enum _GamepadHotkey {
    HOTKEY_NONE = 0,
    HOTKEY_DPAD_DIGITAL = 1,
    HOTKEY_DPAD_LEFT_ANALOG = 2,
    HOTKEY_DPAD_RIGHT_ANALOG = 3,
    HOTKEY_HOME_BUTTON = 4,
    HOTKEY_CAPTURE_BUTTON = 5,
    HOTKEY_SOCD_UP_PRIORITY = 6,
    HOTKEY_SOCD_NEUTRAL = 7,
    HOTKEY_SOCD_LAST_INPUT = 8,
    HOTKEY_INVERT_X_AXIS = 9,
    HOTKEY_INVERT_Y_AXIS = 10,
    HOTKEY_SOCD_FIRST_INPUT = 11,
    HOTKEY_SOCD_BYPASS = 12,
    HOTKEY_TOGGLE_4_WAY_MODE = 13,
    HOTKEY_TOGGLE_DDI_4_WAY_MODE = 14
} GamepadHotkey;

/* This has to be kept in sync with LEDFormat in NeoPico.hpp */
typedef enum _LEDFormat_Proto {
    LEDFormat_Proto_LED_FORMAT_GRB = 0,
    LEDFormat_Proto_LED_FORMAT_RGB = 1,
    LEDFormat_Proto_LED_FORMAT_GRBW = 2,
    LEDFormat_Proto_LED_FORMAT_RGBW = 3
} LEDFormat_Proto;

typedef enum _ShmupMixMode {
    SHMUP_MIX_MODE_TURBO_PRIORITY = 0,
    SHMUP_MIX_MODE_CHARGE_PRIORITY = 1
} ShmupMixMode;

typedef enum _PLEDType {
    PLED_TYPE_NONE = -1,
    PLED_TYPE_PWM = 0,
    PLED_TYPE_RGB = 1
} PLEDType;

typedef enum _ForcedSetupMode {
    FORCED_SETUP_MODE_OFF = 0,
    FORCED_SETUP_MODE_LOCK_MODE_SWITCH = 1,
    FORCED_SETUP_MODE_LOCK_WEB_CONFIG = 2,
    FORCED_SETUP_MODE_LOCK_BOTH = 3
} ForcedSetupMode;

#ifdef __cplusplus
extern "C" {
#endif

/* Helper constants for enums */
#define _ButtonLayout_MIN BUTTON_LAYOUT_STICK
#define _ButtonLayout_MAX BUTTON_LAYOUT_CUSTOMA
#define _ButtonLayout_ARRAYSIZE ((ButtonLayout)(BUTTON_LAYOUT_CUSTOMA+1))
#define ButtonLayout_BUTTON_LAYOUT_STICK BUTTON_LAYOUT_STICK
#define ButtonLayout_BUTTON_LAYOUT_STICKLESS BUTTON_LAYOUT_STICKLESS
#define ButtonLayout_BUTTON_LAYOUT_BUTTONS_ANGLED BUTTON_LAYOUT_BUTTONS_ANGLED
#define ButtonLayout_BUTTON_LAYOUT_BUTTONS_BASIC BUTTON_LAYOUT_BUTTONS_BASIC
#define ButtonLayout_BUTTON_LAYOUT_KEYBOARD_ANGLED BUTTON_LAYOUT_KEYBOARD_ANGLED
#define ButtonLayout_BUTTON_LAYOUT_KEYBOARDA BUTTON_LAYOUT_KEYBOARDA
#define ButtonLayout_BUTTON_LAYOUT_DANCEPADA BUTTON_LAYOUT_DANCEPADA
#define ButtonLayout_BUTTON_LAYOUT_TWINSTICKA BUTTON_LAYOUT_TWINSTICKA
#define ButtonLayout_BUTTON_LAYOUT_BLANKA BUTTON_LAYOUT_BLANKA
#define ButtonLayout_BUTTON_LAYOUT_VLXA BUTTON_LAYOUT_VLXA
#define ButtonLayout_BUTTON_LAYOUT_FIGHTBOARD_STICK BUTTON_LAYOUT_FIGHTBOARD_STICK
#define ButtonLayout_BUTTON_LAYOUT_FIGHTBOARD_MIRRORED BUTTON_LAYOUT_FIGHTBOARD_MIRRORED
#define ButtonLayout_BUTTON_LAYOUT_CUSTOMA BUTTON_LAYOUT_CUSTOMA

#define _ButtonLayoutRight_MIN BUTTON_LAYOUT_ARCADE
#define _ButtonLayoutRight_MAX BUTTON_LAYOUT_CUSTOMB
#define _ButtonLayoutRight_ARRAYSIZE ((ButtonLayoutRight)(BUTTON_LAYOUT_CUSTOMB+1))
#define ButtonLayoutRight_BUTTON_LAYOUT_ARCADE BUTTON_LAYOUT_ARCADE
#define ButtonLayoutRight_BUTTON_LAYOUT_STICKLESSB BUTTON_LAYOUT_STICKLESSB
#define ButtonLayoutRight_BUTTON_LAYOUT_BUTTONS_ANGLEDB BUTTON_LAYOUT_BUTTONS_ANGLEDB
#define ButtonLayoutRight_BUTTON_LAYOUT_VEWLIX BUTTON_LAYOUT_VEWLIX
#define ButtonLayoutRight_BUTTON_LAYOUT_VEWLIX7 BUTTON_LAYOUT_VEWLIX7
#define ButtonLayoutRight_BUTTON_LAYOUT_CAPCOM BUTTON_LAYOUT_CAPCOM
#define ButtonLayoutRight_BUTTON_LAYOUT_CAPCOM6 BUTTON_LAYOUT_CAPCOM6
#define ButtonLayoutRight_BUTTON_LAYOUT_SEGA2P BUTTON_LAYOUT_SEGA2P
#define ButtonLayoutRight_BUTTON_LAYOUT_NOIR8 BUTTON_LAYOUT_NOIR8
#define ButtonLayoutRight_BUTTON_LAYOUT_KEYBOARDB BUTTON_LAYOUT_KEYBOARDB
#define ButtonLayoutRight_BUTTON_LAYOUT_DANCEPADB BUTTON_LAYOUT_DANCEPADB
#define ButtonLayoutRight_BUTTON_LAYOUT_TWINSTICKB BUTTON_LAYOUT_TWINSTICKB
#define ButtonLayoutRight_BUTTON_LAYOUT_BLANKB BUTTON_LAYOUT_BLANKB
#define ButtonLayoutRight_BUTTON_LAYOUT_VLXB BUTTON_LAYOUT_VLXB
#define ButtonLayoutRight_BUTTON_LAYOUT_FIGHTBOARD BUTTON_LAYOUT_FIGHTBOARD
#define ButtonLayoutRight_BUTTON_LAYOUT_FIGHTBOARD_STICK_MIRRORED BUTTON_LAYOUT_FIGHTBOARD_STICK_MIRRORED
#define ButtonLayoutRight_BUTTON_LAYOUT_CUSTOMB BUTTON_LAYOUT_CUSTOMB

#define _SplashMode_MIN SPLASH_MODE_STATIC
#define _SplashMode_MAX SPLASH_MODE_NONE
#define _SplashMode_ARRAYSIZE ((SplashMode)(SPLASH_MODE_NONE+1))
#define SplashMode_SPLASH_MODE_STATIC SPLASH_MODE_STATIC
#define SplashMode_SPLASH_MODE_CLOSEIN SPLASH_MODE_CLOSEIN
#define SplashMode_SPLASH_MODE_CLOSEINCUSTOM SPLASH_MODE_CLOSEINCUSTOM
#define SplashMode_SPLASH_MODE_NONE SPLASH_MODE_NONE

#define _SplashChoice_MIN SPLASH_CHOICE_MAIN
#define _SplashChoice_MAX SPLASH_CHOICE_LEGACY
#define _SplashChoice_ARRAYSIZE ((SplashChoice)(SPLASH_CHOICE_LEGACY+1))
#define SplashChoice_SPLASH_CHOICE_MAIN SPLASH_CHOICE_MAIN
#define SplashChoice_SPLASH_CHOICE_X SPLASH_CHOICE_X
#define SplashChoice_SPLASH_CHOICE_Y SPLASH_CHOICE_Y
#define SplashChoice_SPLASH_CHOICE_Z SPLASH_CHOICE_Z
#define SplashChoice_SPLASH_CHOICE_CUSTOM SPLASH_CHOICE_CUSTOM
#define SplashChoice_SPLASH_CHOICE_LEGACY SPLASH_CHOICE_LEGACY

#define _OnBoardLedMode_MIN ON_BOARD_LED_MODE_OFF
#define _OnBoardLedMode_MAX ON_BOARD_LED_MODE_INPUT_TEST
#define _OnBoardLedMode_ARRAYSIZE ((OnBoardLedMode)(ON_BOARD_LED_MODE_INPUT_TEST+1))
#define OnBoardLedMode_ON_BOARD_LED_MODE_OFF ON_BOARD_LED_MODE_OFF
#define OnBoardLedMode_ON_BOARD_LED_MODE_MODE_INDICATOR ON_BOARD_LED_MODE_MODE_INDICATOR
#define OnBoardLedMode_ON_BOARD_LED_MODE_INPUT_TEST ON_BOARD_LED_MODE_INPUT_TEST

#define _InputMode_MIN INPUT_MODE_XINPUT
#define _InputMode_MAX INPUT_MODE_CONFIG
#define _InputMode_ARRAYSIZE ((InputMode)(INPUT_MODE_CONFIG+1))
#define InputMode_INPUT_MODE_XINPUT INPUT_MODE_XINPUT
#define InputMode_INPUT_MODE_SWITCH INPUT_MODE_SWITCH
#define InputMode_INPUT_MODE_HID INPUT_MODE_HID
#define InputMode_INPUT_MODE_KEYBOARD INPUT_MODE_KEYBOARD
#define InputMode_INPUT_MODE_PS4 INPUT_MODE_PS4
#define InputMode_INPUT_MODE_CONFIG INPUT_MODE_CONFIG

#define _DpadMode_MIN DPAD_MODE_DIGITAL
#define _DpadMode_MAX DPAD_MODE_RIGHT_ANALOG
#define _DpadMode_ARRAYSIZE ((DpadMode)(DPAD_MODE_RIGHT_ANALOG+1))
#define DpadMode_DPAD_MODE_DIGITAL DPAD_MODE_DIGITAL
#define DpadMode_DPAD_MODE_LEFT_ANALOG DPAD_MODE_LEFT_ANALOG
#define DpadMode_DPAD_MODE_RIGHT_ANALOG DPAD_MODE_RIGHT_ANALOG

#define _InvertMode_MIN INVERT_NONE
#define _InvertMode_MAX INVERT_XY
#define _InvertMode_ARRAYSIZE ((InvertMode)(INVERT_XY+1))
#define InvertMode_INVERT_NONE INVERT_NONE
#define InvertMode_INVERT_X INVERT_X
#define InvertMode_INVERT_Y INVERT_Y
#define InvertMode_INVERT_XY INVERT_XY

#define _SOCDMode_MIN SOCD_MODE_UP_PRIORITY
#define _SOCDMode_MAX SOCD_MODE_BYPASS
#define _SOCDMode_ARRAYSIZE ((SOCDMode)(SOCD_MODE_BYPASS+1))
#define SOCDMode_SOCD_MODE_UP_PRIORITY SOCD_MODE_UP_PRIORITY
#define SOCDMode_SOCD_MODE_NEUTRAL SOCD_MODE_NEUTRAL
#define SOCDMode_SOCD_MODE_SECOND_INPUT_PRIORITY SOCD_MODE_SECOND_INPUT_PRIORITY
#define SOCDMode_SOCD_MODE_FIRST_INPUT_PRIORITY SOCD_MODE_FIRST_INPUT_PRIORITY
#define SOCDMode_SOCD_MODE_BYPASS SOCD_MODE_BYPASS

#define _GamepadHotkey_MIN HOTKEY_NONE
#define _GamepadHotkey_MAX HOTKEY_TOGGLE_DDI_4_WAY_MODE
#define _GamepadHotkey_ARRAYSIZE ((GamepadHotkey)(HOTKEY_TOGGLE_DDI_4_WAY_MODE+1))
#define GamepadHotkey_HOTKEY_NONE HOTKEY_NONE
#define GamepadHotkey_HOTKEY_DPAD_DIGITAL HOTKEY_DPAD_DIGITAL
#define GamepadHotkey_HOTKEY_DPAD_LEFT_ANALOG HOTKEY_DPAD_LEFT_ANALOG
#define GamepadHotkey_HOTKEY_DPAD_RIGHT_ANALOG HOTKEY_DPAD_RIGHT_ANALOG
#define GamepadHotkey_HOTKEY_HOME_BUTTON HOTKEY_HOME_BUTTON
#define GamepadHotkey_HOTKEY_CAPTURE_BUTTON HOTKEY_CAPTURE_BUTTON
#define GamepadHotkey_HOTKEY_SOCD_UP_PRIORITY HOTKEY_SOCD_UP_PRIORITY
#define GamepadHotkey_HOTKEY_SOCD_NEUTRAL HOTKEY_SOCD_NEUTRAL
#define GamepadHotkey_HOTKEY_SOCD_LAST_INPUT HOTKEY_SOCD_LAST_INPUT
#define GamepadHotkey_HOTKEY_INVERT_X_AXIS HOTKEY_INVERT_X_AXIS
#define GamepadHotkey_HOTKEY_INVERT_Y_AXIS HOTKEY_INVERT_Y_AXIS
#define GamepadHotkey_HOTKEY_SOCD_FIRST_INPUT HOTKEY_SOCD_FIRST_INPUT
#define GamepadHotkey_HOTKEY_SOCD_BYPASS HOTKEY_SOCD_BYPASS
#define GamepadHotkey_HOTKEY_TOGGLE_4_WAY_MODE HOTKEY_TOGGLE_4_WAY_MODE
#define GamepadHotkey_HOTKEY_TOGGLE_DDI_4_WAY_MODE HOTKEY_TOGGLE_DDI_4_WAY_MODE

#define _LEDFormat_Proto_MIN LEDFormat_Proto_LED_FORMAT_GRB
#define _LEDFormat_Proto_MAX LEDFormat_Proto_LED_FORMAT_RGBW
#define _LEDFormat_Proto_ARRAYSIZE ((LEDFormat_Proto)(LEDFormat_Proto_LED_FORMAT_RGBW+1))

#define _ShmupMixMode_MIN SHMUP_MIX_MODE_TURBO_PRIORITY
#define _ShmupMixMode_MAX SHMUP_MIX_MODE_CHARGE_PRIORITY
#define _ShmupMixMode_ARRAYSIZE ((ShmupMixMode)(SHMUP_MIX_MODE_CHARGE_PRIORITY+1))
#define ShmupMixMode_SHMUP_MIX_MODE_TURBO_PRIORITY SHMUP_MIX_MODE_TURBO_PRIORITY
#define ShmupMixMode_SHMUP_MIX_MODE_CHARGE_PRIORITY SHMUP_MIX_MODE_CHARGE_PRIORITY

#define _PLEDType_MIN PLED_TYPE_NONE
#define _PLEDType_MAX PLED_TYPE_RGB
#define _PLEDType_ARRAYSIZE ((PLEDType)(PLED_TYPE_RGB+1))
#define PLEDType_PLED_TYPE_NONE PLED_TYPE_NONE
#define PLEDType_PLED_TYPE_PWM PLED_TYPE_PWM
#define PLEDType_PLED_TYPE_RGB PLED_TYPE_RGB

#define _ForcedSetupMode_MIN FORCED_SETUP_MODE_OFF
#define _ForcedSetupMode_MAX FORCED_SETUP_MODE_LOCK_BOTH
#define _ForcedSetupMode_ARRAYSIZE ((ForcedSetupMode)(FORCED_SETUP_MODE_LOCK_BOTH+1))
#define ForcedSetupMode_FORCED_SETUP_MODE_OFF FORCED_SETUP_MODE_OFF
#define ForcedSetupMode_FORCED_SETUP_MODE_LOCK_MODE_SWITCH FORCED_SETUP_MODE_LOCK_MODE_SWITCH
#define ForcedSetupMode_FORCED_SETUP_MODE_LOCK_WEB_CONFIG FORCED_SETUP_MODE_LOCK_WEB_CONFIG
#define ForcedSetupMode_FORCED_SETUP_MODE_LOCK_BOTH FORCED_SETUP_MODE_LOCK_BOTH


/* Enum values (GP2040-CE extension) */
#define ButtonLayout_VALUELIST(X) \
X(BUTTON_LAYOUT_STICK, 0) \
X(BUTTON_LAYOUT_STICKLESS, 1) \
X(BUTTON_LAYOUT_BUTTONS_ANGLED, 2) \
X(BUTTON_LAYOUT_BUTTONS_BASIC, 3) \
X(BUTTON_LAYOUT_KEYBOARD_ANGLED, 4) \
X(BUTTON_LAYOUT_KEYBOARDA, 5) \
X(BUTTON_LAYOUT_DANCEPADA, 6) \
X(BUTTON_LAYOUT_TWINSTICKA, 7) \
X(BUTTON_LAYOUT_BLANKA, 8) \
X(BUTTON_LAYOUT_VLXA, 9) \
X(BUTTON_LAYOUT_FIGHTBOARD_STICK, 10) \
X(BUTTON_LAYOUT_FIGHTBOARD_MIRRORED, 11) \
X(BUTTON_LAYOUT_CUSTOMA, 12)

#define ButtonLayoutRight_VALUELIST(X) \
X(BUTTON_LAYOUT_ARCADE, 0) \
X(BUTTON_LAYOUT_STICKLESSB, 1) \
X(BUTTON_LAYOUT_BUTTONS_ANGLEDB, 2) \
X(BUTTON_LAYOUT_VEWLIX, 3) \
X(BUTTON_LAYOUT_VEWLIX7, 4) \
X(BUTTON_LAYOUT_CAPCOM, 5) \
X(BUTTON_LAYOUT_CAPCOM6, 6) \
X(BUTTON_LAYOUT_SEGA2P, 7) \
X(BUTTON_LAYOUT_NOIR8, 8) \
X(BUTTON_LAYOUT_KEYBOARDB, 9) \
X(BUTTON_LAYOUT_DANCEPADB, 10) \
X(BUTTON_LAYOUT_TWINSTICKB, 11) \
X(BUTTON_LAYOUT_BLANKB, 12) \
X(BUTTON_LAYOUT_VLXB, 13) \
X(BUTTON_LAYOUT_FIGHTBOARD, 14) \
X(BUTTON_LAYOUT_FIGHTBOARD_STICK_MIRRORED, 15) \
X(BUTTON_LAYOUT_CUSTOMB, 16)

#define SplashMode_VALUELIST(X) \
X(SPLASH_MODE_STATIC, 0) \
X(SPLASH_MODE_CLOSEIN, 1) \
X(SPLASH_MODE_CLOSEINCUSTOM, 2) \
X(SPLASH_MODE_NONE, 3)

#define SplashChoice_VALUELIST(X) \
X(SPLASH_CHOICE_MAIN, 0) \
X(SPLASH_CHOICE_X, 1) \
X(SPLASH_CHOICE_Y, 2) \
X(SPLASH_CHOICE_Z, 3) \
X(SPLASH_CHOICE_CUSTOM, 4) \
X(SPLASH_CHOICE_LEGACY, 5)

#define OnBoardLedMode_VALUELIST(X) \
X(ON_BOARD_LED_MODE_OFF, 0) \
X(ON_BOARD_LED_MODE_MODE_INDICATOR, 1) \
X(ON_BOARD_LED_MODE_INPUT_TEST, 2)

#define InputMode_VALUELIST(X) \
X(INPUT_MODE_XINPUT, 0) \
X(INPUT_MODE_SWITCH, 1) \
X(INPUT_MODE_HID, 2) \
X(INPUT_MODE_KEYBOARD, 3) \
X(INPUT_MODE_PS4, 4) \
X(INPUT_MODE_CONFIG, 255)

#define DpadMode_VALUELIST(X) \
X(DPAD_MODE_DIGITAL, 0) \
X(DPAD_MODE_LEFT_ANALOG, 1) \
X(DPAD_MODE_RIGHT_ANALOG, 2)

#define InvertMode_VALUELIST(X) \
X(INVERT_NONE, 0) \
X(INVERT_X, 1) \
X(INVERT_Y, 2) \
X(INVERT_XY, 3)

#define SOCDMode_VALUELIST(X) \
X(SOCD_MODE_UP_PRIORITY, 0) \
X(SOCD_MODE_NEUTRAL, 1) \
X(SOCD_MODE_SECOND_INPUT_PRIORITY, 2) \
X(SOCD_MODE_FIRST_INPUT_PRIORITY, 3) \
X(SOCD_MODE_BYPASS, 4)

#define GamepadHotkey_VALUELIST(X) \
X(HOTKEY_NONE, 0) \
X(HOTKEY_DPAD_DIGITAL, 1) \
X(HOTKEY_DPAD_LEFT_ANALOG, 2) \
X(HOTKEY_DPAD_RIGHT_ANALOG, 3) \
X(HOTKEY_HOME_BUTTON, 4) \
X(HOTKEY_CAPTURE_BUTTON, 5) \
X(HOTKEY_SOCD_UP_PRIORITY, 6) \
X(HOTKEY_SOCD_NEUTRAL, 7) \
X(HOTKEY_SOCD_LAST_INPUT, 8) \
X(HOTKEY_INVERT_X_AXIS, 9) \
X(HOTKEY_INVERT_Y_AXIS, 10) \
X(HOTKEY_SOCD_FIRST_INPUT, 11) \
X(HOTKEY_SOCD_BYPASS, 12) \
X(HOTKEY_TOGGLE_4_WAY_MODE, 13) \
X(HOTKEY_TOGGLE_DDI_4_WAY_MODE, 14)

#define LEDFormat_Proto_VALUELIST(X) \
X(LEDFormat_Proto_LED_FORMAT_GRB, 0) \
X(LEDFormat_Proto_LED_FORMAT_RGB, 1) \
X(LEDFormat_Proto_LED_FORMAT_GRBW, 2) \
X(LEDFormat_Proto_LED_FORMAT_RGBW, 3)

#define ShmupMixMode_VALUELIST(X) \
X(SHMUP_MIX_MODE_TURBO_PRIORITY, 0) \
X(SHMUP_MIX_MODE_CHARGE_PRIORITY, 1)

#define PLEDType_VALUELIST(X) \
X(PLED_TYPE_NONE, -1) \
X(PLED_TYPE_PWM, 0) \
X(PLED_TYPE_RGB, 1)

#define ForcedSetupMode_VALUELIST(X) \
X(FORCED_SETUP_MODE_OFF, 0) \
X(FORCED_SETUP_MODE_LOCK_MODE_SWITCH, 1) \
X(FORCED_SETUP_MODE_LOCK_WEB_CONFIG, 2) \
X(FORCED_SETUP_MODE_LOCK_BOTH, 3)


/* List of all enums (GP2040-CE extension) */
#define ENUMS_ENUMS_GP2040(X) \
X(ButtonLayout) \
X(ButtonLayoutRight) \
X(SplashMode) \
X(SplashChoice) \
X(OnBoardLedMode) \
X(InputMode) \
X(DpadMode) \
X(InvertMode) \
X(SOCDMode) \
X(GamepadHotkey) \
X(LEDFormat_Proto) \
X(ShmupMixMode) \
X(PLEDType) \
X(ForcedSetupMode) \

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
