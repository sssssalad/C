#include<bits/stdc++.h>
using namespace std;
int p, a[1001], ans[1001], tem[1001];
//乘法时数组要开两倍长度防止溢出（3位数*3位数结果最多为6位）
void mul(int s) {
    memset(tem, 0, sizeof(tem));//tem：用于高精乘的临时数组，所有元素赋0
    for (int i = 1; i <= 500; i++)
        for (int j = 1; j <= 500; j++) {
            if (s) tem[i + j - 1] += ans[i] * a[j];//奇数处理情况
            else tem[i + j - 1] += a[i] * a[j];//求底数的平方，存在a中 
        }
    for (int i = 1; i <= 500; i++) {
        tem[i + 1] += tem[i] / 10;//进位
        tem[i] %= 10;
    }
    if (s) memcpy(ans, tem, sizeof(ans));//把tem数组的值赋给ans
    else memcpy(a, tem, sizeof(a));//把tem数组的值赋给a
}
int main() {
    cin >> p;
    cout << int(p * log10(2) + 1) << endl;//位数
    //10的n次方有n+1位，2=pow(10,log10(2))
    //则pow（2,p)=pow(10,log10(2*p)),位数为log10(2)* p + 1

    ans[1] = 1; //ans：存最后答案
    a[1] = 2;//a：存底数——2,2的2次方，2的二次方的二次方
    while (p != 0) {
        //快速幂: 2的p次方=（2的平方）的p/2次方 = （（2的平方）的平方）的 p/2/2次方
        if (p % 2 == 1) mul(1);//p为奇数时，2的p次方=2*2的p-1次方
        p /= 2;
        mul(0);//更新f：底数的平方 
    }
    ans[1] -= 1;//2的p次方-1
    for (int i = 500; i >= 1; i--) {//注意输出格式，50个换一行，第一个不用
        cout << ans[i];
        if (i != 500 && i % 50 == 0) cout << endl;
    }
    return 0;
}