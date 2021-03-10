#include <iostream>
#include <string>
using namespace std;


class Creature
{
public:
	Creature(); //constructor

	void SetName(string name); //setter function
	string GetName(); //getter function for name

	float GetHealth(); //getter for health

	void TakeDamage(float damage); //function to take damage
	
private:
	string Name;
	float Health;

protected:
	int NumberOfLimbs;
};

class Goblin : public Creature
{
public: //child class is by default private
	Goblin();

	int GetNumberOfLimbs(); //function to access number of limbs from parented creature class
};


int main()
{
	Creature Igor;
	Igor.SetName("Igor");

	cout << "Name: " << Igor.GetName() << endl;
	cout << "Health: " << Igor.GetHealth() << endl;

	cout << "Igor will now take 35 damage!" << endl;

	Igor.TakeDamage(35.0);

	Goblin Gobby;
	cout << Gobby.GetName() << endl;
	cout << Gobby.GetNumberOfLimbs() << endl;

	system("pause");
}

Creature::Creature() //constructor init
{
	Health = 100.f;
	cout << "A creature has been created!\n";
}

void Creature::SetName(string name) //function that lets us reach inside Creature class to change private var Name
{
	Name = name;
}

string Creature::GetName()
{
	return Name;
}

float Creature::GetHealth()
{
	return Health;
}

void Creature::TakeDamage(float damage)
{
	float Total;
	Total = Health - damage;
	if (Total <= 0.f)
	{
		cout << GetName() << " has died!\n";
	}
	else
	{
		Health -= damage;
	}

	cout << "Health: " << Health << endl;
}

Goblin::Goblin() //goblin constructor
{
	NumberOfLimbs = 5; //we can do this becase goblin class can access protected properties
	SetName("Gobby");
	//we cannot do the following because Name is to to Private: Name = "Gobby";
}

int Goblin::GetNumberOfLimbs()
{
	return NumberOfLimbs;
}