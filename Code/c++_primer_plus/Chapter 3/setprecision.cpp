#include<iostream>
#include <iomanip>//����setprecision��ͷ�ļ�

using namespace std;
int main()
{
	unsigned int n;
	float t, yl;
	//tΪ�����ܺ�������ylΪn���˷ֵĵĺ�����
	cin >> t >> n;
	yl = t / n;
	cout << fixed << setprecision(2) << yl << endl;//ȡС�������λ
	cout << 2 * n;
	return 0;
}
