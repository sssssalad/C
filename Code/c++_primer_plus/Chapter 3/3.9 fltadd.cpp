// fltadd.cpp -- precision problems with float
#include <iostream>
int main()
{
    using namespace std;
    float a = 2.34E+22f;//float����E��ʾ���ĸ�����
    float b = a + 1.0f;

    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;//�������㾫�ȵ�
    //float����ֻ�ܱ�ʾ�����е�ǰ6λ��ǰ7λ���޸ĵ�23λ���޷���ʾ�������ֵ����Ӱ��
    // cin.get();
    return 0; 
}
