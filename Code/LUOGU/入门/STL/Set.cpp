#include <bits/stdc++.h>
using namespace std;
int main(){
    set<string> myset = { "Nikita","Deep","Priya","Suman","Aman" };
    //����һ����Ϊmyset������stringԪ�صļ���
    set<string> myset2;

    myset.insert("cyx");//�ڼ���ĩβ������Ԫ��
    myset2.insert(myset.find("Deep"), myset.end());
    //myset���һ�γ��֡�deep����λ��һֱ������ĩβһͬ����myset2
    //find()���ҵ�Ԫ���򷵻�ָ���Ԫ�صĵ����������򷵻�ָ�򼯺�ĩβ�ĵ�����set :: end()

    myset.erase("Priya");//ɾ��ָ��ֵ

    if (myset.count("Priya"))//����ָ��ֵ��Ԫ�ش����򷵻�1
        cout << "��Priya����\n";
    else cout << "��Priya������\n";
    
    cout << "myset��Ԫ����: " << endl;
    set<string>::const_iterator it; // ����һ����Ϊit�ĵ�����
    it = myset.begin(); // ��it�������ϵĵ�һ��Ԫ��
    while (it != myset.end()){
        cout << *it ;   // ��ӡitָ���Ԫ�ص�ֵ
        ++it;           // ��������һ��Ԫ��
        if (it != myset.end()) cout << endl; //��ӡ���һ��Ԫ�ز��������
    }
    return 0;
}