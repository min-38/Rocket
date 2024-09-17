#include "rocket.h"

Rocket::Rocket() { }

Rocket::~Rocket() { }

void Rocket::setDist(const int dist) {
    this->dist = dist;
}

void Rocket::setSpeed(const int speed) {
    this->speed = speed;
}

double* Rocket::getDist() {
    return &this->dist;
}