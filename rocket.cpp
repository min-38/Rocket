#include "rocket.h"

Rocket::Rocket() {
    this->dist = -1;
}

Rocket::~Rocket() { }

double* Rocket::getDist() {
    return &this->dist;
}

double* Rocket::getSpd() {
    return &this->speed;
}

double Rocket::getDuration() {
    if(this->dist > 0 && this->speed > 0) {
        this->duration = this->dist / this->speed;
        return this->duration;
    }
    return -1;
}

void Rocket::setDist(const int dist) {
    this->dist = dist;
}

void Rocket::setSpd(const int speed) {
    this->speed = speed;
}