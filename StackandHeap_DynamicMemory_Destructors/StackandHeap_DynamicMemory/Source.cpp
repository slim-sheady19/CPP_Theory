#include <iostream>
#include <string>
using namespace std;

struct Character
{
	Character();
	string Name;
	float Health;
};

int main()
{
	for (int i = 0; i < 10000; i++)
	{
		Character* PtrToChar = new Character(); // having this line only would create a memory leak

		PtrToChar->Name = "Neo";

		cout << PtrToChar->Name << endl;

		delete PtrToChar;  //this for loop creates the name Neo and prints it then deletes it for the i amount of times
	}




	system("pause");
}