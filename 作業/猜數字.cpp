#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	int number;
	int guess;
	char ans;
	srand(time(0));
	number = 1+rand()%1000;
	cout << "I have a number between 1 and 1000.\n Can you guess my number?\nPlease type your first guess : ";
	
	bool play=true;
	while(play)(guess!=number);
	{
		cin >> guess ;
		cout << "\n" ;
		if(guess==number)
		cout << "Excellent! You guessed the number!\n" ;
		
		else if(guess<number)
		cout << "Too low. Try again.\n\n" ;
		
		else if(guess>number)
		cout << "Too high. Try again.\n\n" ;
	}
	
	cout << "Would you like to play again (y or n)?\n";
	cin >> ans;
	
	if(ans=='y')
	{
		play=true;
	}
	else
		play=false;
	
} 
