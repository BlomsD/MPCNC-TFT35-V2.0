#include "leveling.h"
#include "includes.h"

const MENUITEMS autoLevelingItems = {
// title
LABEL_ABL,
// icon                        label
 {{ICON_BLTOUCH_DEPLOY,        LABEL_BLTOUCH_DEPLOY},
  {ICON_BLTOUCH_STOW,          LABEL_BLTOUCH_STOW},
  {ICON_BLTOUCH_REPEAT,        LABEL_BLTOUCH_REPEAT},
  {ICON_PROBE_OFFSET,          LABEL_PROBE_OFFSET},
  {ICON_BLTOUCH,               LABEL_BLTOUCH},
  {ICON_BLTOUCH_TEST ,         LABEL_BLTOUCH_TEST},
  {ICON_FAN_FULL_SPEED,        LABEL_FAN_FULL_SPEED},
  {ICON_BACK,                  LABEL_BACK},}
};

void menuAutoLeveling(void)
{
  KEY_VALUES key_num=KEY_IDLE;
  menuDrawPage(&autoLevelingItems,false);
  while(infoMenu.menu[infoMenu.cur] == menuAutoLeveling)
  {
    key_num = menuKeyGetValue();
    switch(key_num)
    {
      case KEY_ICON_0:
        storeCmd("G92 X0\n");
        break;
      case KEY_ICON_1:
        storeCmd("G92 Y0\n");
        break;
      case KEY_ICON_2:
        storeCmd("G92 Z0\n");
        break;
      case KEY_ICON_3:
        storeCmd("G92 X0 Y0 Z0\n");
        break;
      case KEY_ICON_4:
        storeCmd("M107\n");
        break;
      case KEY_ICON_5:
        storeCmd("M106 S5\n");
        break;
      case KEY_ICON_6:
        storeCmd("M106 S255\n");
        break;    
      case KEY_ICON_7:
        infoMenu.cur--; break;
      default:break;
    }
    loopProcess();
  }
}


