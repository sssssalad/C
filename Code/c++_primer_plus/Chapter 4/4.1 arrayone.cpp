// arrayone.cpp -- small arrays of integers

//Language要选择G++,可使用包含了目前所有C++头文件的#include<bits/stdc++.h>
#include <iostream>
int main()
{
    using namespace std;
    int yams[3];    // creates array with three elements
    yams[0] = 7;    // assign value to first element
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5}; // 创建并初始化数组

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs ";
    cout << yamcosts[1] << " cents per yam.\n";

    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "The total yam expense is " << total << " cents.\n";

    cout << "\nSize of yams array = " << sizeof yams;//yams为数组名，得到整个数组的字节数
    //sizeof：返回类型或变量的长度， 对变量名使用时括号可省略，单位为字节
    cout << " bytes.\n";
    cout << "Size of one element = " << sizeof yams[0];//数组第一个元素，int值使用4个字节
    cout << " bytes.\n";
    // cin.get();
    return 0; 
}
