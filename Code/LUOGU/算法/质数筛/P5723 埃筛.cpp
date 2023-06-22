#include<bits/stdc++.h>//埃筛求质数
using namespace std;//vis：存储数字是否访问过
const int N = 100010;//prime：存储素数
bool vis[N];//节省空间
int prime[N], L, len = 0, sum = 0, s = 0;
void serc(int x) {
	memset(vis, 0, N);
	prime[len++] = 2;
	for (int i = 3; i <= x; i += 2) {
		if (vis[i] == 0) {
			prime[len++] = i;//是素数
			for (int j = 2; i * j <= x; j++)
				vis[i * j] = 1;//进行倍增筛选
		}
	}
}
int main() {
	cin >> L;//质数和最大值
	if (L < 2) s = 0;
	else {
		serc(L);//查找0-L范围内的所有素数并存入prime数组，长度为len
		for (int i = 0; i < len; i++) {
			sum += prime[i];
			if (sum > L) break;
			else {
				s++;//符合条件的素数的个数
				cout << prime[i] << endl;
			}
		}
	}
	cout << s;//素数和小于L时，素数的个数
	return 0;
}