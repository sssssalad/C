#include<bits/stdc++.h>
using namespace std;
const int N = 100001;
int A[N], B[N], C[N];
void chen(int A[], int B[], int C[], int v, int t) {
	//�洢ÿһλ�ĳ˻��ͣ������ͳһ�����λ
	C[0] = 0;
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < v; j++) {
			C[i + j] += A[j] * B[i];
		}
	}
	for (int k = 0; k < v + t; k++) {
		if (C[k] > 9) {
			C[k + 1] += C[k] / 10;
			C[k] = C[k] % 10;
		}
	}
}
int main(){
	string a, b;
	cin >> a >> b;
	int m = 0, n = 0;
	for (int i = a.size() - 1; i >= 0; i--) A[m++] = a[i] - '0';
	for (int i = b.size() - 1; i >= 0; i--) B[n++] = b[i] - '0';
	chen(A, B, C, a.size(), b.size());
	int maxl = a.size() + b.size();
	while (C[maxl - 1] == 0) maxl--;//��ֹ���������0 
	//C�������
	if (maxl <= 0) cout << 0;//���Ϊ0�����
	else {
		for (int i =maxl - 1; i >= 0; i--) cout << C[i];
	}
	return 0;
}