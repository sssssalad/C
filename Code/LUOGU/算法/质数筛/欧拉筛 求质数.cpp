#include<bits/stdc++.h>//欧拉筛求质数
using namespace std;//vis：存储数字是否访问过
const int N = 100010;//prime：存储素数
int vis[N], prime[N], n, len = 0;
void serc(int x) {
	memset(vis, 0, N);
	for (int i = 2; i <= x; i ++) {
		if (vis[i] == 0) 
			prime[len++] = i;//是素数
		for (int j = 0; j < len; j++) {//用i*i以前（包括i）的素数
			if (i * prime[j] > n) 
				break;//倍增结果超出范围
			vis[i * prime[j]] = 1;
			if (i % prime[j] == 0) 
				break;//让每个合数值被它的最小质因子筛选一次
		}
	}
}
int main() {
	cin >> n;//输入范围
	serc(n);
	cout << len << endl;//[0,n]范围内素数的个数
	for (int i = 0; i < len; i++) cout << prime[i] << " ";
	return 0;
}

