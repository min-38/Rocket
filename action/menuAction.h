#ifndef MENUACTION_H
#define MENUACTION_H

#include "rcktAction.h"
#include "../utils.h"
#include "../ui/menuUI.h"

class MenuAction {
private:
    RcktAction* ra;
    MenuUI mu;
public:
    MenuAction();
    MenuAction(RcktAction* ra);
    ~MenuAction();

    void showMenu();
    int action(); // 입력 받기
};
#endif // MENUACTION_H