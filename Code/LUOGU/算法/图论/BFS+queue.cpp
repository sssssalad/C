#include <iostream>
#include<queue>
const int N = 5; //������
using namespace std;
//a����Ϊ����ͼ��ÿ���������������a[1][2]��ʾ1��2
int a[N][N] = {
	{ 0, 1, 1, 0, 0 },//���1
	{ 0, 0, 1, 1, 0 },//2
	{ 0, 1, 1, 1, 0 },
	{ 1, 0, 0, 0, 0 },
	{ 0, 0, 1, 1, 0 }
};
int vis[N + 1];//0��ʾδ���ʣ�1��ʾ�Ѿ�����
//vis[1]��ʾ��1������Ƿ񱻷��ʹ�
void BFS(int start){
	queue<int> Q;
	Q.push(start);//��ʼ�ڵ���������
	vis[start] = 1;
	while (!Q.empty()) {
		int front = Q.front();//���е�һ��Ԫ��
		cout << front << " ";
		Q.pop();//ɾ����һ��Ԫ��
		for (int j = 1; j <= N; j++) {
			if (vis[j]==0 && a[front - 1][j - 1] == 1){
				vis[j] = 1;
				Q.push(j);//��ĩβ����Ԫ��
			}
		}
	}
}
int main() {
	memset(vis, 0, sizeof(vis));
	for (int i = 1; i <= N; i++)
		if (vis[i] == 0) BFS(i);
	return 0;
}