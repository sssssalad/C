#include<bits/stdc++.h>
using namespace std;
//ƹ����������һ���ﵽ11�ּ����ϣ��Һ���һ���ֲ���ڵ���2�Ž���һ��
const long long N = 100010;
void func(char s[N],int cnt, int num) {
	int a = 0, b = 0;
	for (int i = 0; i < cnt; i++) {
		if (s[i] == 'W') a++;
		else if (s[i] == 'L') b++;
		if (a>=num || b>=num) {//�ֲ��ʱ��a��b���ܳ���num
			if (a - b <= -2 || a - b >= 2) {
				cout << a << ":" << b << endl;
				a = 0, b = 0;
			}
			else continue;
		}
	}
	cout << a << ":" << b;//�¿��ֻ�û�����һ��
	if (num == 11) cout << endl;
	//21�ȷ������һ�����������һ�п���
}
int main() {
	char ch, s[N];
	int cnt = 0, a = 0, b = 0;
	while (cin>>ch) {
		if (ch == 'E') break;
		else if (ch == 'W' || ch == 'L') 
			s[cnt++] = ch;
	}
	func(s, cnt, 11);
	cout << endl;//���ֱȷ��м���һ��
	func(s, cnt, 21);
	return 0;
}