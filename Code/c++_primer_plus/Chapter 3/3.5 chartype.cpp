// chartype.cpp -- the char type
#include <iostream>
int main( )
{
    using namespace std;
    char ch;        
    // declare a char variable，char类型用于存储字符（如字母和数字）

    cout << "Enter a character: " << endl;
    cin >> ch;//输入的是M不是对应的字符编码77，cin将键盘输入的M转换为77
    cout << "Hola! ";
    cout << "Thank you for the " << ch << " character." << endl;
    //cout将值77转换为所显示的字符M
    // cin.get();
    // cin.get();
    return 0;
}
