#include<bits/stdc++.h>
using namespace std;
const int T = 5010;
int n, A[T][T];//n<=5000
int len = 1;//����ӵķ�������ά��

void walk(int k) {
	for (int i = 0; i < len; i++) {
		//�ӵ�k-1���k-2��̨�׵���k��̨�׶�ֻ��һ�ַ���
		//A[k][]Ϊ����n�����ݵķ�����
		A[k][i] = A[k - 1][i] + A[k - 2][i];
	}
	for (int i = 0; i < len; i++) {
		//����ʡ�Ե�len��ѭ������ʹ�ý�λ�޷���Ӧ���
		if (A[k][i] > 9) {
			//��λ��ʹ�÷���������9ʱҲ�ɶ�Ӧ���
			A[k][i + 1] += A[k][i] / 10;
			A[k][i] = A[k][i] % 10;
			if (A[k][len]) len++;
		}
	}
}
int main() {
	cin >> n;
	A[1][0] = 1;//NΪ1ֻ����һ����ֻ��һ�ַ���
	A[2][0] = 2;//NΪ2ʱ��2�ַ�����һ��1+1��һ��2
	for (int i = 3; i <= n; i++) walk(i);
	for (int j = len-1; j >= 0; j--) cout << A[n][j];
	return 0;
}