#include "Item.h"

Item::Item(int uid, string name, string description) : UID(uid), Name(name), Description(description) {}
Item::~Item() {} // Virtual destructor to guarantee proper cleanup of item deletion. Always have virtual destructor for base class
void Item::getInfo()
{
    cout << "UID: " << UID << endl;
    cout << "Item name: " << Name << endl;
    cout << "Item description: " << Description << endl;
}
void Item::getName() { cout << Name << endl; }