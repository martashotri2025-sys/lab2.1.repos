// lab2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using  namespace std;

int main()
{
	double x;
	double y;
	double z1;
	//double z2;
	double z3;

	cout << "x= ";
	cin >> x;
	cout << "y= ";
	cin >> y;

	z1 = pow(cos(x), 4) + pow(sin(y), 2) + 0.25 * pow(sin(2 * x), 2) - 1;
	//z2 = sin(y + x) * sin(y - x);
	z3 = x+y;

	cout << "z1= " << z1 << endl;
    cout << "z2= " << z2 << endl;
	cout << "z3= " << z3 << endl;



	return 0;
	
	


}

