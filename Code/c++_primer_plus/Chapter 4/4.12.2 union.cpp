#include <iostream>
using namespace std;

//�ṹ��������������Ϊwidget
struct widget
{
	char band[20];
	int type;
	union id //������������������Ϊid
	{
		long id_num;//����
		char id_char[20];//�ַ���
	}id_val;//���������ƣ����ṹ���г�Ա��
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