#include<bits/stdc++.h>//求集合所有子集元素之和
using namespace std;
//不要把问题想复杂！！注意赋值时==,尽量避免TLE,谨慎break
int main() {
	int len = 0, b[30];
	memset(b, 0, sizeof(b));
	unsigned long long sum = 0;
	while (cin >> b[len]) {
		sum += b[len];
		len++;
	}//按ctrl+z停止输入
	//一共n个元素的集合，每个元素都有pow(2, n - 1)次出现在子集中
	//子集有一个元素时每个元素被选中的次数为Cn1，有两个元素时为Cn2
	//n-1个元素时为Cn（n-1）
	//sum=Cn1+Cn2+...+Cn(n-1)=pow(2,n)-Cn0-Cn(n)=pow(2,n-1)
	sum *= pow(2, len - 1);
	cout << sum;
	return 0;
}