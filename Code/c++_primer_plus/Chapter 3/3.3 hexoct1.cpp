// hexoct1.cpp -- shows hex and octal literals
#include <iostream>
int main()
{
    using namespace std;
    int chest = 42;     // decimal integer literal十进制数
    int waist = 0x42;   // hexadecimal integer literal十六进制数
    int inseam = 042;   // octal integer literal八进制数

    //默认情况下cout以十进制显示整数
    cout << "chest = " << chest << " (42 in decimal)\n";//42
    cout << "waist = " << waist << " (0x42 in hex)\n";//66
    cout << "inseam = " << inseam << " (042 in octal)\n";//34
	// cin.get();
    return 0; 
}
