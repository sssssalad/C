#include<bits/stdc++.h>
using namespace std;
const int N = 100001;
int A[N], B[N], C[N];
int s=1;//差的正负
void sub(int A[], int B[], int C[], int v) {//高精减
	for (int i = 0; i < v; i++){
		if(A[i] < B[i]) {
			A[i + 1]--;
			A[i] += 10;
		}
		C[i] = A[i] - B[i];
	}
}
int main(){
	string a, b;
	cin >> a >> b;
	if ((a < b && a.size() == b.size()) || a.size() < b.size()){
		swap(a, b);
		s = 0;
	}
	//倒序写入数组
	int m = 0, n = 0;
	for (int i = a.size() - 1; i >= 0; i--) A[m++] = a[i] - '0';
	for (int i = b.size() - 1; i >= 0; i--) B[n++] = b[i] - '0';
	int maxl = max(a.size(), b.size());
	sub(A, B, C, maxl);
	if (!s) cout << "-";
	while (C[maxl-1] == 0) maxl--;////防止多输出若干0 
	if (maxl <= 0) cout << 0;//结果为0时的情况
	else {
		for (int i = maxl-1 ; i >= 0; i--) cout <<  C[i];
	}
	return 0;
}