#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int x, y, m1,m2, d;
int serc(vector<int> v,int pos, char x) {
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == x) return i;
	}
	return 0;
}
int main() {
	for (int i = 1; i <= 100; i++) {
		cin >> x;
		v.push_back(x);
	}
	y = serc(v, 0, '2');
	y = serc(v, y, '0');
	y = serc(v, y, '2');
	y = serc(v, y, '3');
	m1 = serc(v, y, '1');
	m1 = serc(v, y, '0') || serc(v, y, '1') || serc(v, y, '2');
	m2 = serc(v, y, '0');
	return 0;
}