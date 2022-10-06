#pragma once
#include "Item.h"
#include "Character.h"

class Potion :
    public Item
{
private:
    int mAmount;

public:
    Potion();
    Potion(std::string name, std::string description, int cost, bool isStackeable, int amount);
    ~Potion();

    Potion GetItem();
    void Use(Character& character);
};

