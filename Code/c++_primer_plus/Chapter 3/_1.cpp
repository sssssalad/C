#include<iostream>
using namespace std;
const int i = 10;
int main()
{
	float tall;//��Ҫָ��Ϊfloat���ͣ���Ȼint��������1.60ʱ��ȡֵΪ1
	cout << "Please input your height(for m):" << "____\b\b\b\b" ;
	cin >> tall;
	cout << "dm��" << i * tall << "\n" << "cm:" << i * i * tall << endl;
	return 0;
}