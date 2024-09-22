#include "utils.h"
#include "rocket.h"
#include "action/rcktAction.h"
#include "action/menuAction.h"

int main() {
    MenuAction *ma = new MenuAction(new RcktAction());

    thread t = createThread(ma, &MenuAction::showMenu);
    t.join();

    return 0;
}