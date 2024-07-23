#ifndef ITEMINITIALIZER_H
#define ITEMINITIALIZER_H

#include <memory>
#include <unordered_map>
#include "../Item.h"
#include <nlohhman/json.hpp>

class ItemInitializer {
    private:
        ItemInitializer() = default;
        unordered_map<int, shared_ptr<Item>> items;

    public:
        static ItemInitializer &getInstance();
        void initializeItems(string &configFilePath);
        shared_ptr<Item> getItem(int uid);
};

#endif