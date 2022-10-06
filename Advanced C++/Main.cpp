#include <iostream>
#include "Weapon.h"
#include "Character.h"
#include "Weapon.h"

using namespace std;

int main()
{
	srand(time(NULL));

	Character kurgan = Character("Kurgan", 100);

	Weapon twig = Weapon(1, 0.5, 1, "Twig", "A beautiful stick", 1, false);
	Weapon sword = Weapon(7, 5, 1, "Sword of Adar", "The lost sword of Adar", 1000, false);

	kurgan.AddItemToInventory(twig);
	kurgan.AddItemToInventory(sword);

}

