#include<bits/stdc++.h>
using namespace std;
//不要把问题想复杂！！注意赋值时==
int jc(int n,int i) {
	if (n == 1) return i;
	else if (n > 1) {
		i = i * n;
		n--;
		}
	jc(n,i);
}
int main() {
	int n, sum = 0, i = 1;
	cin >> n;
	sum = jc(n,i);
	cout << sum;
	return 0;
}