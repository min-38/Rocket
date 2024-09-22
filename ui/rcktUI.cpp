#include "rcktUI.h"

RcktUI::RcktUI() {}

RcktUI::~RcktUI() {}

void RcktUI::inputDestDistPrmpt() {
    cout << "Input> 목표 지점의 거리: ";
}

void RcktUI::inputSpdPrmpt() {
    cout << "Input> 로켓의 속력: ";
}

void RcktUI::inputPrmptErr() {
    cout << "Err> 올바르지 않은 형식입니다. 다시 입력해주세요\n";
}

void RcktUI::showDestDist(const double distance) {
    cout << "목표 지점과의 거리는 " << distance << "입니다.\n";
}

void RcktUI::showSpd(const double speed){
    cout << "로켓의 속력은 " << speed << "입니다.\n";
}

void RcktUI::showRocketInfo(const Rocket* rocket) {
    cout << "목표 지점과의 거리 : " << rocket->getDist() << endl;
}