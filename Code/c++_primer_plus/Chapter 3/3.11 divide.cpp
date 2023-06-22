// divide.cpp -- integer and floating-point division
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);

    cout << "Integer division: 9/5 = " << 9 / 5  << endl;
    cout << "Floating-point division: 9.0/5.0 = ";
    cout << 9.0 / 5.0 << endl;//int除法得到的值小数部分将被丢弃

    cout << "Mixed division: 9.0/5 = " << 9.0 / 5  << endl;//不同类型计算时会自动转换为同一类型
    

    cout << "double constants: 1e7/9.0 = ";
    cout << 1.e7 / 9.0 <<  endl;//double除法

    cout << "float constants: 1e7f/9.0f = ";
    cout << 1.e7f / 9.0f <<  endl;//float除法
    // cin.get();
    return 0;
}
