#include<iostream>
#include<vector>//动态数组(向量）
using namespace std;
int main(){
    vector<string> v;//创建名为v的字符串向量
    v.push_back("n");
    v.push_back(".com");
    for (vector<string>::iterator itr = v.begin(); itr != v.end(); ++itr) {
        //变量itr的数据类型是由vector<int>定义的iterator迭代器类型
        //itr从v中第一个元素一直迭代到最后一个元素
        cout << *itr;
    }
    cout << endl;
    for (int i = 0; i < v.size(); i++)
        //cout << v.at(i);//返回下标为i的元素
        cout << v[i];
    cout << endl << v.front();//返回第一个元素
    cout <<endl<< v.back();//返回最后一个元素
    return 0;
}