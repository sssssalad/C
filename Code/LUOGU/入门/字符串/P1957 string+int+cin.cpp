#include<bits/stdc++.h>
using namespace std;
int todo(int s, int a, int b) {//执行+-*
	int ans = 0;
	if (s == 1) ans = a + b;
	else if (s == 2) ans = a - b;
	else if (s == 3) ans = a * b;
	return ans;
}
int cns(int x) {//计算数值的位数
	int cn = 1;
	if (x < 0) { cn++; x = -x;}
	while (x) {
		x = x / 10;
		if (x != 0) cn++;
	}
	return cn;
}
int turn(string a) {//字符串→数字
	int ans = 0;
	for (int i = 0; i < a.size(); i++)
		ans = ans * 10 + a[i] - '0';
	return ans;	
}
int main() {
	int n, i = 0, s = 0, x, y, z;
	char ch;
	string sa, sb;
	cin >> n;
	for (int i = 1; i <= n;i++) {
		cin >> ch >> sa >> sb;
		if (ch == 'a')  s = 1;
		else if (ch == 'b')  s = 2;
		else if (ch == 'c')  s = 3;
		else if (ch >= '0' && ch <= '9') sa = ch + sa;//防止sa的最高位被吞掉
		x = turn(sa), y = turn(sb);
		cout << x;
		if (s == 1) cout << '+';
		else if (s == 2) cout << '-';
		else if (s == 3) cout << '*';
		z = todo(s,x,y);
		cout << y << '=' << z << endl << cns(x) + cns(y) + cns(z) + 2;
		if (i < n) cout << endl;//避免多输出空行爆0
	}
	return 0;
}