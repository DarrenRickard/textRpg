#ifndef USEABLEITEM_H
#define USEABLEITEM_H

#include "Item.h"

class UseableItem : public Item
{
public:
    UseableItem(int uid, string name, string description);
    ~UseableItem();
    void useItem();
};

#endif