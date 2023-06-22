#include<iostream>
using namespace std;

const int a = 24;
const int b = 60;

int main() {
	long i;
	int days, hours ,minutes,seconds;

	cout << "Enter the number of seconds: ";
	cin >> i;

	days = i / (a * pow(b, 2));
	hours = (i - days * a * pow(b, 2)) / pow(b, 2);
	minutes = (i - days * a * pow(b, 2) - hours * pow(b, 2)) / b;
	seconds = i - days * a * pow(b, 2) - hours * pow(b, 2) - minutes * b;
	cout <<i<<" seconds = "
		<< days << " days, " 
		<< hours << " hours, " 
		<< minutes << " minutes, " 
		<< seconds <<" seconds." << endl;

	return 0;
}