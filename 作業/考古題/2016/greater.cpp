#include <iostream>
using namespace std;

int main (void)
{
	int count;
	
	cout << "Give me a number: ";
	cin >> count;
	
	cout << ( count > 10 ? "Count is greater than 10." : "Count is less than 10." ) << endl;
	
	/*if (count > 10)
	{
		cout << "Count is greater than 10\n" << count;
	}
	else
	{
		cout << "Count is less than 10.\n" << count;
	}*/
}
