#include "Character.h"
#include "Potion.h"
#include "Weapon.h"
#include "Utils.h"
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
	//Character player = Character();

	/*Potion::PotionEffect normalLowPotion;
	normalLowPotion.amount = 10;
	normalLowPotion.secondAmount = 0;

	Potion::PotionEffect normalMediumPotion;
	normalMediumPotion.amount = 15;
	normalMediumPotion.secondAmount = 0;

	Potion::PotionEffect normalLargePotion;
	normalLargePotion.amount = 25;
	normalLargePotion.secondAmount = 0;

	Potion::PotionEffect dubleEffectLowPotion;
	dubleEffectLowPotion.amount = 10;
	dubleEffectLowPotion.secondAmount = 5;

	Potion::PotionEffect dubleEffectMediumPotion;
	dubleEffectMediumPotion.amount = 15;
	dubleEffectMediumPotion.secondAmount = 10;

	Potion::PotionEffect dubleEffectLargePotion;
	dubleEffectLargePotion.amount = 25;
	dubleEffectLargePotion.secondAmount = 15;

	Potion healthPotion = Potion("HealthPotion", "Heal a bit of your pain", 100, true, 10, normalLowPotion);*/

	//player.AddItemToInventory(&healthPotion);
	//player.DisplayInventory();

	//player.UseItem(0);
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
	uint8_t raceType;
	string raceToString;

	uint8_t dinoCatFlag;
	dinoCatFlag = CharacterRace::Elfe | CharacterRace::Gobelin;

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

	cout << "Choose your race:\n";

	int length = static_cast<int>(CharacterRace::Count);
	int n = 0;

	for (int i = 1; i < length; i<<=1)
	{
		cout << (n += 1) << "_ " << GetRaceName(i) << endl;
	}

	cout << "\t" << "Choice: ";

	bool isTrue = false;

	int choice;
	do
	{
		cin >> choice;

		int x = 0;

		while (!(choice >> x)) 
		{
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
			raceToString = "Elfe";
			raceType = CharacterRace::Elfe;
			break;
		case 2:
			isTrue = true;
			Clear();
			cout << "You choosed to be a Human.\n";
			raceType = CharacterRace::Human;
			raceToString = "Human";
			break;
		case 3:
			isTrue = true;
			Clear();
			cout << "You choosed to be an Orc.\n";
			raceType = CharacterRace::Orc;
			raceToString = "Orc";
			break;
		case 4:
			isTrue = true;
			Clear();
			cout << "You choosed to be a Gobelin.\n";
			raceType = CharacterRace::Gobelin;
			raceToString = "Gobelin";
			break;
		case 5:
			isTrue = true;
			Clear();
			cout << "You choosed to be a Troll.\n";
			raceType = CharacterRace::Troll;
			break;

		default:
			isTrue = false;
			cout << "Enter a number between 1 - 5.  Try again: ";
			break;
		}
	} while (!isTrue);

	int random;
	random = (rand() % 5 + 1);

	if (random != choice) 
	{
		cout << "But ...\n";
		cout << endl;

		system("pause");
		Clear();

		int fiftyfifty;
		fiftyfifty = (rand() % 2 + 1);
		switch (fiftyfifty)
		{
		case 1:
			cout << "Sadly your mother was a f* ";
			break;
		case 2:
			cout << "Sadly your father was ";
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
			cout << "Gobelin.\n";
			raceType |= CharacterRace::Gobelin;
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
		if (raceType & CharacterRace::Gobelin && choice != 4)
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
	cout << playerName << " learned 2 new skills.\n";
	cout << endl;

	system("pause");
	Clear();

	Character player = Character(playerName, characterClass, raceType);
	cout << playerName << " Stats:\n";

	player.GetStats();


	return player;
}

