#include<bits/stdc++.h>
using namespace std;
int n, minn, maxn;
vector< pair<int, int> > v;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		int temp1 = a / b, temp2 = a / (b + 1) + 1;
		v.push_back(make_pair(temp2, temp1));
	}
	minn = v[0].first, maxn = v[0].second;
	for (int i = 0; i < n - 1; i++) {
		if (v[i + 1].first > v[i].first) {
			minn = v[i + 1].first;
		}
		if (v[i + 1].second < v[i].second) {
			maxn = v[i + 1].second;
		}
	}
	cout << minn << " " << maxn;
	return 0;
}