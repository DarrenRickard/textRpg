#ifndef PLAYER_H
#define PLAYER_H
#include <memory>
#include <iostream>
#include <vector>
#include <unordered_map>
#include "../../Item/Item.h"

class Player
{
private:
    // int UUID; // Waiting to implement use of UUID
    string UserName;
    vector<shared_ptr<Item>> Inventory; // Useable items should be stackable, ideally an UOMap where quantities of an item can be kept.
    unordered_map<string, int> Stats;
public:
    // Player(int uuid, string username) : UUID(uuid), UserName(username){}; // activate after UUID implementation
    // UUID will come from database
    Player(string username, vector<shared_ptr<Item>> inventory, unordered_map<string, int> stats);
    ~Player();
    void addItem(shared_ptr<Item> item);

    void removeItem(shared_ptr<Item> item);

    void showInventory();

    void showStats();
};

#endif