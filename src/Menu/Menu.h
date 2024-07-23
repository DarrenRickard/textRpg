#ifndef MENU_H
#define MENU_H
#include "../Player/Player.h"

class Menu
{
public:
    Menu();
    ~Menu();
    void displayMenu();
    bool handleMenuInput(char *choice, shared_ptr<Player> player);
    void pressAnyKeyToContinue();
};

#endif