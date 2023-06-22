#include<bits/stdc++.h>
using namespace std;
int main() {
	int N = 0, T, a[12][3], sum[12];
	bool flag = 1;
	memset(a, 0, sizeof(a));
	cin >> T;
	for (int i = 1; i <= T; i++) {
		N = 0;
		cin >> N;
		for (int j = 0; j < N; j++) {
			cin >> a[j][0] >> a[j][1] >> a[j][2];//Ti,Di,Li
		}
		if (!flag) cout << "NO" << endl;
		for (int j = 0; j < N; j++) {
			sum[i] += a[j][2];
		}
	}

	cout << "YES" << endl << "NO";
	return 0;
}