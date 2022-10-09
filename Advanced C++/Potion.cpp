#include "Potion.h"

using namespace std;

Potion::Potion():Item()
{
	mEffect.amount = 10;
	mEffect.secondAmount = 15;
}

Potion::Potion(std::string name, std::string description, int cost, bool isStackeable, int amount, PotionEffect eff)
	:Item(name, description, cost, isStackeable)
{
	mEffect = eff;
}

Potion::~Potion()
{

}

Potion Potion::GetItem()
{
	return *this;
}
