// exceed.cpp -- exceeding some integer limits
#include <iostream>
#define ZERO 0      // makes ZERO symbol for 0 value
#include <climits>  // defines INT_MAX as largest int value
int main()
{
    using namespace std;
    short sam = SHRT_MAX;     // initialize a variable to max value
    unsigned short sue = sam;// okay if variable sam already defined��ʹ���޷������ͣ����ֵ��SHRT_MAX������

    cout << "Sam��" << sam << " and Sue��" << sue<< endl
         << "Add 1 to each." << endl
         << "Now ";
    sam = sam + 1;//SHRT_MAX�Ѿ�������short�����ˣ��ټ�1�����Խ���ƣ�sam��32767��-32768
    sue = sue + 1; //sue��32767��-32768
    cout << "Sam��" << sam << " and Sue��" << sue<< " \n" ;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam�� " << sam << " and Sue��" << sue<<endl;
    cout << "Take 1 from each." << endl 
        << "Now ";
    sam = sam - 1;//-1
    sue = sue - 1;//�޷��ű����������ƣ�0��65535
    cout << "Sam�� " << sam << " and Sue��" << sue<<  endl;
	// cin.get();
    return 0; 
}
