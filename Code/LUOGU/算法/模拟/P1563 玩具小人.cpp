#include<bits/stdc++.h>
using namespace std;
const int N = 100010;
struct s {
	bool turn;//turn为向内向外
	string name;
}a[N];//将较大的定义值放在main函数之外，不然可能运行不出来
int n, m, x, y, j = 0;//不能将变量名设置为index，会和库函数中定义重合
int main(){
    cin >> n >> m;
    for (int i = 0; i < n; i++)//逆时针输入
        cin >> a[i].turn >> a[i].name;
    for (int i = 1; i <= m; i++){
        cin >> x >> y;//x为向左向右
        //向内向左和向外向右为顺时针：-
        //向内向右和向外向左为逆时针：+
        if ((a[j].turn == 0 && x == 0)|| (a[j].turn == 1 && x == 1))
            j = (j + n - y) % n;//避免index不够减y成为负数，%n保证当将index设定再0-n-1之间
        else if ((a[j].turn == 0 && x == 1)|| (a[j].turn == 1 && x == 0))
            j = (j + y) % n;//%n保证当将index设定再0-n-1之间
    }
    cout << a[j].name;
    return 0;
}