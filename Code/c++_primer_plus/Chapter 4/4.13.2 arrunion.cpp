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
};
int main()
{
	widget price[2] = { {"sunflowers",1,11555672}, {"strawberry",2,'liii'} };
	for (int i = 0; i < 2; i++)
	{
		if (price[i].type == 1)
			cout << price[i].id_val.id_num <<" ";
		else
			cout << price[i].id_val.id_char <<" ";
	}
	return 0;
}