#include<bits/stdc++.h>
using namespace std;
const int N = 100010;
int main() {
	int n, a[N], s[N], j = 0, ans;
	cin >> n;
	memset(s, 1, n);
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i <= n-1; i++){
		ans = 1;
		if(j <= n - 1) 
			while(a[j + 1] == a[j++] + 1) ans++;
		s[i] = ans;
	}
	//for (int i = 0; i < n; i++) cout << s[i]<<" ";
	cout << *max_element(s, s + n);
	return 0;
}