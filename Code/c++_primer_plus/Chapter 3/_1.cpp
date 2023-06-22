#include<iostream>
using namespace std;
const int i = 10;
int main()
{
	float tall;//需要指定为float类型，不然int类型输入1.60时会取值为1
	cout << "Please input your height(for m):" << "____\b\b\b\b" ;
	cin >> tall;
	cout << "dm：" << i * tall << "\n" << "cm:" << i * i * tall << endl;
	return 0;
}