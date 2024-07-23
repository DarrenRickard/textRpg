#ifndef ITEM_H
#define ITEM_H

#include <iostream>
using namespace std;

class Item
{
protected:
    int UID;
    string Name;
    string Description;

public:
    Item(int uid, string name, string description);
    virtual ~Item(); // Virtual destructor to guarantee proper cleanup of item deletion. Always have virtual destructor for base class
    virtual void getInfo();
    void getName();
};

#endif