#ifndef WEAPON_H
#define WEAPON_H

#include "EquippableItem.h"

class Weapon : public EquippableItem
{
private:
    int Attack;

public:
    Weapon(int uid, string name, string description, int attack);
    ~Weapon();
    void getInfo() override;
};

#endif