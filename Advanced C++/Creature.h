#pragma once
#include <iostream>

class Creature
{
private:
	std::string mName;
	int mCurrentHealth;

protected:
	int mMaxHealth;
	int mArmorPhysic;
	int mArmorMagic;

public:
	Creature();
	Creature(std::string name);

	~Creature();

	std::string GetName();

	//Attack()
	void GetHealed(int amount);
	void GetHurt(int amount);
	virtual void Die();
};

