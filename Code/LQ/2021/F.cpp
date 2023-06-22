#include <bits/stdc++.h>
using namespace std;
long long n, h, m, s, ho, mi;
int main() {
	cin >> n;//毫秒ms数,1s =1000 毫秒,1min=60s,1h=60min
	//时分秒
	ho = pow(60, 2) * 1000;//一小时的毫秒数
	mi = 60 * 1000;//一分钟的毫秒数
	h = n / ho;
	m = (n - h * ho) / mi;
	s = (n - h * ho - m * mi)/ 1000;
	h = h % 24;//去除一整天的小时数得到当前时间的小时数
	cout << setw(2) << setfill('0') << h << ":";
	cout << setw(2) << setfill('0') << m << ":";
	cout << setw(2) << setfill('0') << s;
	//46800999//13:00:00
	//1618708103123//01:08:23
	return 0;
}