#include <iostream>
#include <string>
using namespace std;

void ChangeStr(string& str);

int main()
{
	string myStr = "Druid";

	string& myRef = myStr; //declaration of variable reference and initialization

	myRef += "Mechanics";

	system("pause");
}

void ChangeStr(string& str)
{
	str += "!";
}