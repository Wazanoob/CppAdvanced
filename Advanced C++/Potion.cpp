#include "Potion.h"

using namespace std;

Potion::Potion():Item()
{
	mAmount = 10;
}

Potion::Potion(std::string name, std::string description, int cost, bool isStackeable, int amount)
	:Item(name, description, cost, isStackeable)
{
	mAmount = amount;
}

Potion::~Potion()
{

}

Potion Potion::GetItem()
{
	return *this;
}

void Potion::Use(Character& character)
{
	cout << character.GetName() << " used " << GetName() << " and healed " << mAmount << " HP.\n";

	character.GetHealed(mAmount);
}
