#include<bits/stdc++.h>
using namespace std;
//��Ҫ�������븴�ӣ���ע�⸳ֵʱ==,��������TLE,����break
int serc(int x) {
	if (x < 2) return 0;
	for (int i = 2; i <= x / 2; i++)
		if (x % i == 0) return 0;
	return 1;
}
int main() {
	int n, i = 4;
	cin >> n;
	while (i <= n) {
		if (i != 4) cout << endl;//�ǵ�һ��
		cout << i << "=";
		for (int j = 2; j < i; j++)
			if (serc(j) && serc(i-j)) {
				//��������for��������������֮��Ϊi������
				cout << j << "+" << i - j;
				break;
			}
		i += 2;
	}
	return 0;
}