#include <iostream>
using namespace std;

int main()
{
	int i = 3;
	float j = 2.0;

	float k = i/j; 

	//division with integers loses fraction.
	// i /= 2; 

	cout << k << endl;

	int a = 3;

	cout << --a << endl;
	cout << a << endl;

	system("pause");
}