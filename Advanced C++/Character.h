#pragma once
#include "Creature.h"
#include "RaceType.h"
#include "CharacterClass.h"
#include "Item.h"
#include <vector>

class Character :
    public Creature
{
private:
    int mEnergy;
    int mMana;
    int mAttackBonus;

    int mGolds;
    int const MAX_INVENTORY_CAPACITY = 10;

    RaceType mRace;
    CharacterClass mClass;

    std::vector<Item> mInventory;

public:
    Character();
    Character(std::string name, CharacterClass characterClass, RaceType raceType);
    ~Character();

    void AddItemToInventory(Item item);
    void RemoveItemToInventory(int index);
    void GetStats();

    void DisplayInventory();
};

