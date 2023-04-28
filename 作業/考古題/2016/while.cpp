#include<iostream>

using namespace std;
int main()
{
	int factorial=1;
	cout<<"x\tx!\n";
	int i=1;
	while(i<=5)
	{
		factorial*=i;
		cout<<i<<"\t"<<factorial<<"\n";
		i++;
	}
	cout<<endl;
}

