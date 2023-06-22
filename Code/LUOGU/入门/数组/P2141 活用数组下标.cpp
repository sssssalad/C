#include<bits/stdc++.h>
using namespace std;
//思路：数组的下标也可以作为结果运算
const int N = 20020;//测试值<=10000
int n, a[110], sum = 0, b[N], s[N];
int main() {
	cin >> n;
	memset(b, 0, sizeof(s));
	memset(s, 0, sizeof(s));//别忘记初始化
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[a[i]] = 1;
	}
	for (int i = 1; i < n; i++) //输入完成了才能遍历
		for (int j = i + 1; j <= n; j++)
			s[a[i] + a[j]] = 1;
	for (int i = 1; i <= N; i++)//i是a数组2个元素的和且在a数组中
		if(b[i] && s[i]) sum++;
	cout << sum;
	return 0;
}