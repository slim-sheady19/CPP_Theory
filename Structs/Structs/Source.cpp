#include <iostream>
#include <string>
using namespace std;

struct LocationVector
{
	float X;
	float Y;
	float Z;
};

struct Player
{
	int Level;
	float Health;
	float Damage;
	float Stamina;

	LocationVector Location = {0.f, 0.f, 0.f};

	void TakeDamage(float dmg)
	{
		Health -= dmg;
	}

	int GetLevel()
	{
		if (Level > 10)
		{
			cout << "Level is greather than 10!\n";
		}
		return Level;
	}

	void DisplayLocation()
	{
		cout << "Location.X = " << Location.X << endl;
		cout << "Location.Y = " << Location.Y << endl;
		cout << "Location.Z = " << Location.Z << endl;
	}
};

int main()
{
	Player p_1;
	p_1.Level = 11;
	p_1.Health = 100.f;
	p_1.Damage = 10.f;
	p_1.Stamina = 20.f;

	cout << "p_1 Level = " << p_1.GetLevel() << endl;

	p_1.TakeDamage(40.f);

	cout << "p_1 takes" << 40.f << " damage!" << endl;
	cout << "p_1 Health = " << p_1.Health << endl;

	p_1.DisplayLocation();

	Player p_2 = { 1, 50.f, 40.f, 35.54f, {35.5f, 67.45f, 100.003f} };

	p_2.DisplayLocation();

	system("pause");
}