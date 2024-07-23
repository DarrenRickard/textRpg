#include <iostream>
#include <vector>
#include "./src/Item/Weapon.h"
#include "./src/Item/HealthPotion.h"
#include "./src/Player/Player.h"
#include "./src/Menu/Menu.h"

int main()
{
    // initialize menu
    Menu *menu = new Menu();

    // find better way to initialize player
    shared_ptr<Player> player1 = make_shared<Player>("Darren"); // same as auto player = make_unique<Player>

    // find better way to initialize items
    auto sword = make_shared<Weapon>(2, "Heaven's sword", "A heavenly sword said to have fallen from the sky. Only the chosen may wield this sword.", 10);
    auto smallPot = make_shared<HealthPotion>(1, "Small Potion", "Heals a small amount of HP.", 10);

    // manual add to inventory
    player1->addItem(smallPot);
    player1->addItem(sword);

    // Game Loop
    bool play = true;
    while (play)
    {
        char choice;
        menu->pressAnyKeyToContinue();
        menu->displayMenu();
        play = menu->handleMenuInput(&choice, player1);
    }
    menu->pressAnyKeyToContinue();
};

// Reminder:
// shft+alt+F will auto-format the code
// passing by reference '&' is memory and speed efficient. always do it. Takes memory address of passed argument.
// &item passes argument by reference instead of copying entire argument. Takes the memory address of the passed in argument, instead of duplicating.
// int n = 5; //normal variable
// cout << &n; //prints address of n variable (this is a reference)
// int* ptr = &n // assigns address of n to an int pointer ptr (this is a pointer)
// cout << ptr; // prints address of n variable (&n) (this prints a reference)
// cout << *ptr; // prints value of n variable (this is dereference, aka actual value stored in memory)
// *ptr = 10; // assigns value of 10 to n variable (assigns to ptr memory location)

// Tasks:
// For each Item, construct item from separate json file of item data
// For class EquippableItem, create equipItem method
// For class EquippableItem, stats should be in map/dict?
// For player's equipped items, map data structure should be used.
// ex. map["Top"] = {int& item UID}, map["Weapon"] = {int& item UID}
// Change class HealthPotion:Item to HealthPotion:UseableItem