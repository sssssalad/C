#include<bits/stdc++.h>
using namespace std;
const int N = 40005;
int b[N], sum, len, m = 0, len2;
string a;
bool t = 0;
int main() {
	cin >> a;
	len = a.size();
	len2 = len * len;
	for (int i = 0; i < len; i++) //��һ��
		b[i] = a[i] - '0';
	for (int i = 1; i < len; i++) {
		cin >> a;//����ÿһ��
		for (int j = i * len; j < (i + 1) * len; j++)
			b[j] = a[j - i * len] - '0';//j-i*lenΪÿһ�������ֵ�����ж�Ӧ��λ��
	}
	cout << len << " ";
	while(m < len2) {
		sum = 0;
		while (b[m] == t && m < len2) {//�ǵü�Խλ�ж�
			sum++;
			m++;//����������Ϊb[m++]=0������һ��while���������һ��λ�ã���m�����1
		}
		t = !t;
		if (m <= len2 + 1) cout << sum << " ";//���㵽���һλʱm=len * len+1
	}
	return 0;
}