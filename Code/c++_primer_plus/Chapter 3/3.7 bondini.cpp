// bondini.cpp -- using escape sequences
#include <iostream>
int main()
{
    using namespace std;

    cout << "\aOperation \"HyperHype\" is now activated!\n";
    //\aΪ���������������ע��

    cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
    //\bΪ�˸��ַ���ʹ������˵��»�����ʼ��

    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";//\nΪ���з���ʹ���ǰ��
    cout << "\aCode verified! Proceed with Plan Z3!\n";
    // cin.get();
    // cin.get();
    return 0; 
}
