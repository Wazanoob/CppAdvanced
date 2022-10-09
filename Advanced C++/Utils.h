#pragma once
#include <string>

using namespace std;

string GetRaceName(uint8_t index)
{
	switch (index)
	{
	case 1:
		return "Elfe";
	case 2:
		return "Human";
	case 4:
		return "Orc";
	case 8:
		return "Gobelin";
	case 16:
		return "Troll";
	default:
		return "Error: Index out of range";
	}
}