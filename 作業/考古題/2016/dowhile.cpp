#include<iostream>
using namespace std;

int main()
{
	int factorial=1;
	cout<<"x\tx!\n";
	int i=1;
		
	do
	{
		factorial*=i;
		cout<<i<<"\t"<<factorial<<"\n";
		i++;
		
	}while(i<=5);
	
	cout<<endl;
}
