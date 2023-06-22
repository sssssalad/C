#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, temp, ans=0;
	cin >> n;
	temp = n;
	while (temp) {
		ans = ans * 10 + temp % 10;
		temp = temp / 10;
	}
	cout << ans;
	return 0;
}