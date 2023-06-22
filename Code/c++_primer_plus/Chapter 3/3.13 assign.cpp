// assign.cpp -- type changes on assignment
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);

    float tree = 3;     // int赋值给float
    int guess = 3.9832; // float赋值给int,会截取小数部分
    int debt = 7.2E12;  // result not defined in C++，不同实现反应可能不同

    cout << "tree = " << tree << endl;//3.000000
    cout << "guess = " << guess << endl;//3
    cout << "debt = " << debt << endl;//1634811904
    // cin.get();
    return 0;
}
