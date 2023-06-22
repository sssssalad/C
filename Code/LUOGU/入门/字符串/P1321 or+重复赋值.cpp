#include<bits/stdc++.h>
using namespace std;
//多看题目条件！多测试！检查边界值！不要把问题想复杂！
int main() {
	string a;
	int m = 0, w = 0;
	cin >> a;
	for (int i = 0; i < a.size(); i++) {
		if (a.size() >= 3 && i <= a.size()-3 
			&&(a[i] =='b'|| a[i + 1] =='o'|| a[i + 2] == 'y')){
			//输入boy时i=0满足，i=1时候a[i]=='o',不满足
			m++;
		}
		if (a.size() >=4 && i <= a.size()-4 
			&&(a[i] == 'g' || a[i + 1] == 'i' 
			|| a[i + 2] == 'r'|| a[i+3] == 'l')){
			w++;
		}
	}
	cout << m << endl << w;
	return 0;
}