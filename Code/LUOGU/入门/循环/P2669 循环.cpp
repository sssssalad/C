#include<bits/stdc++.h>
using namespace std;
int main() {
	int k, s = 1, sum = 1;
	cin >> k;//����
	int n = 1;//��n���׶Σ�ÿ�췢n�����
	for (int j = 1; j <= n; j++) {
		n++;
		s += n;//��n���׶�һ��������
		sum += pow(n, 2);//��n���׶��ܹ���
		if (s >= k) {
			sum -= (s - k) * n;
			break;
		}
	}
	cout << sum;
}