#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, x, s = 0, a, b;
	cin >> n >> x;
	for (int i = 1; i <= n; i++) {
		//i�����кܶ��λ����Ҫÿ��λ�ϵ���������ѭ��
		a = i;
		while (a != 0) {
			//whileѭ������������ʱһֱִ��
			//if��䵱��������ʱִֻ��һ��
			b = a % 10;
			a = a / 10;
			if (b == x) s++;
		}
	}
	cout << s;
	return 0;
}