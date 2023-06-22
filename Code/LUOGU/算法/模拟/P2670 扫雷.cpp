#include<bits/stdc++.h>
using namespace std;
int main() {
	char a[105][105], b[105][105];
	memset(b, '0', sizeof(b));
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
			if (a[i][j] == '*') {
				if (i > 1 && j > 1) b[i - 1][j - 1] ++;
				if (i > 1) b[i - 1][j] ++;
				if (i > 1 && j < m) b[i - 1][j + 1] ++;
				if (j > 1) b[i][j - 1]++;
				if (j < m) b[i][j + 1]++;
				if (i < n && j > 1) b[i + 1][j - 1]++;
				if (i < n) b[i + 1][j]++;
				if (i < n && j < m) b[i + 1][j + 1]++;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i][j] == '*') cout << a[i][j];
			else cout << b[i][j];
		}
		if(i!=n) cout << endl;
	}
	return 0;
}