#include "Weapon.h"

using namespace std;

Weapon::Weapon():Item()
{
	mDamage = 1;
	mWeight = 1;
	mDurability = 1;
}

Weapon::Weapon(int damage, float weight, float durability, string name, string description, int cost, bool isStackeable)
	:Item(name, description, cost, isStackeable)
{
	mDamage = damage;
	mWeight = weight;
	mDurability = durability;
}

Weapon::~Weapon()
{
}

void Weapon::Resolve()
{

}

void Weapon::Summup()
{
}
