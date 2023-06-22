#include<bits/stdc++.h>
using namespace std;
const int N = 10010;
int A[N], B[N], C[N];
int add(int A[], int B[], int C[], int v,int w) {
	C[0] = 0;
	for (int i = 0; i < v; i++) {
		C[i] += A[i] + B[i];
		C[i + 1] = C[i] / w;
		C[i] = C[i] % w;
	}
	if (C[v]) v++;//最高位进位为1时，最高位进位
	return v;
}
int main() {
	int num, c, maxl;
	cin >> num;
	string a, b;
	cin >> a >> b;
	int m = 0, n = 0;
	//'A'-'0'=17
	for (int i = a.size() - 1; i >= 0; i--) {
		if (a[i] >= '0' && a[i] <= '9') A[m++] = a[i] - '0';
		else if (a[i] >= 'A' && a[i] <= 'Z') A[m++] = a[i] - '0' - 7;
	}
	for (int i = b.size() - 1; i >= 0; i--) {
		if (b[i] >= '0' && b[i] <= '9') B[n++] = b[i] - '0';
		else if (b[i] >= 'A' && b[i] <= 'Z') B[n++] = b[i] - '0'-7;
	}
	maxl = max(a.size(), b.size());
	c = add(A, B, C, maxl,num);
	while (C[c - 1] == 0) c--;//防止多输出若干0 
	if (c <= 0) cout << 0;//结果为0的情况
	else {
		for (int i = c - 1; i >= 0; i--) {
			if (C[i] >= 0 && C[i] <= 9) cout << C[i];
			else cout << char(C[i] + 'A' - 10);
		}
	}
	return 0;
}