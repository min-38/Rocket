#ifndef BASEUI_H
#define BASEUI_H

#include <cstdlib>
#include "../utils.h"
#include "../rocket.h"

class BaseUI {
public:
    BaseUI();
    ~BaseUI();

    void clean();

    void setDistUI(double *dist);
    void setSpdUI(double *speed);
    void setDurationUI(double duration);
};
#endif // BASE_H