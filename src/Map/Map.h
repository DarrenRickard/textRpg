#ifndef MAP_H
#define MAP_H
#include <unordered_map>
#include <vector>
#include <iostream>
#include "./Player/Player.h"
#include "./Monster/Monster.h"
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