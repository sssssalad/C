#include<iostream>
using namespace std;
typedef double T1;
typedef long long T2;
int main() {
	T1 v1 = 3.33;
	T2 v2 = 22200;
	pair<T1, T2> p1;
	pair<T1, T2> p2;
	//����һ���յ�pair����ʹ��Ĭ�Ϲ��죩������Ԫ�طֱ���T1��T2����

	pair<T1, T2> p1(v1, v2);
	//����һ��pair����������Ԫ�طֱ���T1��T2���ͣ�first��Ա��ʼ��Ϊv1��second��Ա��ʼ��Ϊv2

	make_pair(v1, v2);
	// ��v1��v2��ֵ����һ���µ�pair������Ԫ�����ͷֱ���v1��v2�����͡�

	p1 < p2;
	// ����pair������С�����㶨����ѭ�ֵ����
	//�� p1.first < p2.first ���� !(p2.first < p1.first) && (p1.second < p2.second) �򷵻�true��

	p1 == p2;
	// ������������first��second������ȣ���������������ȣ�������ʹ��Ԫ�ص�==��������

	p1.first;                   // ���ض���p1����Ϊfirst�Ĺ������ݳ�Ա
	p1.second;                 // ���ض���p1����Ϊsecond�Ĺ������ݳ�Ա
}