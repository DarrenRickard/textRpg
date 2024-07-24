#include "Monster.h"


// Player(int uuid, string username) : UUID(uuid), UserName(username){}; // activate after UUID implementation
Monster::Monster(string name){};
Monster::~Monster(){};
void Monster::addItem(shared_ptr<Item> item){
    Inventory.push_back(item);
};

void Monster::removeItem(shared_ptr<Item> item){

};

void Monster::showInventory(){
    for (shared_ptr<Item> item : Inventory){
        item->getName();
    }
};