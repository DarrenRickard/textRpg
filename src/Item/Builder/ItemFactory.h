#ifndef ITEMFACTORY_H
#define ITEMFACTORY_H

#include <memory>
// #include "../Item.h"
#include "../Weapon.h"
#include "../HealthPotion.h"

class ItemFactory
{
public:
    static unique_ptr<Item> createItem(string type, int uid, string name, string description, int value);
};

#endif

// "type": "HealthPotion",
// "uid": 1,
// "name": "Small Potion",
// "description": "Heals a small amount of HP.",
// "healingAmount": 10