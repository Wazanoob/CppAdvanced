#include "CharacterCreation.h"
#include "ChapterOne.h"
#include "Potion.h"
#include "Weapon.h"

using namespace std;

int main()
{
	srand(time(NULL));

	cout << "==================================== Mini RPG ====================================\n";

	/*Chapter 0; Character Creation*/
	//Character player = CharacterCreation();
	Character player = Character(); //FOR DEBUGGING

	system("pause");
	Clear();

	/*Chapter 1; Lost in the forest */
	ChapterOne(player);

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



