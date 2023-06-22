#include<bits/stdc++.h>
using namespace std;
//不要把问题想复杂！！注意赋值时==,尽量避免TLE,谨慎break
int serc(int x) {
	if (x < 2) return 0;
	for (int i = 2; i <= x / 2; i++)
		if (x % i == 0) return 0;
	return 1;
}
int main() {
	int n, i = 4;
	cin >> n;
	while (i <= n) {
		if (i != 4) cout << endl;//非第一行
		cout << i << "=";
		for (int j = 2; j < i; j++)
			if (serc(j) && serc(i-j)) {
				//不设两个for，利用两个加数之和为i的性质
				cout << j << "+" << i - j;
				break;
			}
		i += 2;
	}
	return 0;
}