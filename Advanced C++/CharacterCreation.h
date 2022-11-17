#pragma once
#include "Utils.h"
#include "Character.h"


using namespace std;

Character CharacterCreation()
{
	// Parameters for character constructor
	string playerName;
	CharacterClass characterClass;
	uint8_t raceType;
	string raceToString;
	uint8_t dinoCatFlag;

	bool goodInput = false;

#pragma region 
	// Choose Character's name
	cout << "Welcome travelers! Please, choose a name for your hero.\n";
	cout << "\t" << "Hero's name: ";

	playerName = CheckIfOnlyLetters(playerName);

	cout << endl;
	Clear();
#pragma endregion Choose Character's name

#pragma region
	// Choose Character's race
	cout << "Choose your race:\n";
	int length = CharacterRace::Count;
	int n = 0;

	for (int i = 1; i < length; i <<= 1) // Shift the binary one to the left
	{
		cout << (n += 1) << "_ " << GetRaceName(i) << endl; // Show all race's possibilities
	}

	cout << "\t" << "Choice: ";

	int choice;
	do
	{
		cin >> choice;
		int x = 0;

		while (!(choice >> x))
		{
			// Check if the inputs are correct, if not, ask for new inputs.
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Enter a number between 1 - 5.  Try again: ";

			cin >> choice;
		}

		// Apply inputs to set the race
		switch (choice)
		{
		case 1:
			goodInput = true;
			Clear();
			cout << "You choosed to be an Elfe.\n";
			raceToString = "Elfe";
			raceType = CharacterRace::Elfe;
			break;
		case 2:
			goodInput = true;
			Clear();
			cout << "You choosed to be a Human.\n";
			raceType = CharacterRace::Human;
			raceToString = "Human";
			break;
		case 3:
			goodInput = true;
			Clear();
			cout << "You choosed to be an Orc.\n";
			raceType = CharacterRace::Orc;
			raceToString = "Orc";
			break;
		case 4:
			goodInput = true;
			Clear();
			cout << "You choosed to be a Goblin.\n";
			raceType = CharacterRace::Goblin;
			raceToString = "Goblin";
			break;
		case 5:
			goodInput = true;
			Clear();
			cout << "You choosed to be a Troll.\n";
			raceType = CharacterRace::Troll;
			raceToString = "Troll";
			break;

		default:
			goodInput = false;
			cout << "Enter a number between 1 - 5.  Try again: ";
			break;
		}
	} while (!goodInput);

	// Will randomly create an hybrid hero. 
	// If the number is the same as the race choosen by the player, then the hero has only one race.
	int random;
	random = (rand() % 5 + 1);

	if (random != choice)
	{
		cout << "But ...\n";
		cout << endl;

		system("pause");
		Clear();

		int fiftyfifty;
		fiftyfifty = (rand() % 2 + 1); // Une chance sur deux

		switch (fiftyfifty)
		{
		case 1:
			cout << "Sadly your mother was a f* ";
			break;
		case 2:
			cout << "Sadly your father was a f* ";
			break;

		default:
			cout << "Fail fifty fifty u little twat";
			break;
		}

		switch (random)
		{
		case 1:
			cout << "Elfe.\n";
			raceType |= CharacterRace::Elfe;
			break;
		case 2:
			cout << "Human.\n";
			raceType |= CharacterRace::Human;
			break;
		case 3:
			cout << "Orc.\n";
			raceType |= CharacterRace::Orc;
			break;
		case 4:
			cout << "Goblin.\n";
			raceType |= CharacterRace::Goblin;
			break;
		case 5:
			cout << "Troll.\n";
			raceType |= CharacterRace::Troll;
			break;
		}
		cout << playerName << " is half " << raceToString << " and half ";

		if (raceType & CharacterRace::Elfe && choice != 1)
		{
			cout << "Elfe.\n";
		}
		if (raceType & CharacterRace::Human && choice != 2)
		{
			cout << "Human.\n";
		}
		if (raceType & CharacterRace::Orc && choice != 3)
		{
			cout << "Orc.\n";
		}
		if (raceType & CharacterRace::Goblin && choice != 4)
		{
			cout << "Gobelin.\n";
		}
		if (raceType & CharacterRace::Troll && choice != 5)
		{
			cout << "Troll.\n";
		}

		cout << endl;
		cout << "Hybrid bonus stats added to " << playerName << endl;
	}
	else
	{
		cout << "Bonus stats added to " << playerName << endl;
		cout << endl;
	}

	//Press any key to continue
	system("pause");
	Clear();
#pragma endregion Choose Character's race

#pragma region
	// Choose Character's Class
	cout << "Choose your class: \n"
		<< "1_ Warrior\n"
		<< "2_ Mage\n"
		<< "3_ Demonist\n"
		<< "4_ Priest\n"
		<< "5_ Paladin\n";

	cout << "\t" << "Choice: ";

	goodInput = false;

	do
	{
		int choice;
		cin >> choice;

		int x = 0;

		while (!(choice >> x)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Enter a number between 1 - 5.  Try again: ";

			cin >> choice;
		}

		switch (choice)
		{
		case 1:
			goodInput = true;
			Clear();
			cout << "You choosed to be a Warrior.\n";
			characterClass = CharacterClass::Warrior;
			break;
		case 2:
			goodInput = true;
			Clear();
			cout << "You choosed to be a Mage.\n";
			characterClass = CharacterClass::Mage;
			break;
		case 3:
			goodInput = true;
			Clear();
			cout << "You choosed to be an Demonist.\n";
			characterClass = CharacterClass::Demonist;
			break;
		case 4:
			goodInput = true;
			Clear();
			cout << "You choosed to be a Priest.\n";
			characterClass = CharacterClass::Priest;
			break;
		case 5:
			goodInput = true;
			Clear();
			cout << "You choosed to be a Paladin.\n";
			characterClass = CharacterClass::Paladin;
			break;

		default:
			goodInput = false;
			cout << "Enter a number between 1 - 5.  Try again: ";
			break;
		}
	} while (!goodInput);

	cout << "Bonus stats added to " << playerName << endl;
	cout << playerName << " learned 2 new skills.\n";
	cout << endl;

	system("pause");
	Clear();
#pragma endregion Choose Character's Class

	// Apply all the parameters choosen by the player into the character's constructor
	Character player = Character(playerName, characterClass, raceType);
	cout << "\t" << playerName << " Stats:\n";

	// Show the new hero stats
	player.GetStats();
	cout << endl;
	cout << playerName << " starts the journey with " << player.GetGolds() << " golds. (+" << player.GetGolds() - 100 << ")\n";
	cout << endl;

	return player;
}
