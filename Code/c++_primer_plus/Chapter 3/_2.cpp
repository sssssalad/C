#include<iostream>
using namespace std;

const int in2ft = 12;
const float ft2m = 0.0254;
const float pounds2kg = 0.45;
//���infΪ�����
//160cm��Լ5.2493Ӣ��
//1Ӣ��=0.083333Ӣ��

int main()
{
	float in, ft, pounds,h,w;//Ӣ�ߡ�Ӣ�硢��
	cout << "Please input your height��for __in and __ft) and weight(for pounds):";
	cin >> in >> ft>>pounds;//5 3 122

	h = in * in2ft + ft;//1.6002
	cout << "Your height(ft): " << h <<endl;//63

	h = h * ft2m;//��hΪint�ͣ���ʽ��˺���Ϊfloat����ֵʱת��Ϊint������ȷ
	w = pounds * pounds2kg;//54.9

	cout << "Your BMI is: " << w / pow(h,2) << endl;//21.44
	return 0;
}