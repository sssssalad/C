#include<bits/stdc++.h>//埃筛求质数
using namespace std;//vis：存储数字是否访问过
const int N = 100010;//prime：存储素数
bool vis[N];
int prime[N],n, len = 0;
int serc(int x) {
	if (x < 2) return 0;
	memset(vis, 0, N);
	for (int i = 2; i <= x; i++) {
		if (vis[i] == 0) {
			prime[len++] = i;//是素数
			for (int j = 2; i * j <= x; j++)//数很大时设j=i会RE
				vis[i * j] = 1;//只对素数进行倍增筛选
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

