#include<iostream>
#include<vector>//��̬����(������
using namespace std;
int main(){
    vector<string> v;//������Ϊv���ַ�������
    v.push_back("n");
    v.push_back(".com");
    for (vector<string>::iterator itr = v.begin(); itr != v.end(); ++itr) {
        //����itr��������������vector<int>�����iterator����������
        //itr��v�е�һ��Ԫ��һֱ���������һ��Ԫ��
        cout << *itr;
    }
    cout << endl;
    for (int i = 0; i < v.size(); i++)
        //cout << v.at(i);//�����±�Ϊi��Ԫ��
        cout << v[i];
    cout << endl << v.front();//���ص�һ��Ԫ��
    cout <<endl<< v.back();//�������һ��Ԫ��
    return 0;
}