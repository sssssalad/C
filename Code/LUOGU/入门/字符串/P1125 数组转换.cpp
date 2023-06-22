#include<bits/stdc++.h>
//细心，每个条件打对，多测试
using namespace std;
int serc(int x) {
	if (x < 2) return 0;
	for (int i = 2; i <= x/2; i++) 
		if (x % i == 0) return  0;
	return 1;
}
int main() {
	string a;
	int b[27], x, maxn, minn;
	cin >> a;
	memset(b, 0, sizeof(b));
	for (int i = 0; i < a.size(); i++) {
		b[a[i] - 'a']++;
	}
	minn = b[a[0] - 'a'];
	for (int i = 1; i < a.size(); i++) {
		if (b[a[i] - 'a'] <b[a[i-1]-'a']) {
			minn = b[a[i] - 'a'];
		}
	}
	maxn = *max_element(b, b + 27);
	x = maxn - minn;
	//cout << maxn << " " << minn << endl;
	if (serc(x)) cout << "Lucky Word" << endl << x;
	else cout << "No Answer" << endl << 0;
	return 0;
}