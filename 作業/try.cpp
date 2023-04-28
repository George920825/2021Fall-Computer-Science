#include <iostream>
using namespace std;

double multiply(int, int);

int main()
{
	for(int x = 1; x <= 10; x++)
	{
		cout<< multiply(x, x+1)<< " ";
	}
	
	cout<<endl;
}

double multiply(int x, int y)
{
	return x*y;
}
