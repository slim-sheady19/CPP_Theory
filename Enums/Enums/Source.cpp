#include <iostream>
#include <string>
using namespace std;

enum PlayerStatus
{
	PS_Crouched,
	PS_Standing,
	PS_Walking,
	PS_Running
};

enum MovementStatus
{
	MS_Crouched,
	MS_Running
};

int main()
{
	PlayerStatus status; //variable 'status' of type PlayerStatus that we created above
	status = PS_Crouched;

	if (status == PS_Crouched)
	{
		cout << "The player is couching\n";
	}

	status = PlayerStatus::PS_Running;

	cout << status << endl;

	system("pause");
}