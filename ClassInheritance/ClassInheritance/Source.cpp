#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	Animal(); //1st constructor overload = default (no input params given)
	Animal(string name, int age, int num_limbs); //2nd constructor overload1

	string Name;
	int Age;
	int NumberOfLimbs;

	void Report();
};

class Dog : public Animal //new class dog, inherits from Animal
{
public:
	Dog(); //creating dog constructor
	Dog(string name, int age, int num_limbs);

	void Speak();
};

class Corgi : public Dog // new class Corgi inherits from Dog and Animal
{

};

int main()
{
	Dog dog("Spot", 4, 5); //created dog object

	dog.Speak();

	Corgi corgi;

	corgi.Speak();
	corgi.Report();

	/*animal;

	animal.Report();

	Animal animal_2("Cheetah", 7, 5); //calling constructor of class animal with input params

	animal_2.Report();
	*/
	system("pause");
}

Animal::Animal() //1st constructor initilization
{
	cout << "An ANIMAL is born!\n";

	Name = "DEFAULT";
	Age = 2;
	NumberOfLimbs = 4;
}

Animal::Animal(string name, int age, int num_limbs) // 2nd constructor initialization (default values)
	: Name(name), Age(age), NumberOfLimbs(num_limbs) // input list params
{
	Report();
	/*Name = name;
	Age = age;
	NumberOfLimbs = num_limbs;*/
}

void Animal::Report() //animal report function
{
	cout << endl;
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "Limbs " << NumberOfLimbs << endl;
	cout << endl;
}

Dog::Dog()
{
	cout << "A DOG is born!" << endl;
}

Dog::Dog(string name, int age, int num_limbs) : Animal(name, age, num_limbs) //no longer calling 1st Animal constructor.  calling Animal constructor with input params
{
	
}

void Dog::Speak()
{
	cout << "Woof!\n" << endl;
}