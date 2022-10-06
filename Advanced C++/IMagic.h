#pragma once

class IMagic
{
public:
	virtual ~IMagic() {};

	virtual void Resolve() = 0;
	//Can be magic: Abilities // Weapons // Potions
	//Resolve: Useable or AoE or Debuff or Buff
};

