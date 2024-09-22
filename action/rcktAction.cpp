#include "rcktAction.h"

RcktAction::RcktAction() { }

RcktAction::~RcktAction() {
    this->rocket.~Rocket();
}

void RcktAction::getDest() {
    r_ui.showDestDist(this->rocket.getDist());
}

void RcktAction::getSpd() {
    r_ui.showSpd(this->rocket.getSpd());
}

void RcktAction::getDuration() {
    int sd = this->rocket.setDuration();
    if(sd > 0)
        r_ui.showSpd(this->rocket.getDuration());
}

void RcktAction::setDest() {
    double dist = 0;
    r_ui.inputDestDistPrmpt();
    cin >> dist;

    if(!cin.fail()) {
        rocket.setDist(dist);
        return;
    }
    r_ui.inputPrmptErr();
}

void RcktAction::setSpd() {
    double speed = 0;
    r_ui.inputSpdPrmpt();
    cin >> speed;

    if(!cin.fail()) {
        rocket.setSpd(speed);
        return;
    }
    r_ui.inputPrmptErr();
}