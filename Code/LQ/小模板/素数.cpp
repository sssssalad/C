#include<bits/stdc++.h>
using namespace std;
int serc(int x) {
	if (x < 2) return 0;
	for (int i = 2; i <= x / 2; i++)
		if (x % i == 0) return 0;
	return 1;
}
int main() {
	int x;
	cin >> x;
	if (serc(x)) cout << x << "������";
	else cout << x << "��������";
	return 0;
}