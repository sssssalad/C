#include<bits/stdc++.h>
using namespace std;
const int T = 5010;
int n, A[T][T];//n<=5000
int len = 1;//需相加的方法数的维度

void walk(int k) {
	for (int i = 0; i < len; i++) {
		//从第k-1或第k-2的台阶到第k个台阶都只有一种方法
		//A[k][]为到第n个阶梯的方法数
		A[k][i] = A[k - 1][i] + A[k - 2][i];
	}
	for (int i = 0; i < len; i++) {
		//不可省略到len的循环，会使得进位无法对应相加
		if (A[k][i] > 9) {
			//进位，使得方法数超过9时也可对应相加
			A[k][i + 1] += A[k][i] / 10;
			A[k][i] = A[k][i] % 10;
			if (A[k][len]) len++;
		}
	}
}
int main() {
	cin >> n;
	A[1][0] = 1;//N为1只用走一步，只有一种方法
	A[2][0] = 2;//N为2时有2种方法，一种1+1，一种2
	for (int i = 3; i <= n; i++) walk(i);
	for (int j = len-1; j >= 0; j--) cout << A[n][j];
	return 0;
}