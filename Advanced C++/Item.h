#pragma once
#include <string>

class Item
{
private:
	std::string mName;
	std::string mDescription;

	int mCost;
	bool mIsStackeable;

public:
	Item();
	Item(std::string name, std::string description, int cost, bool isStackeable);
	~Item();

	std::string GetName();
	std::string GetDescription();
	int GetCost();

	virtual void Summup();
};

