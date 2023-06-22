// instr3.cpp -- reading more than one word with get() & get()
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";

    //get()每次读取一行，通过换行符确定结尾，保存换行符将其留在输入队列中
    //当连续两次调用时第二次调用会看到第一次调用留下的换行符，因此会直接结束
    //cin.get()可读取下一个字符（即使是换行字符）

    cin.get(name, ArSize).get();    // read string, newline
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, ArSize).get();
    /*
    或
    cin.get(name, ArSize);
    cout << "Enter your favorite dessert:\n";
    cin.get();
    cin.get(dessert, ArSize);
    */
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    // cin.get();
    return 0; 
}
//Enter your name:
//salad 陈
//Enter your favorite dessert :
//strawberry icecream
//I have some delicious strawberry icecream for you, salad 陈.
