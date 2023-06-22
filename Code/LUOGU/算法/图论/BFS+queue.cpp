#include <iostream>
#include<queue>
const int N = 5; //结点个数
using namespace std;
//a矩阵为有向图中每个结点的连接情况，a[1][2]表示1→2
int a[N][N] = {
	{ 0, 1, 1, 0, 0 },//结点1
	{ 0, 0, 1, 1, 0 },//2
	{ 0, 1, 1, 1, 0 },
	{ 1, 0, 0, 0, 0 },
	{ 0, 0, 1, 1, 0 }
};
int vis[N + 1];//0表示未访问，1表示已经访问
//vis[1]表示第1个结点是否被访问过
void BFS(int start){
	queue<int> Q;
	Q.push(start);//起始节点放入队列中
	vis[start] = 1;
	while (!Q.empty()) {
		int front = Q.front();//队列第一个元素
		cout << front << " ";
		Q.pop();//删除第一个元素
		for (int j = 1; j <= N; j++) {
			if (vis[j]==0 && a[front - 1][j - 1] == 1){
				vis[j] = 1;
				Q.push(j);//在末尾插入元素
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