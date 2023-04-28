#include <iostream>
using namespace std;

int main()
{
	int x; // determines how many times to loop
	int y; // variable to control number of for loops against number of needed integers x
	int j; // integers that will be summed during loop
	int total = 0; // total of all integers

	cout << "How many integers will be summed and what are them?(use space to seperate them)\n";
	cin >> x;

	for ( y = 1; y <= x; y++ )
	{
		cin >> j;
		total += j;
	}

	cout << "The sum of all " << x << " numbers is: " << total << "\n";

	return 0;
} 


/*
#include <iostream>
using namespace std;

int main()
{
	int x; // determines how many times to loop
	int y; // variable to control number of for loops against number of needed integers x
	int j; // integers that will be summed during loop
	int total = 0; // total of all integers

	cout << "How many integers will be summed? ";
	cin >> x;

	for ( y = 1; y <= x; y++ )
	{
		cout << "\nNumber: ";
		cin >> j;
		total += j;
	}

	cout << "\nThe sum of all " << x << " numbers is: " << total << "\n";

	return 0;
} 
*/
