#include "Item.h"
#include <iostream>

using namespace std;

Item::Item()
{
    mName = "No name";
    mDescription = "A useless thing";
    mCost = 0;

    mIsStackeable = true;
}

Item::Item(std::string name, std::string description, int cost, bool isStackeable)
{
    mName = name;
    mDescription = description;
    mCost = cost;

    mIsStackeable = isStackeable;
}

Item::~Item()
{
}

std::string Item::GetName()
{
    return mName;
}

std::string Item::GetDescription()
{
    return mDescription;
}

int Item::GetCost()
{
    return mCost;
}

void Item::Summup()
{
    cout << mName << endl;
}
