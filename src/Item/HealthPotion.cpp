#include "HealthPotion.h"

HealthPotion::HealthPotion(int uid, string name, string description, int health) : UseableItem(uid, name, description), Health(health) {}
    HealthPotion::~HealthPotion() {}
    void HealthPotion::getInfo()
    {
        cout << "UID: " << UID << endl;
        cout << "Item name: " << Name << endl;
        cout << "HP recovery: " << Health << endl;
        cout << "Item description: " << Description << endl;
    };