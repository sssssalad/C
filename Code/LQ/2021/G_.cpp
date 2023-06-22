#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, a[105];
	set<long long> st;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		st.insert(a[i]);//将每个砝码本身重量加入集合
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			st.insert(a[i] - a[j]);
			st.insert(a[i] + a[j]);
		}
	}
	cout << st.size();
	return 0;
}