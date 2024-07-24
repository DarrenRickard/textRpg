#ifndef MAP_H
#define MAP_H
#include <unordered_map>
#include <vector>
#include <iostream>
#include "../Entity/Player/Player.h"
#include "../Entity/Monster/Monster.h"
class Map
{
private:
    vector<shared_ptr<Monster>> monsters;
    vector<shared_ptr<Player>> players;

public:
    Map();
    ~Map();
    void addPlayer();
    void addMonster();
};

#endif