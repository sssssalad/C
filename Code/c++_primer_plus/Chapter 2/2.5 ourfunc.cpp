// ourfunc.cpp -- defining your own function
#include <iostream>
void simon(int);    // function prototype for simon() 函数原型

int main()
{
    using namespace std;
    simon(3);       // call the simon() function
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count);   // call it again
    cout << "Done!" << endl;
	// cin.get();
    // cin.get();
    return 0;
}

void simon(int n)   // define the simon() function 函数定义
{//void表示simon()没有返回值，不能用于赋值。
    //使用simon（）时应提供一个int参数，该参数值将被赋给n
    using namespace std;

    cout << "Simon says touch your toes " << n << " times." << endl;
}                   // void functions don't need return statements
