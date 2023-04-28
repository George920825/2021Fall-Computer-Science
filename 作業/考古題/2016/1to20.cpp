#include <iostream>
using namespace std;

int main (void)
{
	int x;
	
	while(x < 20)
	{
		x++;
		cout << x << "	";
		
		if (x % 5 == 0)
		{
			cout << endl;
		}
	}
}
