#include<bits/stdc++.h>//��ɸ������
using namespace std;//vis���洢�����Ƿ���ʹ�
const int N = 100010;//prime���洢����
bool vis[N];
int prime[N],n, len = 0;
int serc(int x) {
	if (x < 2) return 0;
	memset(vis, 0, N);
	for (int i = 2; i <= x; i++) {
		if (vis[i] == 0) {
			prime[len++] = i;//������
			for (int j = 2; i * j <= x; j++)//���ܴ�ʱ��j=i��RE
				vis[i * j] = 1;//ֻ���������б���ɸѡ
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

