#include "menuUI.h"

MenuUI::MenuUI() {}

MenuUI::~MenuUI() {}

void MenuUI::menu() {
    cout << "** 메뉴 선택 **" << endl;
    cout << "> 1. 목표 지점 설정" << endl;
    cout << "> 2. 목표 지점 확인" << endl;
    cout << "> 3. 로켓 속도 설정" << endl;
    cout << "> 4. 로켓 속도 확인" << endl;
    cout << "> 5. 로켓 도착 시간 확인" << endl;
    cout << "> 0. Exit" << endl;
}

void MenuUI::pickWorngMenu() {
    clean();
    cout << "!!! 잘못된 입력입니다. 다시 입력해주세요. !!!" << endl;
}

void MenuUI::exitMenu() {
    clean();
    cout << "끝" << endl;
}