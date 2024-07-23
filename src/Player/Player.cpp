#include "Player.h"

// Player(int uuid, string username) : UUID(uuid), UserName(username){}; // activate after UUID implementation
    Player::Player(string username) : UserName(username){};
    Player::~Player(){};
    void Player::addItem(shared_ptr<Item> item)
    {
        Inventory.push_back(item);
    };

    void Player::removeItem(shared_ptr<Item> item)
    {
        Inventory.erase(remove(Inventory.begin(), Inventory.end(), item), Inventory.end());
    };

    void Player::showInventory()
    {
        cout << "Inventory:" << endl;
        // For each item in inventory, Item.getInfo()
        for (shared_ptr<Item> item : Inventory)
        {
            item->getName();
            // item.getName();
        }
        cout << endl;
    };