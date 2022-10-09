#pragma once
#include "Creature.h"
#include "RaceType.h"
#include "CharacterClass.h"
#include "Potion.h"
#include "Weapon.h"
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

    std::uint8_t mRace;
    CharacterClass mClass;

    std::vector<Item*> mInventory;

public:
    Character();
    Character(std::string name, CharacterClass characterClass, std::uint8_t flags = 0);
    ~Character();

    void AddItemToInventory(Item* item);
    void RemoveItemToInventory(int index);
    void UseItem(int index);
    void DisplayInventory();

    void GetStats();
    std::uint8_t GetType();


};

