#ifndef MENUUI_H
#define MENUUI_H

#include <cstdlib>
#include "baseUI.h"

class MenuUI : public BaseUI {
public:
    MenuUI();
    ~MenuUI(); 

    void menu(); // 입력 받기
    void pickWorngMenu(); // 잘못된 입력
    void exitMenu(); // 메뉴 나가기
};
#endif // MENUUI_H