// Name : Angel E Hernandez
// Date : April 17
// CIS 1202.800
// Project name : Templates

#include <string>
# include<iostream>
using namespace std;

// define a function half, accepts a single argument and return 
// value of the same type

double half(double num)
{
	return num / 2.0;
}

// define and overleaded function for int type
int half(int num)
{
	return static_cast<int> (round(num / 2.0));
}


int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	
	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	system("pause");
	return 0;
}