#pragma once
#include <string>
#include <algorithm>
#include <cctype>
#include  <iostream>

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

void Clear()
{
	// CSI[2J clears screen, CSI[H moves the cursor to top-left corner
	std::cout << "\x1B[2J\x1B[H";

	cout << "==================================== Mini RPG ====================================\n";
}

string CheckIfOnlyLetters(string answerToCheck)
{
	do
	{
		cin >> answerToCheck;

		if (std::all_of(begin(answerToCheck), end(answerToCheck), isalpha))
		{
			return answerToCheck;
		}
		else
		{
			std::cout << "Use only letters!" << std::endl;
			cout << "\t" << "Retry: ";
		}
	} while (true);
}

string ToLower(string stringToLower)
{
	transform(stringToLower.begin(), stringToLower.end(), stringToLower.begin(), ::tolower);

	return stringToLower;
}
