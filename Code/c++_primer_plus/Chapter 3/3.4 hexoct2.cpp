// hexoct2.cpp -- display values in hex and octal
#include <iostream>
using namespace std;
int main()
{
    using namespace std;
    int chest = 42;
    int waist = 42; 
    int inseam = 42;

    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex;      // 修改属性为16进制
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;      // 修改属性为8进制
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
    // cin.get();
    return 0; 
}
