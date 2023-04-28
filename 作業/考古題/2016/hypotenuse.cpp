#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	double side1, side2;
	
	cout << "Enter 2 sides of right triangle: ";
	cin >> side1 >> side2;
	
	cout << "Hypotenuse: "<< sqrt(side1*side1 + side2*side2) << endl;
}
