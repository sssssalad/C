#include<bits/stdc++.h>
using namespace std;
int ans, T, M, t[105],w[105];
void DFS(int d, int c){
	if (d == M){
		if (c > ans)ans = c; return;
	}
	DFS(d + 1, c + w[i]);
	DFS(d + 1, c);
}
int main() {
	cin >> T >> M;
	for (int i = 0; i < M; i++) {
		cin >> t[i] >> w[i];
	}
	for (int i = 0; i < M; i++) {
		DFS(t[i], w[i]);
	}
}
