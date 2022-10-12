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
		<< "And see a big fat Goblin staring at you, a stick in the hand, and some drool dripping from the mouth.\n";
	cout << endl;
	cout << "(* TUTORIAL: When you are asked to do an action, type in a one-word verb to defineyour hero's reaction. *)\n";
	cout << "(* For exemple : Run, Attack, Talk, Bargain *)\n";
	cout << endl;
	cout << "Action: ";

	oneWordAnswer = CheckIfOnlyLetters(oneWordAnswer);
	oneWordAnswer = ToLower(oneWordAnswer);

	cout << endl;
	Clear();

	if (oneWordAnswer == "run")
	{
		cout << "You're naked like a rat and not prepared to fight.\n"
			<< "You run away like a chicken, following a stone path\n"
			<< "Praying for a city to appear to you.\n";

		cout << endl;
		cout << "The player run from the fight.";
		//The player run from the fight
	}
	else if (oneWordAnswer == "attack" || oneWordAnswer == "fight")
	{
		cout << "You're more naked than the trees surrounding you,\n"
			<< "But you're ready to fight! Fist up! Legs checking...\n";

		cout << endl;
		cout << "The Player Start the fight.";
		//The Player Start
	}
	else if (oneWordAnswer == "bargain" || oneWordAnswer == "bribe" || oneWordAnswer == "corrupt")
	{
		cout << "You try to bribe that ugly Gobelin by throwing golds coins at him...\n"
			<< "The only answer you get is just a loud scream and the goblin charging you.\n"
			<< "Woops, he's mad. \n";


		cout << endl;
		cout << "The Goblin Start the fight.";
		//The Gobelin Start
	}
	else if (oneWordAnswer == "scream" || oneWordAnswer == "yell"  || oneWordAnswer == "shout")
	{
		uint8_t raceType = player.GetType();

		if (raceType & CharacterRace::Orc  || raceType & CharacterRace::Troll)
		{
			cout << "You scream like the beast you are,\n"
				<< "The trees are checking with your native Strenght\n"
				<< "The legs of that goblin are checking and with that smell, you can tell...\n"
				<< "It pisses on itself.\n";

			cout << endl;
			cout << "Goblin's turn canceled.";			
			//Gobelin's turn canceled
		}
		else
		{
			cout << "You scream at the Gobelin with a high tone voice,\n"
				<< "And feel like an idiot when you see him laughing and charging at you\n"
				<< "But that's okay... you may sound like a fool, but you're ready to fight!\n";

			cout << endl;
			cout << "The Player Start the fight.";
			//The Player Start
		}
	}else if(oneWordAnswer == "talk")
	{
		cout << "Scared and without knowing what to do, you start talking with it...\n"
			<< "Without paying any attention at what you're saying, the gobelin charges you.\n";
		
		cout << endl;
		cout << "The Gobelin Start the fight.";
		//The Gobelin Start
	}
	else if (oneWordAnswer == "kiss" || oneWordAnswer == "love")
	{
		cout << "You try to seduce that ugly gobelin with your charms,\n"
			<< "But without paying any attention at what you're doing, the gobelin charges you and ready to punch you even harder.\n";

		cout << endl;
		cout << "Player's turn canceled.";
		//Player's turn canceled.
	}



	cout << endl;

	cout << endl;

	system("pause");
}
