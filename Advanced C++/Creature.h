#pragma once
#include <iostream>

class Creature
{
private:
	std::string mName;

public:
	Creature();
	Creature(std::string name);

	virtual ~Creature();

	std::string GetName();

	//Attack()
	//GetHurt()
	//GetHealed()
	//Die()
};

