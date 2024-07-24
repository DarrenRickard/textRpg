#include <iostream>
#include <vector>
#include <unordered_map>
#include "./src/Item/Weapon.h"
#include "./src/Item/HealthPotion.h"
#include "./src/Entity/Player/Player.h"
#include "./src/Menu/Menu.h"

int main()
{
    // initialize menu
    Menu *menu = new Menu();

    // find better way to initialize items
    auto sword = make_shared<Weapon>(2, "Heaven's sword", "A heavenly sword said to have fallen from the sky. Only the chosen may wield this sword.", 10);
    auto smallPot = make_shared<HealthPotion>(1, "Small Potion", "Heals a small amount of HP.", 10);

    // dummy inventory
    vector<shared_ptr<Item>> myInventory = {
        smallPot,
        sword
    };

    // dummy stats
    unordered_map<string, int> myStats = {
        {"Luck", 4},
        {"Intelligence", 4},
        {"Dexterity", 8},
        {"Strength", 10}

    };

    // find better way to initialize player
    shared_ptr<Player> player1 = make_shared<Player>("Darren", myInventory, myStats ); // same as auto player = make_unique<Player>


    // manual add to inventory
    // player1->addItem(smallPot);
    // player1->addItem(sword);

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

// Tasks:
// For each Item, construct item from item database table
// For class EquippableItem, create equipItem method
// For class EquippableItem, stats should be in map/dict?
// For player's equipped items, map data structure should be used.
// ex. map["Top"] = {int& item UID}, map["Weapon"] = {int& item UID}
