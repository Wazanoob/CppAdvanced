#pragma once
#include "Creature.h"
#include "Item.h"
#include "Weapon.h"
#include <vector>

class Character :
    public Creature
{
private:
    int mGolds;
    int const MAX_INVENTORY_CAPACITY = 10;

    std::vector<Item> mInventory;

public:
    Character();
    Character(std::string name, int golds);
    ~Character();

    void AddItemToInventory(Item item);
    void RemoveItemToInventory(int index);

    void SwitchWeapon(Weapon weapon);
    void UsePotion();

    void DisplayInventory();
};

