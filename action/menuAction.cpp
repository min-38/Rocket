#include "menuAction.h"

MenuAction::MenuAction() { }
MenuAction::MenuAction(RcktAction* ra) {
    this->ra = ra;
}
MenuAction::~MenuAction() { }

void MenuAction::showMenu() {
    int status;
    do {
        mu.clean();
        mu.menu();

        status = this->action();

        if(status == 0)
            mu.exitMenu();
        else if(status == -1)
            mu.pickWorngMenu();
    } while(status != 0);
}

int MenuAction::action() {
    int selected = -1;
    cin >> selected;

    if(cin.fail())
        return -1;

    switch(selected) {
        case 1:
            ra->setDest();
            // printf("1 %d\n", selected);
            break;
        case 2:
            // ui->setSpdUI(rocket->getSpd());
            ra->getDest();
            printf("2 %d\n", selected);
            break;
        case 3:
            // ui->setDurationUI(rocket->getDuration());
            printf("3 %d\n", selected);
            break;
        default:
            selected = 0;
            break;
    }
    
    return selected;
}