#include<bits/stdc++.h>
using namespace std;
//������һ��ʽ���еĳ�������������ȥ��������ֱ�������������0��
//���Լ����������Ǹ�ʽ�ӵĳ���
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int s[3] = { a,b,c };
	sort(s, s + 3);//��С��������
	int u, v;
	u = s[0], v = s[2];
	while (v != 0) {
		//�����Լ��
		int tmp = u % v;
		u = v;
		v = tmp;
	}
	cout << s[0] / u << "/" << s[2] / u;
	return 0;
}