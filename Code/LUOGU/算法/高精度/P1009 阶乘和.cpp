#include<bits/stdc++.h>
using namespace std;
const int N = 100010;
int n, t = 0;//n���Ϊ50
int A[N], S[N];
void jc(int x){
	//��A[100]�洢�׳˽���ĸ�λ����A[99]�洢ʮλ�����Դ�����
	//���׳˺�100��λ�ô洢ÿһλ��50��λ�ÿ��ܲ���
	for (int i = 100; i >=0; i--) {
		//ѭ�������2��n�����ӵ�x�ɵý׳�
		A[i] = A[i] * x + t;
		t = A[i] / 10;//��λ
		A[i] = A[i] % 10;
	}
	for (int i = 100; i >= 0; i--) {
		//ѭ�������2��n�����ӵ�x�ɵý׳˵ĺ�
		S[i] = S[i] + A[i] + t;
		t = S[i] / 10;
		S[i] = S[i] % 10;
	}
}
int main(){
	cin >> n;
	A[100] = S[100] = 1;
	for (int i = 2; i <= n; i++) jc(i);
	int len = 0;
	for (int i = 0; i <= 100; i++) {
		if (S[i] != 0) {
			len = i;
			break;
		}
	}
	for (int i = len; i <= 100; i++) cout << S[i];
	return 0;
}