#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (void)
{
	srand( time(0) );
	
	
	cout << ( 10 + rand() % 91);
}
