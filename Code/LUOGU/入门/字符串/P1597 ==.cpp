#include<bits/stdc++.h>
using namespace std;
//��Ҫ�������븴�ӣ���ע�⸳ֵʱ==
int a, b, c, i = 0;
char s[255];
int main(){
	cin.getline(s,255);
	while(i < strlen(s)) {
		if (s[i] == 'a') {
			if (s[i + 3] >= '0' && s[i + 3] <= '9') a = s[i + 3] - '0';
			else if (s[i + 3] == 'b') a = b;
			else if (s[i + 3] == 'c') a = c;
		}
		if (s[i] == 'b') {
			if (s[i + 3] >= '0' && s[i + 3] <= '9') b = s[i + 3] - '0';
			else if (s[i + 3] == 'a') b = a;
			else if (s[i + 3] == 'c') b = c;
		}
		if (s[i] == 'c') {
			if (s[i + 3] >= '0' && s[i + 3] <= '9') c = s[i + 3] - '0';
			else if (s[i + 3] == 'a') c = a;
			else if (s[i + 3] == 'b') c = b;
		}
		i += 5;//ÿ����ֵ���ռ5���ַ�
	}
	cout << a << " " << b << " " << c;
	return 0;
}