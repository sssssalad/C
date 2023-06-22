#include<iostream>
using namespace std;
const float km2yl=62.14;//100公里=62.14英里
const float jl2s = 3.875;

int main()
{
	double a;//每100公里消耗的汽油量（升）
	cin >> a;
	cout << km2yl / (a / jl2s) << "mpg" << endl;
	return 0;
}