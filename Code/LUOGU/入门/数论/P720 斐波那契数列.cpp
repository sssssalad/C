#include<bits/stdc++.h>
using namespace std;
//斐波那契数列：从第3项开始，每一项都等于前两项之和
//F(0)=0，F(1)=1
//F(n)=F(n - 1)+F(n - 2)（n ≥ 2，n ∈ N*）
int n;
double ans;
int func() {
	int a = 0, b = 1, c;
	if (n == 0) return 0;
	else if (n == 1) return 1;
	for (int i = 2; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
int digui(int i) {
	if (i == 0) return 0;
	else if (i == 1) return 1;
	return digui(i - 1) + digui(i - 2);
}
int main() {
	cin >> n;
	//ans=func();//非递归方法
	ans = digui(n);//递归方法
	cout << fixed << setprecision(2) << ans ;
	return 0;
}