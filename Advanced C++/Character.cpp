#include "Character.h"

using namespace std;

Character::Character():Creature()
{
	mClass = CharacterClass::Warrior;
	mRace = RaceType::Human;

	mGolds = 100;
	mArmorPhysic = 10;
	mArmorMagic = 10;

	mMaxHealth = 100;
	mMana = 100;
	mEnergy = 100;
	mAttackBonus = 1;
}

Character::Character(string name, CharacterClass characterClass, RaceType raceType)
	:Creature(name)
{
	mClass = characterClass;
	mRace = raceType;

	mGolds = 100;
	mArmorPhysic = 10;
	mArmorMagic = 10;

	mMaxHealth = 100;
	mMana = 100;
	mEnergy = 100;
	mAttackBonus = 1;

	switch (raceType) 
	{
	case RaceType::Elfe:
		mMana += 50;
		mGolds += 100;
		break;
	case RaceType::Human:
		mGolds += 50;
		mAttackBonus += 1;
		break;
	case RaceType::Orc:
		mMaxHealth += 50;
		mAttackBonus += 3;
		mMana -= 50;
		break;
	case RaceType::Troll:
		mMaxHealth += 100;
		mAttackBonus += 5;
		mMana -= 50;
		mEnergy -= 50;
		break;
	case RaceType::Gobelin:
		mEnergy += 50;
		break;
	}

	switch (characterClass)
	{
	case CharacterClass::Warrior:
		mArmorPhysic += 7;
		mArmorMagic -= 5;
		break;
	case CharacterClass::Mage:
		mArmorPhysic -= 7;
		mArmorMagic += 5;
		break;
	case CharacterClass::Priest:
		mArmorPhysic -= 7;
		mArmorMagic += 5;
		break;
	case CharacterClass::Demonist:
		mArmorPhysic -= 5;
		mArmorMagic += 5;
		break;
	case CharacterClass::Paladin:
		mArmorPhysic += 5;
		mArmorMagic += 3;
		break;
	}
}

Character::~Character()
{
	mInventory.~vector();
}

void Character::AddItemToInventory(Item* item)
{
	if (mInventory.size() < MAX_INVENTORY_CAPACITY)
	{
		mInventory.push_back(item);
		cout << item->GetName() << " added to the inventory.\n";
	}
	else
		cout << "Inventory is full!\n";

}

void Character::RemoveItemToInventory(int index)
{
	std::vector<Item*>::iterator i;

	i = mInventory.begin();
	i += index;

	cout << mInventory[index]->GetName() << " has been destroyed.\n";
	mInventory.erase(i);

}

void Character::DisplayInventory()
{
	cout << "Displaying " << GetName() << " inventory:\n";

	for (int i = 0; i < mInventory.size(); i++)
	{
		cout << "\t*" << i << " ";
		mInventory[i]->Summup();
	}
}

void Character::GetStats()
{
	cout << "Attack Bonus: " << mAttackBonus << " (";
	int bonus = mAttackBonus - 1;
	if (bonus >= 0)
		cout << "+";
	cout << bonus << ") \n";

	cout << "Magic Armor: " << mArmorMagic << " (";
	bonus = mArmorMagic - 10;
	if (bonus >= 0)
		cout << "+";
	cout << bonus << ") \n";

	cout << "Physic Armor: " << mArmorPhysic << " (";
	bonus = mArmorPhysic - 10;
	if (bonus >= 0)
		cout << "+";
	cout << bonus << ") \n";

	cout << "Health: " << mMaxHealth << " (";
	bonus = mMaxHealth - 100;
	if (bonus >= 0)
		cout << "+";
	cout << bonus << ") \n";

	cout << "Mana: " << mMana << " (";
	bonus = mMana - 100;
	if (bonus >= 0)
		cout << "+";
	cout << bonus << ") \n";

	cout << "Energy: " << mEnergy << " (";
	bonus = mEnergy - 100;
	if (bonus >= 0)
		cout << "+";
	cout << bonus << ") \n";
}

void Character::UseItem(int index)
{
	Item* i = mInventory[index];

	Potion* p = dynamic_cast<Potion*>(i);

	if (p != nullptr)
	{
		Potion::PotionEffect effect;

		effect = p->GetEffect();
		cout << effect.amount;
	}


	//if(p.GetEffect() == 

	//IUseable* p = dynamic_cast<IUseable*>(i);

	//if (p)
	//{
	//	cout << "coucou";
	//	p->Use(character);
	//}
}


