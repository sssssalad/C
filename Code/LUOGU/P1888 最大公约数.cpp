#include<bits/stdc++.h>
using namespace std;
//反复把一个式子中的除数当作被除数去除余数，直到最后余数等于0。
//最大公约数就是最后那个式子的除数
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int s[3] = { a,b,c };
	sort(s, s + 3);//从小到大排序
	int u, v;
	u = s[0], v = s[2];
	while (v != 0) {
		//求最大公约数
		int tmp = u % v;
		u = v;
		v = tmp;
	}
	cout << s[0] / u << "/" << s[2] / u;
	return 0;
}