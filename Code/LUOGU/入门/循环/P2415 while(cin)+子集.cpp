#include<bits/stdc++.h>//�󼯺������Ӽ�Ԫ��֮��
using namespace std;
//��Ҫ�������븴�ӣ���ע�⸳ֵʱ==,��������TLE,����break
int main() {
	int len = 0, b[30];
	memset(b, 0, sizeof(b));
	unsigned long long sum = 0;
	while (cin >> b[len]) {
		sum += b[len];
		len++;
	}//��ctrl+zֹͣ����
	//һ��n��Ԫ�صļ��ϣ�ÿ��Ԫ�ض���pow(2, n - 1)�γ������Ӽ���
	//�Ӽ���һ��Ԫ��ʱÿ��Ԫ�ر�ѡ�еĴ���ΪCn1��������Ԫ��ʱΪCn2
	//n-1��Ԫ��ʱΪCn��n-1��
	//sum=Cn1+Cn2+...+Cn(n-1)=pow(2,n)-Cn0-Cn(n)=pow(2,n-1)
	sum *= pow(2, len - 1);
	cout << sum;
	return 0;
}