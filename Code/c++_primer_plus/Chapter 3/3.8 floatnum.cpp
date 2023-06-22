// floatnum.cpp -- floating-point types
#include <iostream>
int main()
{
    using namespace std; 
    cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point����ʹ���ʹ�ö����ʾ��
    //coutͨ����ɾ����β��0
    float tub = 10.0 / 3.0;     // good to about 6 places����Чλ��6λ
    double mint = 10.0 / 3.0;   // good to about 15 places����Чλ��15λ
    const float million = 1.0e6; //���峣��

    cout << "tub = " << tub;
    cout << ", a million tubs = " << million * tub;
    cout << ",\nand ten million tubs = ";
    cout << 10 * million * tub << endl;

    cout << "mint = " << mint << " and a million mints = ";
    cout << million * mint << endl;
    // cin.get();
    return 0;
}
