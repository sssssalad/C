#include <iostream>
const int N = 24; //������
using namespace std;
//a����Ϊ����ͼ��ÿ���������������a[1][2]��ʾ1��2
int a[N][N] = {
	{ 0, 2, 1, 1, 1,0,0,0,0,0,0,0,0,0,0,0,0,0 },//���A
	{ 0, 0, 1, 0, 1 },//2
	{ 0, 0, 1, 0, 0 },
	{ 1, 1, 0, 0, 1 },
	{ 0, 0, 1, 0, 0 }
};
int vis[N + 1];//0��ʾδ���ʣ�1��ʾ�Ѿ�����
//vis[1]��ʾ��1������Ƿ񱻷��ʹ�
void DFS(int start) {
	vis[start] = 1;
	cout << start << " ";
	for (int i = 1; i <= N; i++)
		//��Ϊstart��i����1��ʼ����ʾ�����е�ֵʱ�±�Ҫ-1
		if (vis[i] == 0 && a[start - 1][i - 1] == 1) DFS(i);
}
int main() {
	memset(vis, 0, sizeof(vis));
	for (int i = 1; i <= N; i++)
		if (vis[i] == 0) DFS(i);
	return 0;
}