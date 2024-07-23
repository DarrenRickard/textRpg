#ifndef HEALTHPOTION_H
#define HEALTHPOTION_H

#include "UseableItem.h"

class HealthPotion : public UseableItem
{
private:
    int Health;

public:
    HealthPotion(int uid, string name, string description, int health);
    ~HealthPotion();
    void getInfo() override;
};

#endif