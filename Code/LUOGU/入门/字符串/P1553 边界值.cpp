#include<bits/stdc++.h>
using namespace std;
//�࿴��Ŀ����������ԣ����߽�ֵ����Ҫ�������븴�ӣ�
int main() {
	string s;
	cin >> s;
	int num = 0, cns = 0, x, siz;
	char p = '0';
	siz = s.size();
	for (int i = 0; i < siz; i++) {
		if (s[i] >= '0' && s[i] <= '9') num++;
		else {p = s[i];break;}
	}//num��¼��������λ��
	x = num;
	num -= 1;
	while (s[num] == '0' && num>0) num--;//ȥ����1������λ����0,��ֻ��һ��0ʱ����
	for (int i = num; i >= 0; i--)//�����һ����
		cout << s[i];
	if (p == '0') return 0;
	else {
		if (p == '%') {cout << p;return 0;}
		else cout << p;
	}
	while (x<siz-1-1 && s[x + 1] == '0') x++;//ȥ����2������λ����0,ֻ��һλ0ʱ����
	while (siz>x+1+1 && s[siz-1] == '0') siz--;//ȥ����2������λ����0
	for (int i = siz-1; i > x; i--) 
		cout << s[i];
	return 0;
}