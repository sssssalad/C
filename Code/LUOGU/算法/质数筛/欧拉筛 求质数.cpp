#include<bits/stdc++.h>//ŷ��ɸ������
using namespace std;//vis���洢�����Ƿ���ʹ�
const int N = 100010;//prime���洢����
int vis[N], prime[N], n, len = 0;
void serc(int x) {
	memset(vis, 0, N);
	for (int i = 2; i <= x; i ++) {
		if (vis[i] == 0) 
			prime[len++] = i;//������
		for (int j = 0; j < len; j++) {//��i*i��ǰ������i��������
			if (i * prime[j] > n) 
				break;//�������������Χ
			vis[i * prime[j]] = 1;
			if (i % prime[j] == 0) 
				break;//��ÿ������ֵ��������С������ɸѡһ��
		}
	}
}
int main() {
	cin >> n;//���뷶Χ
	serc(n);
	cout << len << endl;//[0,n]��Χ�������ĸ���
	for (int i = 0; i < len; i++) cout << prime[i] << " ";
	return 0;
}

