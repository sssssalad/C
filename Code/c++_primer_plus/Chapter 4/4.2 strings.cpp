// strings.cpp -- storing strings in an array
#include <iostream>
#include <cstring>  // �ṩ��strlen()�ͺܶ����ַ�����ص���������������
int main()
{
    using namespace std;
    const int Size = 15;
    char name1[Size];               // empty array
    char name2[Size] = "C++owboy";  // �������ʼ��Ϊ�ַ�������

    cout << "Howdy! I'm " << name2;

    cout << "! What's your name?\n";
    cin >> name1;

    //strlen():�����ַ������ȡ�ֻ����ɼ��ַ��������ַ���ĩβ�Ŀ��ַ���������
    cout << "Well, " << name1 << ", your name has ";
    cout << strlen(name1) << " letters and is stored\n"; 
    cout << "in an array of " << sizeof(name1) << " bytes.\n"; //��������ĳ���
    cout << "Your initial is " << name1[0] << ".\n";

    name2[3] = '\0';                //�ڶ��ַ�����ʹ�ַ����ڵ������ַ������
    cout << "Here are the first 3 characters of my name: ";
    cout << name2 << endl;
    // cin.get();
    // cin.get();
    return 0;
}
