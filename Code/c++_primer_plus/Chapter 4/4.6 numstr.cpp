// numstr.cpp -- following number input with line input
#include <iostream>
int main()
{
    /*����������ֺ������е��ַ����Ļ��з���������*/

    using namespace std;
    cout << "What year was your house built?\n";
    int year;
    cin >> year;//���س������ɵĻ��з��������������

    //cin.get();//��ȡ���������з�
    cout << "What is its street address?\n";
    char address[80];

    cin.getline(address, 80);//û���ü�����
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    // cin.get();
    return 0; 
}
