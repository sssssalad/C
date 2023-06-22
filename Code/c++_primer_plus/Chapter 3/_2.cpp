#include<iostream>
using namespace std;

const int in2ft = 12;
const float ft2m = 0.0254;
const float pounds2kg = 0.45;
//输出inf为无穷大
//160cm大约5.2493英尺
//1英寸=0.083333英尺

int main()
{
	float in, ft, pounds,h,w;//英尺、英寸、磅
	cout << "Please input your height（for __in and __ft) and weight(for pounds):";
	cin >> in >> ft>>pounds;//5 3 122

	h = in * in2ft + ft;//1.6002
	cout << "Your height(ft): " << h <<endl;//63

	h = h * ft2m;//若h为int型，右式相乘后结果为float，赋值时转换为int，不精确
	w = pounds * pounds2kg;//54.9

	cout << "Your BMI is: " << w / pow(h,2) << endl;//21.44
	return 0;
}