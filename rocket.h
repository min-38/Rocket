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
    double getDist() const;
    double getSpd() const;
    double getDuration() const;

    // Setter
    void setDist(const int dist); // 입력 받기
    void setSpd(const int speed);
    int setDuration();
};

#endif // ROCKET_H