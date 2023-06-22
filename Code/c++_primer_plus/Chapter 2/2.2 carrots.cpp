#include<iostream>
using namespace std;

int main()
{
    int carrots;//声明语句创造变量carrots，编译器为该变量分配一个整型数据的内存空间
    //指出要存储的变量的数据类型是int，程序将使用名称carrots来标识存储在该内存单元的值

    carrots = 25;//赋值语句，从右到左进行（可使用连续的赋值运算符"="）
    //将整数25赋给变量carrots表示的内存单元

    cout << "I have ";
    cout << carrots;        //打印存储在carrots中的整数值25
    //打印之前cout会自动将整数形式的数字转换为字符串形式
    cout << " carrots.";
    cout << endl;

    carrots = carrots - 1;  // modify the variable
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;

    //C语言
    printf("Printing a string: %s\n", "25");
    printf("Printing a integer: %d\n", 25);

    // cin.get();
    return 0;
}
