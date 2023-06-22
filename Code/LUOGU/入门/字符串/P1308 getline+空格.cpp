#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
string turn(string a) {
	for (int i = 0; i < a.size(); i++) 
		if (a[i] >= 'A' && a[i] <= 'Z')
			a[i] = a[i] + 32;
	return a;
}
int main() {
	string a, b;
	int  num = 0, s[N], len = 0;
	memset(s, 0, sizeof(s));
	cin >> a;//保留了字符串最后一位换行符在输入流中
	cin.get();
	getline(cin, b);//getline不保存空格
	a = ' ' + turn(a) + ' ';//只有单词才算
	b = ' ' + turn(b) + ' ';
	for (int j = 0; j < b.size();j++) {
		if (b.substr(j, a.size()) == a) {
				s[len++] = j;
		}
	}
	if (len > 0) cout << len << " " << s[0];
	else if (len == 0) cout << -1;
	return 0;
}