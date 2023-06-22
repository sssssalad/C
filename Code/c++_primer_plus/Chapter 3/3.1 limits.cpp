// limits.cpp -- some integer limits
#include <iostream>
#include <climits>              // use limits.h for older systems���������������Ƶ���Ϣ
int main()
{
    using namespace std;
    int n_int = INT_MAX;        // initialize n_int to max int value��INT_MAXΪint�����ֵ
    short n_short = SHRT_MAX;   // symbols defined in climits file
    long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

    // sizeof������������ͻ�����ĳ��ȣ���������ʹ��ʱ����Ӧ���������ڣ��Ա�����ʹ��ʱ���ſ�ѡ
    cout << "int is " << sizeof (int) << " bytes." << endl;//int����Ϊ4�ֽ�
    cout << "short is " << sizeof n_short << " bytes." << endl;//2
    cout << "long is " << sizeof n_long << " bytes." << endl;//4
    cout << "long long is " << sizeof n_llong << " bytes." << endl;//8
    cout << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;//2147483647
    cout << "short: " << n_short << endl;// 32767
    cout << "long: " << n_long << endl;//2147483647
    cout << "long long: " << n_llong << endl << endl;// 9223372036854775807

    cout << "Minimum int value = " << INT_MIN << endl;// -2147483648
    cout << "Bits per byte = " << CHAR_BIT << endl;//ÿ���ֽڵ�λ��:8
	// cin.get();
    return 0;
}
