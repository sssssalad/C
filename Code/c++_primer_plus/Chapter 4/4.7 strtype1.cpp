// strtype1.cpp -- using the C++ string class
#include <iostream>
#include <string>               //要使用string时必备
int main()
{
    using namespace std;
    char charr1[20];            // 创建一个空数组
    char charr2[20] = "jaguar"; // 创建一个初始化后的空数组
    string str1;                // 创建一个空的string变量
    string str2 = "panther";    // 创建一个初始化的string

    cout << "Enter a kind of feline: ";
    cin >> charr1; //ocelot

    cout << "Enter another kind of feline: ";
    cin >> str1;   // tiger

    cout << "Here are some felines:\n";
    cout << charr1 << " " << charr2 << " "
         << str1 << " " << str2     // ocelot jaguar tiger panther
         << endl;

    cout << "The third letter in " << charr2 << " is "
         << charr2[2] << endl; //g

    cout << "The third letter in " << str2 << " is "
         << str2[2] << endl;    //n

    return 0; 
}
