#include<bits/stdc++.h>
using namespace std;
double s, v;
int t, n, a, b;
//特殊：整点情况、超过8小时情况，小时和分钟为个位数的情况
int main(){
	cin >> s >> v;
	t = 10 + ceil(s / v);  //需花费的时间(分钟)，向上取整
	n = 8 * 60 + 24 * 60;  //花费时间＜24小时,24小时总共的分钟数
	n = n - t;  //剩下的时间,从前一天0点算起
	if (n >= 24 * 60) n -= 24 * 60; //超过24小时即到第二天,减去24
	a = n / 60;  //出发时
	b = n % 60;  //出发分
	//补0，使得输出形式为HH：MM
	cout << setw(2) << setfill('0') << a << ":"
		<< setw(2) << setfill('0') << b;
	return 0;
}