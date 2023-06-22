// strings.cpp -- storing strings in an array
#include <iostream>
#include <cstring>  // 提供了strlen()和很多与字符串相关的其他函数的声明
int main()
{
    using namespace std;
    const int Size = 15;
    char name1[Size];               // empty array
    char name2[Size] = "C++owboy";  // 将数组初始化为字符串常量

    cout << "Howdy! I'm " << name2;

    cout << "! What's your name?\n";
    cin >> name1;

    //strlen():返回字符串长度。只计算可见字符，不把字符串末尾的空字符计算在内
    cout << "Well, " << name1 << ", your name has ";
    cout << strlen(name1) << " letters and is stored\n"; 
    cout << "in an array of " << sizeof(name1) << " bytes.\n"; //整个数组的长度
    cout << "Your initial is " << name1[0] << ".\n";

    name2[3] = '\0';                //节段字符串。使字符串在第三个字符后结束
    cout << "Here are the first 3 characters of my name: ";
    cout << name2 << endl;
    // cin.get();
    // cin.get();
    return 0;
}
