#include "ItemFactory.h"

unique_ptr<Item> ItemFactory::createItem(string type, int uid, string name, string description, int value)
{
    if (type == "Weapon")
    {
        return make_unique<Weapon>(uid, name, description, value);
    }
    else if (type == "HealthPotion")
    {
        return make_unique<HealthPotion>(uid, name, description, value);
    }
    return nullptr;
}

// "type": "HealthPotion",
// "uid": 1,
// "name": "Small Potion",
// "description": "Heals a small amount of HP.",
// "healingAmount": 10