// assgn_st.cpp -- assigning structures
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable bouquet =
    {
        "sunflowers",
        0.20,
        12.49
    };
    //ͬʱ����һ�ֽṹ���ͺ�һ���������͵ı���
    struct //ʡ������
    {
        char name[5];
        float volume;
        double price;
    }a;//����a�Ǹýṹ�ı���

    inflatable choice;
    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;

    choice = bouquet;  // ��һ���ṹ������ֵ������һ��
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;
    // cin.get();
    return 0; 
}
