// numstr.cpp -- following number input with line input
#include <iostream>
int main()
{
    /*混合输入数字和面向行的字符串的换行符残留问题*/

    using namespace std;
    cout << "What year was your house built?\n";
    int year;
    cin >> year;//将回车键生成的换行符留在了输入队列

    //cin.get();//读取并丢弃换行符
    cout << "What is its street address?\n";
    char address[80];

    cin.getline(address, 80);//没来得及输入
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    // cin.get();
    return 0; 
}
