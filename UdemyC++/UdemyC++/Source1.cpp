#include <iostream>
using namespace std;

void welcome()
{
	cout << "Welcome! \n";
}

void printNumber(int numToPrint)
{
	cout << numToPrint << endl;
}

int add(int a, int b)
{
	int result;
	result = a + b;
	return result;
}

int main()
{
	welcome();
	printNumber(4);
	
	int c;
	c = add(1, 4);

	printNumber(c);

	system("pause");
}