#include <iostream>
#include<stack> //��
const int N = 19; //������
using namespace std;
//maze����Ϊ����ͼ��ÿ���������������maze[1][2]��ʾ1��2
int a[N][N]={0,};
int vis[N + 1];//0��ʾδ���ʣ�1��ʾ�Ѿ�����
//vis[1]��ʾԪ��1�Ƿ񱻷��ʹ�
bool is_push;
void DFS(int start) {
	stack<int> s;
	s.push(start);//�Ȱ���Ԫ�ز嵽�ѵ����Ȼ�����¶��ϣ������븸�ڵ�Ƚϣ���Ԫ�����ϸ���
	vis[start] = 1;
	while (!s.empty()) {//s.empty()�������
		is_push = false;
		int v = s.top();//���ض�ջ�Ķ���Ԫ��
		for (int i = 1; i <= N; i++) {
			if (vis[i] == 0 && a[v - 1][i - 1] == 1) {
				vis[i] = 1;
				s.push(i);
				is_push = true;
				break;
			}
		}
		if (is_push == false) {
			cout << v << " ";
			s.pop();
		}
	}
}
int main() {
	memset(vis, 0, sizeof(vis));
	a[0][2] = a[0][3] = a[0][4] =a[1][6] = 1;
	a[0][1] = a[1][9] = a[3][6] = a[3][9] = a[6][10] = a[7][11] = 2;
	for (int i = 1; i <= N; i++)
		if (vis[i] == 0) DFS(i);
	return 0;
}
