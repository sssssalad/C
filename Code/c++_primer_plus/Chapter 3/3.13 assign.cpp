// assign.cpp -- type changes on assignment
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);

    float tree = 3;     // int��ֵ��float
    int guess = 3.9832; // float��ֵ��int,���ȡС������
    int debt = 7.2E12;  // result not defined in C++����ͬʵ�ַ�Ӧ���ܲ�ͬ

    cout << "tree = " << tree << endl;//3.000000
    cout << "guess = " << guess << endl;//3
    cout << "debt = " << debt << endl;//1634811904
    // cin.get();
    return 0;
}
