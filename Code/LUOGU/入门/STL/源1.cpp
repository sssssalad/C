#include <iostream>
#include<stack> //堆
const int N = 19; //结点个数
using namespace std;
//maze矩阵为有向图中每个结点的连接情况，maze[1][2]表示1→2
int a[N][N]={0,};
int vis[N + 1];//0表示未访问，1表示已经访问
//vis[1]表示元素1是否被访问过
bool is_push;
void DFS(int start) {
	stack<int> s;
	s.push(start);//先把新元素插到堆的最后，然后自下而上，不断与父节点比较，让元素往上浮。
	vis[start] = 1;
	while (!s.empty()) {//s.empty()将堆清空
		is_push = false;
		int v = s.top();//返回堆栈的顶部元素
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
