#include "rocket.h"

Rocket::Rocket() {
    this->dist = -1;
}

Rocket::~Rocket() { }

double Rocket::getDist() const {
    return this->dist;
}

double Rocket::getSpd() const {
    return this->speed;
}

double Rocket::getDuration() const {
    if(dist > 0 && speed > 0)
        return this->duration;
    return -1;
}

void Rocket::setDist(const int dist) {
    this->dist = dist;
}

void Rocket::setSpd(const int speed) {
    this->speed = speed;
}

int Rocket::setDuration() {
    // dist가 설정 안되어있으면 -1, speed는 -2
    if(dist <= 0)
        return -1;
    if(speed <= 0)
        return -2;
    this->duration = this->dist / this->speed;
}