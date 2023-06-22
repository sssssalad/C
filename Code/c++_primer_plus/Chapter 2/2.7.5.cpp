#include<iostream>
using namespace std;
double func(double);
int main()
{
	double n;
	cout << "Please enter a Celsius value: ";
	cin >> n;
	cout << n << " degree Celsius is " << func(n) << " degrees Fahrenheit."<<endl;
	return 0;
}

double func(double i)
{
	return 1.8 * i + 32.0;
}