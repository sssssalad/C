#include<bits/stdc++.h>
using namespace std;
const int N = 100010;
int A[N], B[N], C[N];
int add(int A[], int B[], int C[], int v){//vΪλ��
    C[0] = 0;
    for (int i = 0; i < v; i++){
        C[i] += A[i] + B[i];//����A��B��iλ�ϵ���
        C[i + 1] = C[i] / 10;//��λ
        C[i] %= 10;//C�ĵ�iλ����
    }
    if (C[v]) v++;//���λ��λΪ1ʱ�����λ��λ
    return v;
}
int main(){
    string a, b;//��string��������������
    cin >> a >> b;
    int m = 0, n = 0;
    //�ַ���a��b����������A��B
    // []���ȼ��Ⱥ�++��;m��n�����ֵ�λ��
    for (int i = a.size() - 1; i >= 0; i--) A[m++] = a[i] - '0';
    for (int i = b.size() - 1; i >= 0; i--) B[n++] = b[i] - '0';
    int c, maxl;
    maxl = max(a.size(), b.size());
    c = add(A, B, C, maxl);
    while(C[c- 1] == 0) c--;//��ֹ���������0 
    //C�������
    if (c <= 0) cout << 0;//���Ϊ0�����
    else {
        for (int i = c-1; i >= 0; i--) cout << C[i];
    }
    return 0;
}