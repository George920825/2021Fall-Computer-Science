#include <iostream>
#include <iomanip>
using namespace std;

int main (void)
{
	int count;
	
	cout << "Give me a number: ";
	cin >> count;
	
	cout << boolalpha ;
	
	cout << ( count > 10 ? (count > 10) : (count > 10) ) << endl;
	
	/*if (count > 10)
	{
		cout << "Count is greater than 10\n";
		cout << boolalpha << (count > 10);
	}
	else
	{
		cout << "Count is less than 10.\n";
		cout << boolalpha << (count > 10);
	}*/
}
