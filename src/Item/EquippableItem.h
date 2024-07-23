#ifndef EQUIPPABLEITEM_H
#define EQUIPPABLEITEM_H

#include "Item.h"

class EquippableItem : public Item
{
public:
    EquippableItem(int uid, string name, string description);
    virtual ~EquippableItem();
    void equipItem(){};
};

#endif