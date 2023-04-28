#include <iostream>
using namespace std;

int main (void)
{
	for(int count = 1, sum = 0; count <= 99; count += 2)
	{
		sum = sum + count;
		
		if(count == 99)
		{
			cout << sum << endl;
			
			return 0;
		}
	} 
}
