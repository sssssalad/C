#include<bits/stdc++.h>
using namespace std;
int main() {
	//ǰ׺++�Ⱥ�׺++���ȼ���
	int n, a[10][10], i = 1, j = 0, m = 1;
	cin >> n;
	memset(a, 0, sizeof(a));
	while(m <= n * n) {
		while (j < n && !a[i][j + 1]) a[i][++j] = m++;
		while (i < n && !a[i + 1][j]) a[++i][j] = m++;
		while (j > 1 && !a[i][j - 1]) a[i][--j] = m++;
		while (i > 1 && !a[i - 1][j]) a[--i][j] = m++;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << setw(3) << setfill(' ') << a[i][j];
			if (j == n && i < n) cout << endl;
		}
	}
	return 0;
}