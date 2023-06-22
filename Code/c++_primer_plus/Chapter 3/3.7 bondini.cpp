// bondini.cpp -- using escape sequences
#include <iostream>
int main()
{
    using namespace std;

    cout << "\aOperation \"HyperHype\" is now activated!\n";
    //\a为振铃符，用于提醒注意

    cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
    //\b为退格字符，使光标左退到下划线起始处

    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";//\n为换行符，使光标前进
    cout << "\aCode verified! Proceed with Plan Z3!\n";
    // cin.get();
    // cin.get();
    return 0; 
}
