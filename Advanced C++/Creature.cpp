#include "Creature.h"

using namespace std;

Creature::Creature()
{
    mName = "Kurgan";
}

Creature::Creature(std::string name)
{
    mName = name;
}

Creature::~Creature()
{
}

std::string Creature::GetName()
{
    return mName;
}

int Creature::GetHealth()
{
    cout << "MaxHealth: " << mMaxHealth << endl;
    cout << "CurrentHealth: " << mCurrentHealth << endl;
    return mCurrentHealth;
}

void Creature::GetHealed(int amount)
{
    mCurrentHealth += amount;

    if (mCurrentHealth >= mMaxHealth)
    {
        cout << mName << " is full life!\n";
        mCurrentHealth = mMaxHealth;
    }
    else 
    {
        cout << mName << " has "  << mCurrentHealth  << " HP left.\n";
    }

}

void Creature::GetHurt(int amount)
{
    mCurrentHealth -= amount;

    if (mCurrentHealth <= 0)
    {
        cout << mName << " died in agony.\n";
        mCurrentHealth = 0;

        Die();
    }
    else
        cout << mName << " lost " << amount << " HP and has now " << mCurrentHealth << " left.\n";
}

void Creature::Die()
{
    //this->~Creature();
}


