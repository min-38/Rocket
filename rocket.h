#ifndef ROCKET_H
#define ROCKET_H

class Rocket {
private:
    double dist;
    double speed;
    double duration;
public:
    Rocket();
    ~Rocket();

    // Getter
    double* getDist();
    double* getSpd();
    double getDuration();

    // Setter
    void setDist(const int dist); // 입력 받기
    void setSpd(const int speed);
};

#endif // ROCKET_H