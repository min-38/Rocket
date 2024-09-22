#ifndef RCKTACTION_H
#define RCKTACTION_H

#include "../utils.h"
#include "../rocket.h"
#include "../ui/rcktUI.h"

class RcktAction {
private:
    Rocket rocket;
    RcktUI r_ui;
public:
    RcktAction();
    ~RcktAction();

    void getDest();
    void getSpd();

    void setDest();
    void setSpd();

    void getDuration();
    
};
#endif // RCKTACTION_H