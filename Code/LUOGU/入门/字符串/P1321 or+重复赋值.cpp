#include<bits/stdc++.h>
using namespace std;
//�࿴��Ŀ����������ԣ����߽�ֵ����Ҫ�������븴�ӣ�
int main() {
	string a;
	int m = 0, w = 0;
	cin >> a;
	for (int i = 0; i < a.size(); i++) {
		if (a.size() >= 3 && i <= a.size()-3 
			&&(a[i] =='b'|| a[i + 1] =='o'|| a[i + 2] == 'y')){
			//����boyʱi=0���㣬i=1ʱ��a[i]=='o',������
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