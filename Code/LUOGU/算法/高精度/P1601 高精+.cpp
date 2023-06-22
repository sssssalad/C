#include<bits/stdc++.h>
using namespace std;
const int N = 100010;
int A[N], B[N], C[N];
int add(int A[], int B[], int C[], int v){//v为位数
    C[0] = 0;
    for (int i = 0; i < v; i++){
        C[i] += A[i] + B[i];//加上A和B第i位上的数
        C[i + 1] = C[i] / 10;//进位
        C[i] %= 10;//C的第i位的数
    }
    if (C[v]) v++;//最高位进位为1时，最高位进位
    return v;
}
int main(){
    string a, b;//用string输入两个数方便
    cin >> a >> b;
    int m = 0, n = 0;
    //字符串a和b倒放入数组A和B
    // []优先级比后++高;m和n是数字的位数
    for (int i = a.size() - 1; i >= 0; i--) A[m++] = a[i] - '0';
    for (int i = b.size() - 1; i >= 0; i--) B[n++] = b[i] - '0';
    int c, maxl;
    maxl = max(a.size(), b.size());
    c = add(A, B, C, maxl);
    while(C[c- 1] == 0) c--;//防止多输出若干0 
    //C倒着输出
    if (c <= 0) cout << 0;//结果为0的情况
    else {
        for (int i = c-1; i >= 0; i--) cout << C[i];
    }
    return 0;
}