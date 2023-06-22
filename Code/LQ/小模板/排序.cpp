//#include<iostream>
//#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[10] = { 1,3,4,2,5,6,7,9,8,0 };
	sort(a, a + 10);//从小到大排序
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	string str1 = "this is a nice day!";
	char str2[20];
	str1.copy(str2, 4, 10);
	//输出
	for (int i = 0; i < 4; i++){
		cout << str2[i];
	}
	return 0;
}
