#include<bits/stdc++.h>
using namespace std;
const int N = 3022;
int n, m, a[N], b[N], len = 0, temp, sum = 0;
int main() {
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	cin >> n >> m;//m<=n,�迼������������
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	for (int i = 1; i <= n-m; i++) {
		temp = 0;
		for (int j = i; j < i + m; j++)//ע��߽�ֵ��i��i+1��...,i+m��m+1��
			temp += a[j];
		b[len++] = temp;
	}
	if (n == m) cout << sum;
	else cout << *min_element(b, b + len);
	return 0;
}