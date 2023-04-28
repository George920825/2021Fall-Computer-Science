#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "Give me a number: ";
	cin >> x;
	
	if ( x > 0 )
	{
		
		while( x > 0 )
		{
			cout << x % 10;
			x /= 10;
		}
	}
	else
	{
		if ( x == 0)
		{
			cout << x;
		}
		else
		{
			x *= -1;
			cout << "-";
			while( x > 0 )
			{
				cout << x % 10;
				x /= 10;
			}
		}
		
	}
}
