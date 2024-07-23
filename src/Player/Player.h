#ifndef PLAYER_H
#define PLAYER_H
#include <memory>
#include <iostream>
#include <vector>
#include "../Item/Item.h"

class Player
{
private:
    // int UUID; // Waiting to implement use of UUID
    string UserName;
    vector<shared_ptr<Item>> Inventory; // items should be stackable, ideally a list where quantities of an item can be kept.
    // Inventory stores pointers to Item objects by using *
public:
    // Player(int uuid, string username) : UUID(uuid), UserName(username){}; // activate after UUID implementation
    Player(string username);
    ~Player();
    void addItem(shared_ptr<Item> item);

    void removeItem(shared_ptr<Item> item);

    void showInventory();
};

#endif