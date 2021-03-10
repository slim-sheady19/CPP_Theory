#include <iostream> //for streams of data
using namespace std;

//function prototype, tells the compiler the function exists.  if function doesnt come, compiler will create build errors
void welcome();

char getYesNo();

void printResponse(char responseToPrint);

void askYesOrNoQuestion();

int main()
{
	//asks user to enter y or n and then returns the response
	askYesOrNoQuestion();

	system("pause");
}

void welcome()
{
	//welcome user to the program
	cout << "Welcome!\n"; 
}

char getYesNo()
{
	// ask the user yes or no?
	cout << "Please answer: y or n.\n";

	//char local variable (exists only in this function)
	char response;

	//get input from the user via keyboard
	cin >> response;

	return response;
}

void printResponse(char responseToPrint)
{
	//print response to the screen
	cout << "Your answer was: " << responseToPrint << endl;
}

void askYesOrNoQuestion()
{
	//greet the user
	welcome();

	//create char local variable and store the result from getYesNo
	char answer = getYesNo(); //getYesNo gets a y or n from the user

	//return the response back to the user on the screen
	printResponse(answer);
}