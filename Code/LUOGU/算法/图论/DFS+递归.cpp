#include <iostream>
const int N = 5; //������
using namespace std;
//a����Ϊ����ͼ��ÿ���������������a[1][2]��ʾ1��2
int a[N][N] = {
	{ 0, 1, 1, 0, 0 },//���1
	{ 0, 0, 1, 0, 1 },//2
	{ 0, 0, 1, 0, 0 },
	{ 1, 1, 0, 0, 1 },
	{ 0, 0, 1, 0, 0 }
};
int vis[N + 1];//0��ʾδ���ʣ�1��ʾ�Ѿ�����
//vis[1]��ʾ��1������Ƿ񱻷��ʹ�
void DFS(int start){
	//�ȷ���Ҷ�ڵ㣬�����ĵ㲻���
	vis[start] = 1;
	for (int j = 1; j <= N; j++)
		//��Ϊstart��i����1��ʼ����ʾ�����е�ֵʱ�±�Ҫ-1
		if (vis[j]==0 && a[start - 1][j - 1] == 1) DFS(j);
	cout << start << " ";
}
int main(){
	memset(vis, 0, sizeof(vis));
	for (int i = 1; i <= N; i++)
		if (vis[i] == 0) DFS(i);
	return 0;
}
