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
	Character player = CharacterCreation();
	//Character player = Character(); //FOR DEBUGGING

	system("pause");
	Clear();

	/*Chapter 1; Lost in the forest */
	ChapterOne(player);
}



