#include <bits/stdc++.h>
using namespace std;
long long n, h, m, s, ho, mi;
int main() {
	cin >> n;//����ms��,1s =1000 ����,1min=60s,1h=60min
	//ʱ����
	ho = pow(60, 2) * 1000;//һСʱ�ĺ�����
	mi = 60 * 1000;//һ���ӵĺ�����
	h = n / ho;
	m = (n - h * ho) / mi;
	s = (n - h * ho - m * mi)/ 1000;
	h = h % 24;//ȥ��һ�����Сʱ���õ���ǰʱ���Сʱ��
	cout << setw(2) << setfill('0') << h << ":";
	cout << setw(2) << setfill('0') << m << ":";
	cout << setw(2) << setfill('0') << s;
	//46800999//13:00:00
	//1618708103123//01:08:23
	return 0;
}