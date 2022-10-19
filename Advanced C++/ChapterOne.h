#pragma once
#include "Utils.h"
#include "Character.h"


using namespace std;

void ChapterOne(Character& player)
{
	string oneWordAnswer;

	cout << "\t CHAPTER ONE\n";
	cout << endl;
	cout << "You've been walking around in circles for hours,\n"
		<< "Lost in the forest long after dark ...\n";
	cout << endl;
	cout << "Suddently, you hear some noise coming behind you,\n"
		<< "You turn around to face the danger\n"
		<< "And see a big fat Goblin staring at you, a wood spike in the hand, and some drool dripping from the mouth.\n";
	cout << endl;
	cout << "(* TUTORIAL: When you are asked to do an action, type in a one-word verb to defineyour hero's reaction. *)\n";
	cout << "(* For exemple : Run, Attack, Talk, Bargain *)\n";
	cout << endl;
	cout << "Action: ";

	do
	{
		oneWordAnswer = CheckIfOnlyLetters(oneWordAnswer);
		oneWordAnswer = ToLower(oneWordAnswer);

		if (oneWordAnswer == "run")
		{
			Clear();

			cout << "You're naked like a rat and not prepared to fight.\n"
				<< "You run away like a chicken, following a stone path\n"
				<< "Praying for a city to appear to you.\n";

			cout << endl;
			cout << "The player run from the fight.\n";
			//The player run from the fight

			break;
		}
		else if (oneWordAnswer == "attack" || oneWordAnswer == "fight")
		{
			Clear();

			cout << "You're more naked than the trees surrounding you,\n"
				<< "But you're ready to fight! Fist up!\n";

			cout << endl;
			cout << "The Player Start the fight.\n";
			//The Player Start

			break;
		}
		else if (oneWordAnswer == "bargain" || oneWordAnswer == "bribe" || oneWordAnswer == "corrupt")
		{
			Clear();

			cout << "You try to bribe that ugly Gobelin by throwing golds coins at him...\n"
				<< "The only answer you get is just a loud scream from the goblin charging at you.\n"
				<< "Woops, he's mad. \n";


			cout << endl;
			cout << "The Goblin Start the fight.\n";
			//The Gobelin Start

			break;
		}
		else if (oneWordAnswer == "scream" || oneWordAnswer == "yell" || oneWordAnswer == "shout")
		{
			Clear();

			uint8_t raceType = player.GetType();

			if (raceType & CharacterRace::Orc || raceType & CharacterRace::Troll)
			{
				cout << "You scream like the beast you are,\n"
					<< "The trees are checking with your native Strenght\n"
					<< "The legs of that goblin are checking and with that smell, you can tell...\n"
					<< "It pisses on itself.\n";

				cout << endl;
				cout << "Goblin's turn canceled.\n";
				//Gobelin's turn canceled
			}
			else
			{
				cout << "You scream at the Gobelin with a high tone voice,\n"
					<< "And feel like an idiot when you see him laughing and charging at you\n"
					<< "But that's okay... you may sound like a fool, but you're ready to fight!\n";

				cout << endl;
				cout << "The Player Start the fight.\n";
				//The Player Start
			}

			break;
		}
		else if (oneWordAnswer == "talk")
		{
			Clear();

			cout << "Scared and without knowing what to do, you start talking with it...\n"
				<< "Without paying any attention at you, the goblin charges.\n";

			cout << endl;
			cout << "The Gobelin Start the fight.\n";
			//The Gobelin Start

			break;
		}
		else if (oneWordAnswer == "kiss" || oneWordAnswer == "love")
		{
			Clear();

			cout << "You try to seduce that ugly gobelin with your charms,\n"
				<< "But Goblin doesn't know what love is, the gobelin charges.\n";

			cout << endl;
			cout << "The Gobelin Start the fight.\n";
			//The Gobelin Start

			break;
		}
		else
		{
			cout << "Action not possible.\n";
			cout << "\t 1_ Try again\n"
				<<	"\t 2_ List of possible actions\n";

			cout << "Choice: ";
			int choice;
			cin >> choice;
			int x = 0;

			while (!(choice >> x))
			{
				cin.clear();
				cin.ignore(2, '\n');
				cout << "Enter a number between 1 - 2.  Try again: ";

				cin >> choice;
			}

			if (choice == 1)
			{
				cout << "Action: ";
			}
			else
			{
				cout << "List of actions:\n"
					<<	"\t* Run\n"
					<<	"\t* Attack\n"
					<<	"\t* Bribe\n"
					<<	"\t* Scream\n"
					<<	"\t* Talk\n"
					<<	"\t* Love\n";

				cout << "Action: ";
			}
		}
	} while (true);

	system("pause");
	Clear();
}
