#include <bits/stdc++.h>
using namespace std;
const int maxn = 2021;
int r_num[10] = {0}; // ��¼��ǰÿ�����ֿ���ʣ������
int ans = 1; //��¼��ϳ������֣���1��ʼƴ
bool flag = true; //��¼�����Ƿ񲻹�
vector<int> Split(int x) { 
    // ��x����ʮ���Ʋ��ÿһλ����������̬�б�v
    vector<int> v;
    if (x == 0) {
        v.push_back(0);
        return v;
    }
    while (x > 0) {
        //���������ÿһλ���ַ��붯̬����
        v.push_back(x % 10);
        x /= 10;
    }
    return v;
}
int main() {
    for (int i = 0; i <= 9; i++) 
        r_num[i] = maxn; //ÿ�����Ƶ�ӵ������Ϊmaxn=2021
    while (true) { 
        // ����ʣ�࿨����ϳ�����ans��ʣ�࿨�Ʋ���������ѭ��
        vector<int> need = Split(ans); //need���������ans�������ֵĶ�̬����
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