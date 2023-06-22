#include <iostream>
#include<stack> //��
const int N = 5; //������
using namespace std;
//maze����Ϊ����ͼ��ÿ���������������maze[1][2]��ʾ1��2
int a[N][N] = {
	{ 0, 1, 1, 0, 0 },//���1
	{ 0, 0, 1, 0, 1 },//2
	{ 0, 0, 1, 0, 0 },
	{ 1, 1, 0, 0, 1 },
	{ 0, 0, 1, 0, 0 }
};
int vis[N + 1];//0��ʾδ���ʣ�1��ʾ�Ѿ�����
//vis[1]��ʾԪ��1�Ƿ񱻷��ʹ�

bool flag;//�����Ԫ���Ƿ������
void DFS(int start){
	//�ȷ���Ҷ�ڵ㣬�����ĵ㲻���
	stack<int> s;
	s.push(start);//����Ԫ�ز���ջ��
	vis[start] = 1;
	while (!s.empty()) {//s�ǿ�ʱִ��
		int v = s.top();
		flag = false;
		for (int j = 1; j <= N; j++) {
			if (vis[j]==0 && a[v - 1][j - 1] == 1) {
				vis[j] = 1;//���Ϊ�ѷ��ʹ�
				s.push(j);//���µ�δ����Ԫ�ز���ջ��
				flag = true;//ʹ�����ĵ㲻���
				break;
			}
		}
		if (!flag) {
			cout << v << " ";
			s.pop();
		}
	}
}
int main() {
	memset(vis, 0, sizeof(vis));
	for (int i = 1; i <= N; i++)
		if (vis[i] == 0) DFS(i);
	return 0;
}
