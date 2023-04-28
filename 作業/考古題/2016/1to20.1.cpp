#include <iostream>
using namespace std;

int main (void)
{
	for(int x; x <= 20; x++)
	{
		if(x != 0)
		{
			cout << x << "	";
			
			if (x % 5 == 0)
			{
				cout << endl;
			}	
		}
	}
}
