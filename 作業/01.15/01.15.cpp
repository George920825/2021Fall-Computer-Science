#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int random ();
int game();

int main (void)
{
	bool play = true;
	
	do
	{
		char again;
		game();
		
		cout << "Would you like to play again (y or n)?\n";
		cin >> 	again;
		
		if( again != 'y')
		{
			play = false;
		}
	}while( play != false );
}

int game()
{
	int typeInNumber;
	int targetNumber;
	
	targetNumber = random();
	
	cout << "I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.\n" ;
	
	do
	{
		cin >> typeInNumber;
		if( typeInNumber > targetNumber )
		{
			cout << "Too high. Try again.\n";
		}
		else if( typeInNumber < targetNumber )
		{
			cout << "Too low. Try again.\n";
		}
		else
		{
			cout << "Excellent! You guessed the number!\n";
		}
	}while( targetNumber != typeInNumber );
}

int random ()
{
	srand ( time (0) );
	return 1 + rand()%1000;
}
