// ourfunc.cpp -- defining your own function
#include <iostream>
void simon(int);    // function prototype for simon() ����ԭ��

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

void simon(int n)   // define the simon() function ��������
{//void��ʾsimon()û�з���ֵ���������ڸ�ֵ��
    //ʹ��simon����ʱӦ�ṩһ��int�������ò���ֵ��������n
    using namespace std;

    cout << "Simon says touch your toes " << n << " times." << endl;
}                   // void functions don't need return statements
