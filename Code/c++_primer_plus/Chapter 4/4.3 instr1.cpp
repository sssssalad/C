// instr1.cpp -- reading more than one string
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin >> name; //salad i
    cout << "Enter your favorite dessert:\n";
    //面向单词的读取方法
    cin >> dessert;//
    /*cin使用空白（空格、制表符和换行符来确定字符串的结束位置，
    因此在获取字符数组输入时只读取一个单词，将其放到数组中并自动在结尾加空字符*/
    //输入salad i时将salad放到name数组，i放到dessert数组

    cout << "I have some delicious " << dessert;//salad
    cout << " for you, " 
        << name << ".\n"; //i
    // cin.get();
	// cin.get();
    return 0; 
}
//Enter your name :
//salad i
//Enter your favorite dessert :
//I have some delicious i for you, salad.
