#include <bits/stdc++.h>
//Q:��0-19��0-20���Ĳ�ͬ�����������ɶ�������ͬ��ֱ��
using namespace std;
//����vector���洢���еĵ㣻��ÿ��������м�����Ӧ��k��b�����setȥ��
//���ռ���ƽ�����������ֱ�߼���
vector<pair<int, int>> v;//��������pair���󣨺�����int�����������������ڴ洢��
set<pair<double, double>> st;//��������pair���󣨺�����double�������ļ��ϣ����ڴ洢��
int main(){
    //����ʽ
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 21; j++) {
            v.push_back(make_pair(i, j));//��������i��j��piar����(��һ����)��������
        }
    }
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            double x1, y1, x2, y2;
            x1 = v[i].first, y1 = v[i].second;//v[i]Ϊ���pair����
            x2 = v[j].first, y2 = v[j].second;
            if (x1 == x2 || y1 == y2) 
                continue;
            double k = (y2 - y1) / (x2 - x1);//б��
            double b = (x2 * y1 - x1 * y2) / (x2 - x1);//�ؾ�
            st.insert(make_pair(k, b));//��������k��b��piar������뼯��
        }
    }
    cout << st.size() + 20 + 21 << endl;
    return 0;
}