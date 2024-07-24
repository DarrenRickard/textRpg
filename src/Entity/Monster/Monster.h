#ifndef MONSTER_H
#define MONSTER_H

#include <iostream>
#include <vector>
#include "../../Item/Item.h"

class Monster
{
private:
    // int UUID; // Waiting to implement use of UUID
    string Name;
    vector<shared_ptr<Item>> Inventory; // items should be stackable, ideally a list where quantities of an item can be kept.
    // Inventory stores pointers to Item objects by using *
public:
    // Monster(int uuid, string username) : UUID(uuid), UserName(username){}; // activate after UUID implementation
    Monster(string name);
    ~Monster();
    void addItem(shared_ptr<Item> item);

    void removeItem(shared_ptr<Item> item);

    void showInventory();
};

#endif