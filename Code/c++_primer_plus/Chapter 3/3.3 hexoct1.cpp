// hexoct1.cpp -- shows hex and octal literals
#include <iostream>
int main()
{
    using namespace std;
    int chest = 42;     // decimal integer literalʮ������
    int waist = 0x42;   // hexadecimal integer literalʮ��������
    int inseam = 042;   // octal integer literal�˽�����

    //Ĭ�������cout��ʮ������ʾ����
    cout << "chest = " << chest << " (42 in decimal)\n";//42
    cout << "waist = " << waist << " (0x42 in hex)\n";//66
    cout << "inseam = " << inseam << " (042 in octal)\n";//34
	// cin.get();
    return 0; 
}
