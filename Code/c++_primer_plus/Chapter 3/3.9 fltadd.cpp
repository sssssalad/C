// fltadd.cpp -- precision problems with float
#include <iostream>
int main()
{
    using namespace std;
    float a = 2.34E+22f;//float类型E表示法的浮点数
    float b = a + 1.0f;

    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;//浮点运算精度低
    //float类型只能表示数字中的前6位或前7位，修改第23位后无法显示，不会对值产生影响
    // cin.get();
    return 0; 
}
