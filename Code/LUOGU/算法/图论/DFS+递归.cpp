#include <iostream>
const int N = 5; //结点个数
using namespace std;
//a矩阵为有向图中每个结点的连接情况，a[1][2]表示1→2
int a[N][N] = {
	{ 0, 1, 1, 0, 0 },//结点1
	{ 0, 0, 1, 0, 1 },//2
	{ 0, 0, 1, 0, 0 },
	{ 1, 1, 0, 0, 1 },
	{ 0, 0, 1, 0, 0 }
};
int vis[N + 1];//0表示未访问，1表示已经访问
//vis[1]表示第1个结点是否被访问过
void DFS(int start){
	//先访问叶节点，经过的点不输出
	vis[start] = 1;
	for (int j = 1; j <= N; j++)
		//因为start和i都从1开始，表示矩阵中的值时下标要-1
		if (vis[j]==0 && a[start - 1][j - 1] == 1) DFS(j);
	cout << start << " ";
}
int main(){
	memset(vis, 0, sizeof(vis));
	for (int i = 1; i <= N; i++)
		if (vis[i] == 0) DFS(i);
	return 0;
}
