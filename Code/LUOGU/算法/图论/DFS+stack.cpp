#include <iostream>
#include<stack> //堆
const int N = 5; //结点个数
using namespace std;
//maze矩阵为有向图中每个结点的连接情况，maze[1][2]表示1→2
int a[N][N] = {
	{ 0, 1, 1, 0, 0 },//结点1
	{ 0, 0, 1, 0, 1 },//2
	{ 0, 0, 1, 0, 0 },
	{ 1, 1, 0, 0, 1 },
	{ 0, 0, 1, 0, 0 }
};
int vis[N + 1];//0表示未访问，1表示已经访问
//vis[1]表示元素1是否被访问过

bool flag;//做标记元素是否需输出
void DFS(int start){
	//先访问叶节点，经过的点不输出
	stack<int> s;
	s.push(start);//把新元素插入栈顶
	vis[start] = 1;
	while (!s.empty()) {//s非空时执行
		int v = s.top();
		flag = false;
		for (int j = 1; j <= N; j++) {
			if (vis[j]==0 && a[v - 1][j - 1] == 1) {
				vis[j] = 1;//标记为已访问过
				s.push(j);//把新的未访问元素插入栈顶
				flag = true;//使经过的点不输出
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
