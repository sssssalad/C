#include<bits/stdc++.h>
using namespace std;
//n<=10,每复制一轮，矩阵的宽与高都翻2倍,初始宽4高2，
//需要矩阵[1024][2048]
int n, h = 2, w = 4;
char a[1050][2100];
//原矩阵要改变且需要迭代因此不能简单赋值给另一个矩阵b
int main() {
	cin >> n;
	memset(a, ' ', sizeof(a));
	a[1][1] = a[1][4] = ' ', a[1][2] = a[2][1] = '/';
	a[1][3] = a[2][4] = '\\',a[2][2] = a[2][3] = '_';
	for (int i = 1; i < n; i++) {//复制n次,生成“大小”为n的图腾要复制n-1次
		for (int j = 1; j <= h; j++) {
			for (int k = 1; k <= w; k++) {//复制一次n＋1的过程
				a[j + h][k] =  a[j][k];//向下
				a[j + h][k + w] = a[j][k];//向右
				a[j][k] = ' ';//复制后把原图像清空
			}
		}
		//由于向上复制时原位置有值，因此不能和向下+右一同复制，需将上方清空后赋值
		//向上，用下方的图像进行复制（上方已清空
		for (int j = 1; j <= h; j++) {
			for (int k = 1; k <= w; k++) {//复制一次n＋1的过程
				a[j][k + w / 2] = a[j+h][k];//向下
			}
		}
		w *= 2, h *= 2;
	}
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++)
			cout << a[i][j];
		if(i!=h) cout << endl;
	}
	return 0;
}