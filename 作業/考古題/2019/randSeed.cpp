#include <iostream>
#include <cstdlib>
using namespace std;

int main (void)
{
	unsigned seed;
	int n;
	
	cout << "Enter seed: ";
	cin  >> seed;
	srand( seed );
	
	cout << "Throw times: ";
	cin >> n;
	
	for( int counter = 0; counter < n; counter++)
	{
		for( int counter = 0; counter < 3; counter++)
		{
			cout << ( 1 + rand() %6 ) << "	";
		}
		
		cout << "\n";
	}
}
 
