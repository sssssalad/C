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
		cout << n << "��������";
	else cout << n << "�겻������";
	return 0;
}