#include<bits/stdc++.h>
using namespace std;
const int N = 100010;
int n, t = 0;//n最大为50
int A[N], S[N];
void jc(int x){
	//用A[100]存储阶乘结果的个位数，A[99]存储十位数，以此类推
	//给阶乘和100个位置存储每一位，50个位置可能不够
	for (int i = 100; i >=0; i--) {
		//循环输入从2到n逐渐增加的x可得阶乘
		A[i] = A[i] * x + t;
		t = A[i] / 10;//进位
		A[i] = A[i] % 10;
	}
	for (int i = 100; i >= 0; i--) {
		//循环输入从2到n逐渐增加的x可得阶乘的和
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