#include<iostream>
using namespace std;

int main()
{
    int carrots;//������䴴�����carrots��������Ϊ�ñ�������һ���������ݵ��ڴ�ռ�
    //ָ��Ҫ�洢�ı���������������int������ʹ������carrots����ʶ�洢�ڸ��ڴ浥Ԫ��ֵ

    carrots = 25;//��ֵ��䣬���ҵ�����У���ʹ�������ĸ�ֵ�����"="��
    //������25��������carrots��ʾ���ڴ浥Ԫ

    cout << "I have ";
    cout << carrots;        //��ӡ�洢��carrots�е�����ֵ25
    //��ӡ֮ǰcout���Զ���������ʽ������ת��Ϊ�ַ�����ʽ
    cout << " carrots.";
    cout << endl;

    carrots = carrots - 1;  // modify the variable
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;

    //C����
    printf("Printing a string: %s\n", "25");
    printf("Printing a integer: %d\n", 25);

    // cin.get();
    return 0;
}
