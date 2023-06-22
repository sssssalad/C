// instr2.cpp -- reading more than one word with getline
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    //面向行的读取方法
    //getline()每次读取一行，通过换行符来确定行尾，但不保存换行符（将其转换为空字符）
    cin.getline(name, ArSize);  // reads through newline
    cout << "Enter your favorite dessert:\n";

    cin.getline(dessert, ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    // cin.get();
    return 0; 
}
//Enter your name :
//salad chen
//Enter your favorite dessert :
//strawberry icecream
//I have some delicious strawberry icecream for you, salad chen.
