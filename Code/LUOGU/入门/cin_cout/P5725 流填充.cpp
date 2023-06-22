#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m = 1, a = 1;
	cin >> n;
	for (int i = 1; i <= n * n; i++) {
		cout << setw(2) << setfill('0') << i;
		if (i % n == 0) cout << endl;
	}
	cout << endl;
	while (m <= n) {
		for (int i = 1; i <=n - m; i++)
			cout << "  ";
		for (int i = 1; i <=m; i++) {
			cout << setw(2) << setfill('0') << a;
			a++;
		}
		cout << endl;
		m++; 
	}
	return 0;
}