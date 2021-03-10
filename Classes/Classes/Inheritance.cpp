#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	Animal();

	string Name;
	int Age;
	int NumberOfLimbs;

	void Report();
};

int main()
{
	Animal animal;

	animal.Report();

	system("pause");
}

Animal::Animal()
{
	cout << "An ANIMAL is born!\n";

	Name = "DEFAULT";
	Age = 2;
	NumberOfLimbs = 4;
}

void Animal::Report()
{
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "Limbs " << NumberOfLimbs << endl;

}