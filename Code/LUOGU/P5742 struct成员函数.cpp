#include<bits/stdc++.h>
using namespace std;
//��Ҫ�������븴�ӣ���ע�⸳ֵʱ==,��������TLE,����break
int n, sum[1000], ac, bc, cc, sumc, len = 0;
struct stu {
	int s;int a;int b;int z;
	int rtab(stu ans) {//��Ա����
		return ans.a + ans.b;
	}
};
int pd(stu ans) {
	if (ans.rtab(ans) > 140 && ans.z >= 800) return 1;
	return 0;
}
int main() {
	cin >> n;
	stu s[1000];
	for (int i = 0; i < n; i++) {
		cin >> s[i].s >> s[i].a >> s[i].b ;
		s[i].z = s[i].a * 7 + s[i].b * 3;
	}
	for (int i = 0; i < n; i++) {
		if (i > 0) cout << endl;
		if (pd(s[i])==1) cout << "Excellent";
		else cout << "Not excellent";
	}
	return 0;
}