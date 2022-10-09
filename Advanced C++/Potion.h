#pragma once
#include "IUseable.h"
#include "Item.h"

class Potion :
    public Item, public IUseable
{

public:
    struct PotionEffect
    {
        //XP Potion // HP Potion // BonusDamage Potion // Mana Potion // Energy Potion
        int amount, secondAmount;
    };


private:
    PotionEffect mEffect;

public:
    Potion();
    Potion(std::string name, std::string description, int cost, bool isStackeable, int amount, PotionEffect eff);
    ~Potion();

    Potion GetItem();
    PotionEffect GetEffect() 
    {
        return mEffect;
    };
};

