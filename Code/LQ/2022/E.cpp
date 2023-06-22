#include<bits/stdc++.h>
using namespace std;
vector< pair<int,int> > v;
int n, num=0;
bool flag = 1;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		string a="";
		cin >> a;
		v.push_back(make_pair(a[0], a[a.size() - 1]));
	}
	for (int i = 0; i < v.size(); i++) {
		int b1 = v[i].first, e1 = v[i].second;
		int b2 = v[v.size() - 1].first, e2 = v[v.size() - 1].second;
		if (i == 0) {
			if ((b1 != e2) || (e1 != v[i + 1].first)) flag = 0;
		}
		else if (e1 != v[i + 1].first) flag = 0;
		if (!flag) {
			num ++;
			break;
		}
	}
	return 0;
}