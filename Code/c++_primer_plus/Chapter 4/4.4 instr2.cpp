// instr2.cpp -- reading more than one word with getline
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    //�����еĶ�ȡ����
    //getline()ÿ�ζ�ȡһ�У�ͨ�����з���ȷ����β���������滻�з�������ת��Ϊ���ַ���
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
