#include<bits/stdc++.h>
using namespace std;
bool isHW(int num) {
	int temp = num, ans = 0;
	while (temp != 0) {
		ans = ans * 10 + temp % 10;
		temp = temp / 10;
	}
	if (ans == num) return 1;
	else return 0;
}
bool isprime(int x) { 
	if (x < 2)return 0;
	if (x == 2)return 1;
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0)return 0;
	}
	return 1;
}
int main() {
	int a, b;
	cin >> a >> b;
	//����ö�ٷ�,���볤��531B,��ʱ1.78s,�ڴ�852.00KB,b�ܴ�ʱTLE
	if (b >= 100000000) b = 9999999;
	if (a > b) return 0;
	for (int i = a; i <= b; i++) {
		if (isHW(i) && isprime(i))
			cout << i << endl;
	}
	return 0;
}