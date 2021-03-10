#include <iostream>
#include <string>
using namespace std;

class Character //declare class character
{
public:
	Character();
	~Character(); 

	int* CharacterAge;
	float* CharacterHealth;
};

int main()
{
	Character* Char = new Character;
	delete Char;

	system("pause");
}

Character::Character() //constructor
{
	cout << "A new character was created.\n";

	CharacterAge = new int(1);
	CharacterHealth = new float(100.f);
}

Character::~Character() //destuctor
{
	delete CharacterAge; //delete the variables we created in the constructor because they are stored in the heap (dynamic memory)
	delete CharacterHealth;
}
