#include<bits/stdc++.h>
using namespace std;
//�࿴��Ŀ����������ԣ����߽�ֵ��
int main() {
	string a;
	int n, sum = 0;
	cin >> n;
	cin >> a;
	for (int i = 1; i < n; i++) {
		if (a[i - 1] == 'V' && a[i] == 'K') {
			sum++;
			a[i - 1] = a[i] = 'X';//�����������VK��������ɸ���
		}
	}
	//VV��KK���Ըģ�KV����
	for (int i = 0; i < n-1; i++) {//ÿ�����ֻ�ܸĶ�һ��
		if ((a[i] == 'V' && a[i + 1] == 'V')|| 
			(a[i] == 'K' && a[i + 1] == 'K')){
				sum++;
				break;
		}
	}
	cout << sum;
	return 0;
}