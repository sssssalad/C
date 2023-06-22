#include<bits/stdc++.h>
using namespace std;
int n, m, x, y, r, z, sum = 0;
int a[505][505],b[505][505];
int main() {
	cin >> n >> m;
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			a[i][j] = ++sum;
	for (int num = 1; num <= m; num++) {
		x = y = r = z = 0;
		cin >> x >> y >> r >> z;
		for (int i = 0; i < 2 * r + 1; i++) {
			//一种思路不行换另一种，x-r到x+r没有1-len简单
			for (int j = 0; j < 2 * r + 1; j++) {
				if (z == 0) b[x - r + i][y - r + j] = a[x + r - j][y - r + i];
				else if (z == 1) b[x - r + i][y - r + j] = a[x - r + j][y + r - i]; 
			}
		}
		for (int i = x - r; i <= x + r; i++)
			for (int j = y - r; j <= y + r; j++)
				a[i][j] = b[i][j];//改变原矩阵，避免后续操作出错
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) 
			cout << a[i][j] << " ";
		if (i < n) cout << endl;
	}
	return 0;
}