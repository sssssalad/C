#include <bits/stdc++.h>
using namespace std;
const int maxn = 2021;
int r_num[10] = {0}; // 记录当前每种数字卡牌剩余数量
int ans = 1; //记录组合出的数字，从1开始拼
bool flag = true; //记录卡牌是否不够
vector<int> Split(int x) { 
    // 将x按照十进制拆分每一位，存贮进动态列表v
    vector<int> v;
    if (x == 0) {
        v.push_back(0);
        return v;
    }
    while (x > 0) {
        //将组合数的每一位数字放入动态数组
        v.push_back(x % 10);
        x /= 10;
    }
    return v;
}
int main() {
    for (int i = 0; i <= 9; i++) 
        r_num[i] = maxn; //每个卡牌的拥有数量为maxn=2021
    while (true) { 
        // 利用剩余卡牌组合出数字ans，剩余卡牌不足则跳出循环
        vector<int> need = Split(ans); //need：包含组成ans所需数字的动态数组
        for (int i = 0; i < need.size(); i++) {
            r_num[need[i]]--;
            if (r_num[need[i]] < 0)
                flag=false;
        }
        if (!flag) break;
        ans++;
    }
    cout << "ans=" << ans - 1;
    return 0;
}