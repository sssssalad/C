#include<bits/stdc++.h>
using namespace std;
//多看题目条件！多测试！检查边界值！不要把问题想复杂！
int main() {
	string s;
	cin >> s;
	int num = 0, cns = 0, x, siz;
	char p = '0';
	siz = s.size();
	for (int i = 0; i < siz; i++) {
		if (s[i] >= '0' && s[i] <= '9') num++;
		else {p = s[i];break;}
	}//num记录符号所在位置
	x = num;
	num -= 1;
	while (s[num] == '0' && num>0) num--;//去掉第1个数高位多余0,当只有一个0时保留
	for (int i = num; i >= 0; i--)//输出第一个数
		cout << s[i];
	if (p == '0') return 0;
	else {
		if (p == '%') {cout << p;return 0;}
		else cout << p;
	}
	while (x<siz-1-1 && s[x + 1] == '0') x++;//去掉第2个数低位多余0,只有一位0时候保留
	while (siz>x+1+1 && s[siz-1] == '0') siz--;//去掉第2个数高位多余0
	for (int i = siz-1; i > x; i--) 
		cout << s[i];
	return 0;
}