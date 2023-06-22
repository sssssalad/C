#include<bits/stdc++.h>
using namespace std;
const int N = 40005;
int b[N], sum, len, m = 0, len2;
string a;
bool t = 0;
int main() {
	cin >> a;
	len = a.size();
	len2 = len * len;
	for (int i = 0; i < len; i++) //第一行
		b[i] = a[i] - '0';
	for (int i = 1; i < len; i++) {
		cin >> a;//输入每一行
		for (int j = i * len; j < (i + 1) * len; j++)
			b[j] = a[j - i * len] - '0';//j-i*len为每一次输入的值在行中对应的位置
	}
	cout << len << " ";
	while(m < len2) {
		sum = 0;
		while (b[m] == t && m < len2) {//记得加越位判断
			sum++;
			m++;//若将条件设为b[m++]=0将在下一个while语句中跳过一个位置，即m多加了1
		}
		t = !t;
		if (m <= len2 + 1) cout << sum << " ";//计算到最后一位时m=len * len+1
	}
	return 0;
}