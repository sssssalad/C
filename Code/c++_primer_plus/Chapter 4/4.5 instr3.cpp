// instr3.cpp -- reading more than one word with get() & get()
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";

    //get()ÿ�ζ�ȡһ�У�ͨ�����з�ȷ����β�����滻�з������������������
    //���������ε���ʱ�ڶ��ε��ûῴ����һ�ε������µĻ��з�����˻�ֱ�ӽ���
    //cin.get()�ɶ�ȡ��һ���ַ�����ʹ�ǻ����ַ���

    cin.get(name, ArSize).get();    // read string, newline
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, ArSize).get();
    /*
    ��
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
//salad ��
//Enter your favorite dessert :
//strawberry icecream
//I have some delicious strawberry icecream for you, salad ��.
