#include<bits/stdc++.h>//��ɸ������
using namespace std;//vis���洢�����Ƿ���ʹ�
const int N = 100010;//prime���洢����
bool vis[N];//��ʡ�ռ�
int prime[N], L, len = 0, sum = 0, s = 0;
void serc(int x) {
	memset(vis, 0, N);
	prime[len++] = 2;
	for (int i = 3; i <= x; i += 2) {
		if (vis[i] == 0) {
			prime[len++] = i;//������
			for (int j = 2; i * j <= x; j++)
				vis[i * j] = 1;//���б���ɸѡ
		}
	}
}
int main() {
	cin >> L;//���������ֵ
	if (L < 2) s = 0;
	else {
		serc(L);//����0-L��Χ�ڵ���������������prime���飬����Ϊlen
		for (int i = 0; i < len; i++) {
			sum += prime[i];
			if (sum > L) break;
			else {
				s++;//���������������ĸ���
				cout << prime[i] << endl;
			}
		}
	}
	cout << s;//������С��Lʱ�������ĸ���
	return 0;
}