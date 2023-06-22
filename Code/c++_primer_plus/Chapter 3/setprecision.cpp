#include<iostream>
#include <iomanip>//包含setprecision的头文件

using namespace std;
int main()
{
	unsigned int n;
	float t, yl;
	//t为饮料总毫升数，yl为n个人分的的毫升数
	cin >> t >> n;
	yl = t / n;
	cout << fixed << setprecision(2) << yl << endl;//取小数点后两位
	cout << 2 * n;
	return 0;
}
