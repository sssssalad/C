// instr1.cpp -- reading more than one string
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin >> name; //salad i
    cout << "Enter your favorite dessert:\n";
    //���򵥴ʵĶ�ȡ����
    cin >> dessert;//
    /*cinʹ�ÿհף��ո��Ʊ���ͻ��з���ȷ���ַ����Ľ���λ�ã�
    ����ڻ�ȡ�ַ���������ʱֻ��ȡһ�����ʣ�����ŵ������в��Զ��ڽ�β�ӿ��ַ�*/
    //����salad iʱ��salad�ŵ�name���飬i�ŵ�dessert����

    cout << "I have some delicious " << dessert;//salad
    cout << " for you, " 
        << name << ".\n"; //i
    // cin.get();
	// cin.get();
    return 0; 
}
//Enter your name :
//salad i
//Enter your favorite dessert :
//I have some delicious i for you, salad.
