// sqrt.cpp -- using the sqrt() function

#include <iostream>
#include <cmath>    // or math.h，提供sqrt（）函数的原型

int main()
{
    using namespace std;
   
    double area;//double:可能带小数部分的数字
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    double side;
    side = sqrt(area);//返回平方根

    cout << "That's the equivalent of a square " << side 
         << " feet to the side." << endl;
    cout << "How fascinating!" << endl;
	// cin.get();
	// cin.get();
    return 0;
}
