#include <iostream>
#include <queue>//����
using namespace std;
void showsg(queue <int> sg){
	queue <int> ss = sg;
	while (!ss.empty()){
		cout << ' ' << ss.front();//��һ��Ԫ��
		ss.pop();//ɾ����һ��Ԫ��
	}
}
int main(){
	queue <int> q;
	q.push(10);//��ĩβ����һ��Ԫ��
	q.push(20);
	q.push(30);
	cout << "����fquiz�� : ";
	showsg(q);
	cout << "\nfquiz.size() : " << q.size();
	cout << "\nfquiz.front() : " << q.front();
	cout << "\nfquiz.back() : " << q.back();//���һ��Ԫ��
	cout << "\nfquiz.pop() : ";
	q.pop();
	showsg(q);
	return 0;
}