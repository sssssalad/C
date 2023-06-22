#include <iostream>
using namespace std;

//结构体声明，类型名为widget
struct widget
{
	char band[20];
	int type;
	union id //共用体声明，类型名为id
	{
		long id_num;//整数
		char id_char[20];//字符串
	}id_val;//共用体名称，即结构体中成员名
}price;
int main()
{
	widget price ={"sunflowers",1,112};
	if (price.type == 1)
		cout << price.id_val.id_num;
	else
		cout << price.id_val.id_char;
	return 0;
}