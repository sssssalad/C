#include<bits/stdc++.h>
using namespace std;
int main() {
	int q, n, a, b;
	cin >> q;
	string s1, s2;
	cin >> s1;
	for (int i = 0; i < q; i++) {
		cin >> n;
		if (n == 1) {
			cin >> s2;
			s1 = s1 + s2;
			cout << s1;
		}
		else if (n == 2) {
			cin >> a >> b;
			s1 = s1.substr(a, b);
			cout << s1;
		}
		else if (n == 3) {
			cin >> a;
			cin >> s2;
			s1 = s1.substr(0, a) + s2 + s1.substr(a, s1.size());
			cout << s1;
		}
		else if (n == 4) {
			cin >> s2;
			int j = 0, ans = 0;
			while(j < s1.size()) {
				if (s1.substr(j, s2.size()) == s2) {
					cout << j;
					ans = 1;
					break;
				}
				j++;
			}
			if(ans==0) cout << -1;
		}
		if (i < q-1) cout << endl;
	}
	return 0;
}
