// getinfo.cpp -- input and output
#include <iostream>

int main()
{
    using namespace std;
    
    int carrots;
    
    cout << "How many carrots do you have?" << endl;
    cin >> carrots;                // 输入变量
    cout << "Here are two more. ";
    carrots = carrots + 2;

// 合并输出；将四条语句合并为一条
    cout << "Now you have " << carrots << " carrots." << endl;
	// cin.get();
	// cin.get();
    return 0;
}
