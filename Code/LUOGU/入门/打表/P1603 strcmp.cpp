#include<bits/stdc++.h>
using namespace std;
int main() {
	char a[26][10] = { "one", "two", "three", "four" ,"five" ,"six", "seven",
		"eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen",
		"fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty",
		"a", "both", "another", "first", "second", "third" };
	int b[26] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,1,2,1,1,2,3 };
	char s[100];
	int c[26], len = 0, ans[26], flag = 0;
	for (int i = 0; i < 26; i++) 
		c[i] = (b[i]*b[i]) % 100;
	for (int i = 0; i < 6; i++) {
		cin >> s;
		for (int j = 0; j < 26; j++) {
			if (strcmp(s, a[j]) == 0) {
				ans[len++] = c[j];
				break;//继续输入
			}
		}
	}
	sort(ans, ans + len);//将ans数组从小到大排序
	for (int i = 0; i < len; i++) {
		if (flag)//不是第一位
			cout << setw(2) << setfill('0') << ans[i];
		else {
			if (ans[i]) {
				cout << ans[i];
				flag = 1;
			}
		}
	}
	if (len == 0) cout << 0;
	return 0;
}