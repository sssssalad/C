#include<bits/stdc++.h>
using namespace std;
//˼·��������±�Ҳ������Ϊ�������
const int N = 20020;//����ֵ<=10000
int n, a[110], sum = 0, b[N], s[N];
int main() {
	cin >> n;
	memset(b, 0, sizeof(s));
	memset(s, 0, sizeof(s));//�����ǳ�ʼ��
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[a[i]] = 1;
	}
	for (int i = 1; i < n; i++) //��������˲��ܱ���
		for (int j = i + 1; j <= n; j++)
			s[a[i] + a[j]] = 1;
	for (int i = 1; i <= N; i++)//i��a����2��Ԫ�صĺ�����a������
		if(b[i] && s[i]) sum++;
	cout << sum;
	return 0;
}