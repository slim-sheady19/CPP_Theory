#include <iostream>
using namespace std;

int main()
{
	int MyIntArray[5] = { 1, 23, 5, 4, 9 };

	for (int i = 0; i < 5; i++)
	{
		cout << "MyIntArray[" << i << "] = " << MyIntArray[i] << endl;
	}

	//the for loop above is a more efficient way of doing the following with the MyIntArray
	cout << "MyIntArray[0] = " << MyIntArray[0] << endl;
	cout << "MyIntArray[1] = " << MyIntArray[1] << endl;
	cout << "MyIntArray[2] = " << MyIntArray[2] << endl;
	cout << "MyIntArray[3] = " << MyIntArray[3] << endl;
	cout << "MyIntArray[4] = " << MyIntArray[4] << endl;

	

	system("pause");
}