#include<bits/stdc++.h>
using namespace std;
bool rn(int year) {
	if ((year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0))
		return true;
	return false;
}
int main() {
	int n;
	cin >> n;
	if (rn(n))
		cout << n << "年是闰年";
	else cout << n << "年不是闰年";
	return 0;
}