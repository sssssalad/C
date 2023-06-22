#include <bits/stdc++.h>
//Q:（0-19，0-20）的不同整数点可以组成多少条不同的直线
using namespace std;
//利用vector来存储所有的点；将每两个点进行计算相应的k和b，存进set去重
//最终加上平行于坐标轴的直线即可
vector<pair<int, int>> v;//构建包含pair对象（含两个int变量）的向量，用于存储点
set<pair<double, double>> st;//构建包含pair对象（含两个double变量）的集合，用于存储线
int main(){
    //两点式
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 21; j++) {
            v.push_back(make_pair(i, j));//构建包含i和j的piar对象(即一个点)加入向量
        }
    }
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            double x1, y1, x2, y2;
            x1 = v[i].first, y1 = v[i].second;//v[i]为点的pair对象
            x2 = v[j].first, y2 = v[j].second;
            if (x1 == x2 || y1 == y2) 
                continue;
            double k = (y2 - y1) / (x2 - x1);//斜率
            double b = (x2 * y1 - x1 * y2) / (x2 - x1);//截距
            st.insert(make_pair(k, b));//构建包含k和b的piar对象加入集合
        }
    }
    cout << st.size() + 20 + 21 << endl;
    return 0;
}