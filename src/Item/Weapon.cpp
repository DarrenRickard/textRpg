#include "Weapon.h"

Weapon::Weapon(int uid, string name, string description, int attack) : EquippableItem(uid, name, description), Attack(attack) {}
Weapon::~Weapon(){};
void Weapon::getInfo()
{
    cout << "UID: " << UID << endl;
    cout << "Item name: " << Name << endl;
    cout << "Item description: " << Description << endl;
    cout << "Attack: " << Attack << endl;
}