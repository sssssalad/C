// morechar.cpp -- the char type and int type contrasted
#include <iostream>
int main()
{
    using namespace std;
    char ch = 'M';       // assign ASCII code for M to ch����M����ʾ�ַ�M��ASCII��ֵ����77
    int i = ch;          // store same code in an int
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code:" << endl;
    ch = ch + 1;          // change character code in ch����ֵ����+1,����Ϊ78���ַ�Ϊ��N��
    i = ch;               // save new character code in i
    cout << "The ASCII code for " << ch << " is " << i << endl;

    // using the cout.put() member function to display a char
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);

    // using cout.put() to display a char constant
    cout.put('!');

    char n;
    cout << endl << "Please input a number:";
    cin >> n;
    cout << endl << "ͨ�����������char��������nҲ����Ϊ�ַ�(�ַ���Ӧ�ı��뱣���ڱ���n��,ͨ��cout��ת��Ϊ�ַ���:" <<endl
        <<n<< endl;
	// cin.get();
    return 0;
}
