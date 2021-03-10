#include <iostream>
#include <string>
using namespace std;

struct Container
{
	string Name;

	int X;
	int Y;
	int Z;
};

int main()
{
	int a = 100;

	int* aPtr; //declare pointer to int a
	aPtr = &a; //initialize pointer with 'address of operator' on a

	cout << aPtr << endl;
	cout << *aPtr << endl; // access content of aPtr which is address to memory of int a

	int b = 50;

	int numbers[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int* NumPtr = numbers; // pointer must be same data type, in this case int

	cout << *NumPtr << endl;

	NumPtr++;
	cout << *NumPtr << endl;

	NumPtr += 3;
	cout << *NumPtr << endl;

	Container container = { "Sam", 5, 6, 7 };

	Container* PtrToCont = &container;

	cout << (*PtrToCont).Name << endl; // make sure to include parentheses otherwise you are trying to access Name property on a pointer and not the pointer's contents
	cout << PtrToCont->Name << endl; // -> is better way of doing same thing as parentheses

	system("pause");
}