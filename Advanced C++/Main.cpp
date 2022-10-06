#include "Character.h"
#include "Potion.h"
#include "Weapon.h"
#include <algorithm>
#include <cctype>

using namespace std;

Character CharacterCreation();
void Clear();

int main()
{
	srand(time(NULL));

	cout << "==================================== Mini RPG ====================================\n";

	Character player = CharacterCreation();
}

void Clear() 
{
	// CSI[2J clears screen, CSI[H moves the cursor to top-left corner
	std::cout << "\x1B[2J\x1B[H";

	cout << "==================================== Mini RPG ====================================\n";
}

Character CharacterCreation()
{
	string playerName;
	CharacterClass characterClass;
	RaceType raceType;

	cout << "Welcome travelers! Please, choose a name for your hero.\n";
	cout << "\t" << "Hero's name: ";

	do 
	{
		cin >> playerName;

		if (std::all_of(begin(playerName), end(playerName), isalpha))
		{
			break;
		}
		else
		{
			std::cout << "Use only letters!" << std::endl;
			cout << "\t" << "Hero's name: ";
		}
	} while (true);
	
	cout << endl;
	Clear();

	cout << "Choose your race:\n"
		<< "1_ Elfe\n"
		<< "2_ Human\n"
		<< "3_ Orc\n"
		<< "4_ Gobelin\n"
		<< "5_ Troll\n";

	cout << "\t" << "Choice: ";

	bool isTrue = false;

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
			isTrue = true;
			Clear();
			cout << "You choosed to be an Elfe.\n";
			raceType = RaceType::Elfe;
			break;
		case 2:
			isTrue = true;
			Clear();
			cout << "You choosed to be a Human.\n";
			raceType = RaceType::Human;
			break;
		case 3:
			isTrue = true;
			Clear();
			cout << "You choosed to be an Orc.\n";
			raceType = RaceType::Orc;
			break;
		case 4:
			isTrue = true;
			Clear();
			cout << "You choosed to be a Gobelin.\n";
			raceType = RaceType::Gobelin;
			break;
		case 5:
			isTrue = true;
			Clear();
			cout << "You choosed to be a Troll.\n";
			raceType = RaceType::Troll;
			break;

		default:
			isTrue = false;
			cout << "Enter a number between 1 - 5.  Try again: ";
			break;
		}
	} while (!isTrue);

	cout << "Bonus stats added to "<< playerName << endl;
	cout << endl;

	//Press any key to continue
	system("pause");
	Clear();

	cout << "Choose your class: \n"
		<< "1_ Warrior\n"
		<< "2_ Mage\n"
		<< "3_ Demonist\n"
		<< "4_ Priest\n"
		<< "5_ Paladin\n";

	cout << "\t" << "Choice: ";

	isTrue = false;

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
			isTrue = true;
			Clear();
			cout << "You choosed to be a Warrior.\n";
			characterClass = CharacterClass::Warrior;
			break;
		case 2:
			isTrue = true;
			Clear();
			cout << "You choosed to be a Mage.\n";
			characterClass = CharacterClass::Mage;
			break;
		case 3:
			isTrue = true;
			Clear();
			cout << "You choosed to be an Demonist.\n";
			characterClass = CharacterClass::Demonist;
			break;
		case 4:
			isTrue = true;
			Clear();
			cout << "You choosed to be a Priest.\n";
			characterClass = CharacterClass::Priest;
			break;
		case 5:
			isTrue = true;
			Clear();
			cout << "You choosed to be a Paladin.\n";
			characterClass = CharacterClass::Paladin;
			break;

		default:
			isTrue = false;
			cout << "Enter a number between 1 - 5.  Try again: ";
			break;
		}
	} while (!isTrue);

	cout << "Bonus stats added to " << playerName << endl;
	cout << playerName << "learned 2 new skills.\n";
	cout << endl;

	system("pause");
	Clear();

	Character player = Character(playerName, characterClass, raceType);
	player.GetStats();


	return player;
}

