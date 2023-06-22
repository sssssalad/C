#include<bits/stdc++.h>
//细心，每个条件打对，多测试
using namespace std;
const int N = 12;
int n, m;
char a[N][N], b[N][N], c[N][N];
bool isEqual(char a[N][N], char b[N][N]) {
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (a[i][j] != b[i][j]) return 0;
	return 1;
}
bool t1(char a[N][N]) {
	char s[N][N];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			s[i][j] = a[n - j + 1][i];
	return isEqual(s, b);
}
bool t2(char a[N][N]) {
	char s[N][N];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			s[i][j] = a[n - i + 1][n - j + 1];
	return isEqual(s, b);
}
bool t3(char a[N][N]) {
	char s[N][N];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			s[i][j] = a[j][n - i + 1];
	return isEqual(s, b);
}
bool t4(char a[N][N]) {
	char s[N][N];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			s[i][j] = a[i][n - j + 1];
	return isEqual(s, b);
}
bool t5(char a[N][N]) {
	char s[N][N];
	for (int i = 1; i <= n; i++)//先做第4个操作
		for (int j = 1; j <= n; j++)
			s[i][j] = a[i][n - j + 1];
	return t1(s) || t2(s) || t3(s);
}
bool t6(char a[N][N]) {
	return isEqual(a, b);
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> b[i][j];
	if (t1(a)) cout << 1;
	else if (t2(a)) cout << 2;
	else if (t3(a)) cout << 3;
	else if (t4(a)) cout << 4;
	else if (t5(a)) cout << 5;
	else if (t6(a)) cout << 6;
	else cout << 7;
	return 0;
}