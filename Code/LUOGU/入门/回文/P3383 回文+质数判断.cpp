#include<bits/stdc++.h>
using namespace std;
const int N = 100000010;//n��ΧΪ1e8
bool vis[N];//��ʡ�ڴ�
int prime[N], len = 0, a, b;
void serc(int x) {
	memset(vis, 0, N);
	for (int i = 2; i <= x; i++) {
		if (vis[i] == 0) prime[len++] = i;
		for (int j = 0; j < len; j++) {//��i*i��ǰ������i��������
			if (i * prime[j] > x) break;
			vis[i * prime[j]] = 1;
			if (i % prime[j] == 0) break;
		}
	}
}
bool isHW(int num) {//�жϻ�����
	//����num�ĵ���ans���Ƚ�num��ans
	int temp = num, ans = 0;
	while (temp != 0) {
		ans = ans * 10 + temp % 10;
		temp /= 10;
	}
	if (ans == num) return 1;
	else return 0;
}
int main() {
	cin >> a>> b;
	if (b >= 100000000) b = 9999999;
	if (a > b) return 0;
	serc(b);
	//���볤��807B����ʱ682ms���ڴ�98.59MB
	for (int i = 0; i <= len; i++) {
		if (prime[i]>=a && isHW(prime[i]))
			cout << prime[i] << endl;
	}
	return 0;
}
