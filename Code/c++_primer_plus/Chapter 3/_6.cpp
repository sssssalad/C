#include<iostream>
using namespace std;
const float km2yl=62.14;//100����=62.14Ӣ��
const float jl2s = 3.875;

int main()
{
	double a;//ÿ100�������ĵ�������������
	cin >> a;
	cout << km2yl / (a / jl2s) << "mpg" << endl;
	return 0;
}