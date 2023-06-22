#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, x, s = 0, a, b;
	cin >> n >> x;
	for (int i = 1; i <= n; i++) {
		//i可能有很多个位数，要每个位上的数都参与循环
		a = i;
		while (a != 0) {
			//while循环是条件满足时一直执行
			//if语句当条件满足时只执行一次
			b = a % 10;
			a = a / 10;
			if (b == x) s++;
		}
	}
	cout << s;
	return 0;
}