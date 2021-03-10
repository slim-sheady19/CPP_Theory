#include <iostream>
using namespace std;

int main()
{
	int a(13);
	int b = 13;

	if (b < a)
	{
		cout << "b is less than a." << endl;
	}
	else if (a < b)
	{
		cout << "a is less than b" << endl;
	}
	else if (a == b)
	{
		cout << "a is equal to b" << endl;
	}
	else
	{
		cout << "b is not less than a, a is not less than b, and a is not equal to be." << endl;
	}
	system("pause");
}