#include<bits/stdc++.h>
using namespace std;
const int N = 4005;
int n, a[N], sum = 0, i = 1, s, len = 0, m = 0;
int main() {
	cin >> n;
	memset(a, 0, sizeof(a));
	s = n * n;
	for (int i = 1; i <= s; i++) {
		if (sum>=s) break;
		else {
			cin >> a[i];
			sum += a[i];
			len++;
		}
	}
	for (int i = 1; i <= len; i++) {
		//�߽�ֵ��Ϊlen������s������TLE
		for (int j = 1; j <= a[i]; j++){//�������a[i]��1��0
			if (i % 2 == 1) cout << 0;
			else if (i % 2 == 0) cout << 1;
			m++;//��������Ϊi�����ֵ��¼�Ѿ���ӡ�������ֵ�λ��
			if (m % n == 0 && m != s) cout << endl;
		}
	}
	return 0;
}