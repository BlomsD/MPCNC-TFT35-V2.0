#include "Home.h"
#include "includes.h"

//1��title(����), ITEM_PER_PAGE��item(ͼ��+��ǩ) 
const MENUITEMS homeItems = {
//   title
LABEL_HOME,
// icon                       label
 {{ICON_HOME,                 LABEL_HOME},
  {ICON_X_HOME,               LABEL_X_HOME},
  {ICON_Y_HOME,               LABEL_Y_HOME},
  {ICON_Z_HOME,               LABEL_Z_HOME},
  {ICON_BACKGROUND,           LABEL_BACKGROUND},
  {ICON_BACKGROUND,           LABEL_BACKGROUND},
  {ICON_BACKGROUND,           LABEL_BACKGROUND},
  {ICON_BACK,                 LABEL_BACK},}
};

void menuHome(void)
{
  KEY_VALUES key_num = KEY_IDLE;	
  menuDrawPage(&homeItems,false);
  while(infoMenu.menu[infoMenu.cur] == menuHome)
  {
    key_num = menuKeyGetValue();
    switch(key_num)
    {
      case KEY_ICON_0: storeCmd("G28\n");   break;
      case KEY_ICON_1: storeCmd("G28 X\n"); break;
      case KEY_ICON_2: storeCmd("G28 Y\n"); break;
      case KEY_ICON_3: storeCmd("G28 Z\n"); break;  //use this one for manual Z touch plate adjustment
      //case KEY_ICON_3: storeCmd("G28 Z\n G92 Z8.94\n G00 Z10 F300\n"); break; //set the numbers after G92 Z to your touch plate height
      case KEY_ICON_7: infoMenu.cur--;      break;
      default:break;            
    }
    loopProcess();
  }
}

