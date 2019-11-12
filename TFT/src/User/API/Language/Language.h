#ifndef _LANGUAGE_H_
#define _LANGUAGE_H_

#include "stdbool.h"
#include "variants.h"


enum
{
  ENGLISH = 0,
  CHINESE,
  RUSSIAN,
  JAPANESE,
  ARMENIAN,
  GERMAN,
  CZECH,
  SPAIN,
  FRENCH,

  LANGUAGE_NUM,
};

enum
{
  LABEL_BACKGROUND = -1,
  LABEL_LANGUAGE =0 ,
  LABEL_HEAT,
  LABEL_MOVE,
  LABEL_HOME,
  LABEL_PRINT,
  LABEL_EXTRUDE,
  LABEL_FAN,
  LABEL_SETTINGS,
  LABEL_SCREEN_SETTINGS,
  LABEL_MACHINE_SETTINGS,
  LABEL_FEATURE_SETTINGS,
  LABEL_SILENT_ON,
  LABEL_SILENT_OFF,
  LABEL_SHUT_DOWN,
  LABEL_RGB_SETTINGS,
  LABEL_RGB_RED,
  LABEL_RGB_GREEN,
  LABEL_RGB_BLUE,
  LABEL_RGB_WHITE,
  LABEL_RGB_OFF,
  LABEL_GCODE,
  LABEL_CUSTOM,
  LABEL_CUSTOM_0,
  LABEL_CUSTOM_1,
  LABEL_CUSTOM_2,
  LABEL_CUSTOM_3,
  LABEL_CUSTOM_4,
  LABEL_CUSTOM_5,
  LABEL_CUSTOM_6,
  LABEL_LEVELING,
  LABEL_POINT_1,
  LABEL_POINT_2,
  LABEL_POINT_3,
  LABEL_POINT_4,
  LABEL_ABL,
  LABEL_BLTOUCH,
  LABEL_BLTOUCH_TEST,
  LABEL_BLTOUCH_DEPLOY,
  LABEL_BLTOUCH_STOW,
  LABEL_BLTOUCH_REPEAT,
  LABEL_PROBE_OFFSET,
  LABEL_EEPROM_SAVE,
  LABEL_INC,
  LABEL_DEC,
  LABEL_NOZZLE,
  LABEL_BED,
  LABEL_STOP,
  LABEL_BACK,
  LABEL_PAGE_UP,
  LABEL_PAGE_DOWN,
  LABEL_PAUSE,
  LABEL_RESUME,
  LABEL_LOAD,
  LABEL_UNLOAD,
  LABEL_SLOW_SPEED,
  LABEL_NORMAL_SPEED,
  LABEL_FAST_SPEED,
  LABEL_FAN_FULL_SPEED,
  LABEL_FAN_HALF_SPEED,
  LABEL_ROTATE_UI,
  LABEL_TOUCHSCREEN_ADJUST,
  LABEL_MORE,
  LABEL_SCREEN_INFO,
  LABEL_WHITE,
  LABEL_BLACK,
  LABEL_BLUE,
  LABEL_RED,
  LABEL_GREEN,
  LABEL_CYAN,
  LABEL_YELLOW,
  LABEL_BROWN,
  LABEL_GRAY,
  LABEL_DISCONNECT,
  LABEL_BAUDRATE_115200,
  LABEL_BAUDRATE_250000,
  LABEL_RUNOUT_OFF,
  LABEL_RUNOUT_ON,
  LABEL_SMART_RUNOUT_ON,
  LABEL_PERCENTAGE,
  LABEL_BABYSTEP,
  LABEL_PERCENTAGE_SPEED,
  LABEL_PERCENTAGE_FLOW,
  LABEL_VALUE_ZERO,
  LABEL_1_DEGREE,
  LABEL_5_DEGREE,
  LABEL_10_DEGREE,
  LABEL_X_INC,
  LABEL_Y_INC,
  LABEL_Z_INC,
  LABEL_X_DEC,
  LABEL_Y_DEC,
  LABEL_Z_DEC,
  LABEL_X_HOME,
  LABEL_Y_HOME,
  LABEL_Z_HOME,
  LABEL_001_MM,
  LABEL_01_MM,
  LABEL_1_MM,
  LABEL_5_MM,
  LABEL_10_MM,
  LABEL_1_PERCENT,
  LABEL_5_PERCENT,
  LABEL_10_PERCENT,
  LABEL_READY,
  LABEL_BUSY,
  LABEL_UNCONNECTED,
  LABEL_DISCONNECT_INFO,
  LABEL_LOADING,
  LABEL_POWER_FAILED,
  LABEL_CONTINUE,
  LABEL_CANNEL,
  LABEL_ADJUST_TITLE,
  LABEL_ADJUST_INFO,
  LABEL_ADJUST_OK,
  LABEL_ADJUST_FAILED,
  LABEL_WARNING,
  LABEL_STOP_PRINT,
  LABEL_CONFIRM,
  LABEL_TFTSD,
  LABEL_READ_TFTSD_ERROR,
  LABEL_TFTSD_INSERTED,
  LABEL_TFTSD_REMOVED,
  LABEL_U_DISK,
  LABEL_READ_U_DISK_ERROR,
  LABEL_U_DISK_INSERTED,
  LABEL_U_DISK_REMOVED,
  LABEL_ONBOARDSD,
  LABEL_READ_ONBOARDSD_ERROR,
  LABEL_FILAMENT_RUNOUT,  
  LABEL_PREHEAT,
  LABEL_PREHEAT_BOTH,
  LABEL_PREHEAT_PLA,
  LABEL_PREHEAT_PETG,
  LABEL_PREHEAT_ABS,
  LABEL_PREHEAT_CUSTOM1,
  LABEL_PREHEAT_CUSTOM2,
  LABEL_IS_PAUSE,
  LABEL_AUTO_SHUT_DOWN,
  LABEL_MANUAL_SHUT_DOWN, 
  LABEL_UNIFIEDMOVE,
  lABEL_UNIFIEDHEAT,
  LABEL_COOLDOWN,
  LABEL_EMERGENCYSTOP,
  
  LABEL_NUM,
};

u8 * textSelect(u8 sel);

#endif
