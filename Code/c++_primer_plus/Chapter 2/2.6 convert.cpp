// convert.cpp -- converts stone to pounds
#include <iostream>
int stonetolb(int);     // function prototype函数原型：描述函数接口
int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;//英石
    int pounds = stonetolb(stone);//调用函数
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
	// cin.get();
    // cin.get();
    return 0;
}

int stonetolb(int sts)
{
     return 14 * sts;//英镑
}
