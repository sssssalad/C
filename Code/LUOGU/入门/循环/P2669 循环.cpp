#include<bits/stdc++.h>
using namespace std;
int main() {
	int k, s = 1, sum = 1;
	cin >> k;//天数
	int n = 1;//第n个阶段，每天发n个金币
	for (int j = 1; j <= n; j++) {
		n++;
		s += n;//第n个阶段一共的天数
		sum += pow(n, 2);//第n个阶段总工资
		if (s >= k) {
			sum -= (s - k) * n;
			break;
		}
	}
	cout << sum;
}