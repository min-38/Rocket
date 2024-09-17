#ifndef ROCKET_H
#define ROCKET_H

class Rocket {
private:
    double dist;
    int speed;
public:
    Rocket();
    ~Rocket();

    // Setter
    void setDist(const int dist); // 입력 받기
    void setSpeed(const int speed);

    // Getter
    double* getDist();
};

#endif // ROCKET_H