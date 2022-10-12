#pragma once
#include <iostream>

class Creature
{
private:
	std::string mName;

protected:
	int mMaxHealth;
	int mCurrentHealth;
	int mArmorPhysic;
	int mArmorMagic;

public:
	Creature();
	Creature(std::string name);

	~Creature();

	std::string GetName();

	//Attack()
	int GetHealth();
	void GetHealed(int amount);
	void GetHurt(int amount);
	virtual void Die();
};

