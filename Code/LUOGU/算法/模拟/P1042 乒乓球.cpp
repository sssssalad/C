#include<bits/stdc++.h>
using namespace std;
//乒乓球至少有一方达到11分及以上，且和另一方分差大于等于2才结束一局
const long long N = 100010;
void func(char s[N],int cnt, int num) {
	int a = 0, b = 0;
	for (int i = 0; i < cnt; i++) {
		if (s[i] == 'W') a++;
		else if (s[i] == 'L') b++;
		if (a>=num || b>=num) {//分差不够时，a和b可能超过num
			if (a - b <= -2 || a - b >= 2) {
				cout << a << ":" << b << endl;
				a = 0, b = 0;
			}
			else continue;
		}
	}
	cout << a << ":" << b;//新开局还没比完的一场
	if (num == 11) cout << endl;
	//21比分制最后一场避免输出多一行空行
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
	cout << endl;//两种比分中间间隔一行
	func(s, cnt, 21);
	return 0;
}