#include "baseUI.h"

using namespace std;

BaseUI::BaseUI() {
    cout << "Welcome Rocket Simulator!" << endl;
}

BaseUI::~BaseUI() {
    cout << "Goodbye!" << endl;
}

void BaseUI::clean() {
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");  // Windows의 콘솔 지우기 명령어
    #elif defined(__APPLE__) || defined(__linux__)
        system("clear");  // macOS와 Linux의 콘솔 지우기 명령어
    #else
        cout << "Unsupported OS" << std::endl;
    #endif
}

void BaseUI::setDistUI(double *dist) {
    cout << "목적지의 거리: ";
    cin >> *dist;

    if(cin.fail()) {
        cin.clear(); // 오류 상태 플래그를 리셋
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 버퍼 비우기

        cout << "거리의 값이 올바르지 않습니다." << endl;
        setDistUI(dist);
        return;
    }
}

void BaseUI::setSpdUI(double *speed) {
    cout << "로켓의 속도: ";
    cin >> *speed;

    if(cin.fail()) {
        cin.clear(); // 오류 상태 플래그를 리셋
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 버퍼 비우기

        cout << "속도의 값이 올바르지 않습니다." << endl;
        setSpdUI(speed);
        return;
    }
}

void BaseUI::setDurationUI(double duration) {
    if(duration > -1) {
        cout << "로켓은 약 " << duration << "시간 후에 목표 지점에 도착합니다." << endl;
    } else {
        cout << "목적지와의 거리 또는 로켓의 속력이 입력되지 않았습니다." << endl;
    }

}