#include<bits/stdc++.h>
using namespace std;
//不要把问题想复杂！！注意赋值时==,尽量避免TLE
int r_num, s, a, b, c, d;
bool m[1050][1050];
int turn( int a, int b, int c, int d) {
	int a2b = (b + a) / 2, c2d = (d + c) / 2;
	if (b - a + 1 == 2) return 0;
	for (int i = a; i < b; i++)
		for (int j = c; j < d; j++)
			if (i < a2b && j < c2d) m[i][j] = 0;
	turn(a, a2b, c2d, d);
	turn(a2b, b, c, c2d);
	turn(a2b, b, c2d, d);
}
int main() {
	cin >> r_num;
	s = pow(2, r_num);
	memset(m, 1, sizeof(m));
	turn(0, s, 0, s);
	for (int i = 0; i < s; i++) {
		for (int j = 0; j < s; j++) {
			cout << m[i][j];
			if (j < s - 1) cout << " ";
			else if (i < s - 1) cout << endl;
		}
	}
	return 0;
}