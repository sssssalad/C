#include<bits/stdc++.h>
using namespace std;
//多看题目条件！多测试！检查边界值！
int main() {
	string a;
	int n, sum = 0;
	cin >> n;
	cin >> a;
	for (int i = 1; i < n; i++) {
		if (a[i - 1] == 'V' && a[i] == 'K') {
			sum++;
			a[i - 1] = a[i] = 'X';//方便后续计算VK，以免造成干扰
		}
	}
	//VV、KK可以改，KV不可
	for (int i = 0; i < n-1; i++) {//每种情况只能改动一次
		if ((a[i] == 'V' && a[i + 1] == 'V')|| 
			(a[i] == 'K' && a[i + 1] == 'K')){
				sum++;
				break;
		}
	}
	cout << sum;
	return 0;
}