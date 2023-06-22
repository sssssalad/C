#include<iostream>
using namespace std;
typedef double T1;
typedef long long T2;
int main() {
	T1 v1 = 3.33;
	T2 v2 = 22200;
	pair<T1, T2> p1;
	pair<T1, T2> p2;
	//创建一个空的pair对象（使用默认构造），两个元素分别是T1和T2类型

	pair<T1, T2> p1(v1, v2);
	//创建一个pair对象，它两个元素分别是T1和T2类型，first成员初始化为v1，second成员初始化为v2

	make_pair(v1, v2);
	// 以v1和v2的值创建一个新的pair对象，其元素类型分别是v1和v2的类型。

	p1 < p2;
	// 两个pair对象间的小于运算定义遵循字典次序：
	//如 p1.first < p2.first 或者 !(p2.first < p1.first) && (p1.second < p2.second) 则返回true。

	p1 == p2;
	// 如果两个对象的first和second依次相等，则这两个对象相等；该运算使用元素的==操作符。

	p1.first;                   // 返回对象p1中名为first的公有数据成员
	p1.second;                 // 返回对象p1中名为second的公有数据成员
}