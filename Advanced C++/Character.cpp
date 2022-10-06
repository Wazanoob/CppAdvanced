#include "Character.h"

using namespace std;

Character::Character():Creature()
{
	mGolds = 100;
}

Character::Character(string name, int golds):Creature(name)
{
	mGolds = golds;
}

Character::~Character()
{
	mInventory.~vector();
}

void Character::AddItemToInventory(Item item)
{
	if (mInventory.size() < MAX_INVENTORY_CAPACITY)
	{
		mInventory.push_back(item);
		cout << item.GetName() << " added to the inventory.\n";
	}
	else
		cout << "Inventory is full!\n";

}

void Character::RemoveItemToInventory(int index)
{
	std::vector<Item>::iterator i;

	i = mInventory.begin();
	i += index;

	cout << mInventory[index].GetName() << " has been destroyed.\n";
	mInventory.erase(i);

}

void Character::DisplayInventory()
{
	cout << "Displaying " << GetName() << " inventory:\n";

	for (int i = 0; i < mInventory.size(); i++)
	{
		cout << "\t*" << i << " ";
		mInventory[i].Summup();
	}
}

void Character::SwitchWeapon(Weapon weapon)
{

}

void Character::UsePotion()
{
}
