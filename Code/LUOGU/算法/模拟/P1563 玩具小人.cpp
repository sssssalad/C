#include<bits/stdc++.h>
using namespace std;
const int N = 100010;
struct s {
	bool turn;//turnΪ��������
	string name;
}a[N];//���ϴ�Ķ���ֵ����main����֮�⣬��Ȼ�������в�����
int n, m, x, y, j = 0;//���ܽ�����������Ϊindex����Ϳ⺯���ж����غ�
int main(){
    cin >> n >> m;
    for (int i = 0; i < n; i++)//��ʱ������
        cin >> a[i].turn >> a[i].name;
    for (int i = 1; i <= m; i++){
        cin >> x >> y;//xΪ��������
        //�����������������Ϊ˳ʱ�룺-
        //�������Һ���������Ϊ��ʱ�룺+
        if ((a[j].turn == 0 && x == 0)|| (a[j].turn == 1 && x == 1))
            j = (j + n - y) % n;//����index������y��Ϊ������%n��֤����index�趨��0-n-1֮��
        else if ((a[j].turn == 0 && x == 1)|| (a[j].turn == 1 && x == 0))
            j = (j + y) % n;//%n��֤����index�趨��0-n-1֮��
    }
    cout << a[j].name;
    return 0;
}