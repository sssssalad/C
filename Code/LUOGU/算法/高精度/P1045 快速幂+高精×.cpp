#include<bits/stdc++.h>
using namespace std;
int p, a[1001], ans[1001], tem[1001];
//�˷�ʱ����Ҫ���������ȷ�ֹ�����3λ��*3λ��������Ϊ6λ��
void mul(int s) {
    memset(tem, 0, sizeof(tem));//tem�����ڸ߾��˵���ʱ���飬����Ԫ�ظ�0
    for (int i = 1; i <= 500; i++)
        for (int j = 1; j <= 500; j++) {
            if (s) tem[i + j - 1] += ans[i] * a[j];//�����������
            else tem[i + j - 1] += a[i] * a[j];//�������ƽ��������a�� 
        }
    for (int i = 1; i <= 500; i++) {
        tem[i + 1] += tem[i] / 10;//��λ
        tem[i] %= 10;
    }
    if (s) memcpy(ans, tem, sizeof(ans));//��tem�����ֵ����ans
    else memcpy(a, tem, sizeof(a));//��tem�����ֵ����a
}
int main() {
    cin >> p;
    cout << int(p * log10(2) + 1) << endl;//λ��
    //10��n�η���n+1λ��2=pow(10,log10(2))
    //��pow��2,p)=pow(10,log10(2*p)),λ��Ϊlog10(2)* p + 1

    ans[1] = 1; //ans��������
    a[1] = 2;//a�����������2,2��2�η���2�Ķ��η��Ķ��η�
    while (p != 0) {
        //������: 2��p�η�=��2��ƽ������p/2�η� = ����2��ƽ������ƽ������ p/2/2�η�
        if (p % 2 == 1) mul(1);//pΪ����ʱ��2��p�η�=2*2��p-1�η�
        p /= 2;
        mul(0);//����f��������ƽ�� 
    }
    ans[1] -= 1;//2��p�η�-1
    for (int i = 500; i >= 1; i--) {//ע�������ʽ��50����һ�У���һ������
        cout << ans[i];
        if (i != 500 && i % 50 == 0) cout << endl;
    }
    return 0;
}