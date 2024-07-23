#include "UseableItem.h"

UseableItem::UseableItem(int uid, string name, string description) : Item(uid, name, description) {};
UseableItem::~UseableItem(){};
void UseableItem::useItem() {};
