#pragma once
#include <string>
#include "Weapon.h"

class Merchant
{
private:
	std::string mName;
	std::string mShopName;
	std::string mDescription;
	std::string mCatchphrase;

	Weapon* mInventory;

	int mMoney;

public:
	const int INVENTORY_SIZE = 9;

	Merchant();
	Merchant(std::string name, std::string shopName, std::string description, std::string catchphrase, Weapon* inventory);
};

