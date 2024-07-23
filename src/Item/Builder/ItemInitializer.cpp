#include "ItemInitializer.h"
#include "ItemFactory.h"

ItemInitializer &getInstance(){
    static ItemInitializer instance;
    return instance;
};

void initializeItems(string &configFilePath){

};

shared_ptr<Item> getItem(int uid){

};