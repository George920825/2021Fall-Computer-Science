#include <iostream>
using namespace std;

int main()
{
	int counter = 2;
	
	switch ( counter%2 )
	{
		case 0:
			cout << "An even integer.";
			break;
		
		case 1:
			cout << "An odd integer.";
			break;
	}
}
