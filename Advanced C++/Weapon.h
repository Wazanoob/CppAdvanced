#pragma once
#include "Item.h"

class Weapon :
    public Item
{
private:
    int mDamage;
    float mWeight;
    float mDurability;

public:
    Weapon();
    Weapon(int damage, float weight, float durability, std::string name, std::string description, int cost, bool isStackeable);
    ~Weapon();

    void Summup();
};

