#include "Creature.h"

Creature::Creature()
{
    mName = "No name";
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
