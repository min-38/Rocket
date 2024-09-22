#ifndef RCKTUI_H
#define RCKTUI_H

#include "baseUI.h"

class RcktUI : public BaseUI {
public:
    RcktUI();
    ~RcktUI(); 

    void inputDestDistPrmpt(); // 목표 지점과의 거리 입력 프롬프트
    void inputSpdPrmpt(); // 로켓의 속력 입력 프롬프트
    void inputPrmptErr(); // 입력 프롬프트 입력 오류
    
    void showDestDist(const double distance);
    void showSpd(const double speed);
    void showRocketInfo(const Rocket* rocket); // 로켓 정보 출력
    
};
#endif // RCKTUI_H