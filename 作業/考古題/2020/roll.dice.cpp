#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDice (int);

int main()
{
	int n = 1;
	
	cout << rollDice( n );
}

int rollDice (int x)
{
	int total = 0;
	
	for ( int t = 0; t < x; t++)
	{
		srand( time( 0 ) );
		
		//int dice1 = 1 + rand() % 6;
		//int dice2 = 1 + rand() % 6;
		
		//total += ( dice1 + dice2);
		
		total += ( 2 + rand() % 6 + rand() % 6 );
	}
	
	return total;
}
