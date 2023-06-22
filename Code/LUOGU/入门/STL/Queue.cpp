#include <iostream>
#include <queue>//队列
using namespace std;
void showsg(queue <int> sg){
	queue <int> ss = sg;
	while (!ss.empty()){
		cout << ' ' << ss.front();//第一个元素
		ss.pop();//删除第一个元素
	}
}
int main(){
	queue <int> q;
	q.push(10);//在末尾插入一个元素
	q.push(20);
	q.push(30);
	cout << "队列fquiz是 : ";
	showsg(q);
	cout << "\nfquiz.size() : " << q.size();
	cout << "\nfquiz.front() : " << q.front();
	cout << "\nfquiz.back() : " << q.back();//最后一个元素
	cout << "\nfquiz.pop() : ";
	q.pop();
	showsg(q);
	return 0;
}