// typecast.cpp -- forcing type changes
#include <iostream>
int main()
{
    using namespace std;
    int auks, bats, coots;

    // the following statement adds the values as double,
    // then converts the result to int两个浮点数（默认为double）相加，在赋值时转换为int
    auks = 19.99 + 11.99;

    // these statements add values as int
    bats = (int) 19.99 + (int) 11.99;   // old C syntax，C格式转换，首先强制类型转换，然后计算总和
    coots = int (19.99) + int (11.99);  // new C++ syntax，C++格式转换
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is ";    // print as char
    cout << int(ch) << endl;                    // print as int，显示其ASCII码
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl;       // using static_cast，将char类型转换为int类型
   // cin.get();
    return 0; 
}
