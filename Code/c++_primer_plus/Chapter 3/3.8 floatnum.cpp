// floatnum.cpp -- floating-point types
#include <iostream>
int main()
{
    using namespace std; 
    cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point，迫使输出使用定点表示法
    //cout通常会删除结尾的0
    float tub = 10.0 / 3.0;     // good to about 6 places，有效位数6位
    double mint = 10.0 / 3.0;   // good to about 15 places，有效位数15位
    const float million = 1.0e6; //定义常量

    cout << "tub = " << tub;
    cout << ", a million tubs = " << million * tub;
    cout << ",\nand ten million tubs = ";
    cout << 10 * million * tub << endl;

    cout << "mint = " << mint << " and a million mints = ";
    cout << million * mint << endl;
    // cin.get();
    return 0;
}
