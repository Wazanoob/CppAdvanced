#pragma once
#include "IMagic.h"
#include "Item.h"

class Weapon :
    public IMagic, public Item
{
private:
    int mDamage;
    float mWeight;
    float mDurability;

public:
    Weapon();
    Weapon(int damage, float weight, float durability, std::string name, std::string description, int cost, bool isStackeable);
    ~Weapon();

    void Resolve();
    void Summup();
};

