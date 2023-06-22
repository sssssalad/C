// morechar.cpp -- the char type and int type contrasted
#include <iostream>
int main()
{
    using namespace std;
    char ch = 'M';       // assign ASCII code for M to ch，‘M’表示字符M的ASCII数值编码77
    int i = ch;          // store same code in an int
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code:" << endl;
    ch = ch + 1;          // change character code in ch，数值编码+1,编码为78的字符为‘N’
    i = ch;               // save new character code in i
    cout << "The ASCII code for " << ch << " is " << i << endl;

    // using the cout.put() member function to display a char
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);

    // using cout.put() to display a char constant
    cout.put('!');

    char n;
    cout << endl << "Please input a number:";
    cin >> n;
    cout << endl << "通过键盘输入的char类型数字n也被视为字符(字符对应的编码保存在变量n中,通过cout再转换为字符）:" <<endl
        <<n<< endl;
	// cin.get();
    return 0;
}
