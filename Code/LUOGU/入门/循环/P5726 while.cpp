#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, x, k=1, s, sum;
	cin >> n;
	s = n / 52;
	while (1) {
		for (int x = 100; x >= 1; x--) {
			//x尽量大
			sum = 7 * x + 21 * k;
			if (sum == s) {
				cout << x << endl << k;
				return 0;
			}
		}
		k++;//k尽量小
	}
	return 0;
}