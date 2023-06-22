#include <iostream>
#include <stack>
using namespace std;
void newstack(stack <int> ss){
	stack <int> sg = ss;
	while (!sg.empty()){//堆栈非空时执行
		cout << ' ' << sg.top();//输出顶部元素
		sg.pop();//删除顶部元素
	}
}
int main(){
	stack <int> newst;
	newst.push(55);//在栈顶插入元素
	newst.push(44);
	newst.push(33);
	newst.push(22);
	newst.push(11);
	cout << "最新的堆栈为 : ";
	newstack(newst);
	cout << "\n newst.size() : " << newst.size();//返回栈的大小
	cout << "\n newst.top() : " << newst.top();
	cout << "\n newst.pop()后 ,最新堆栈为：";
	newst.pop();
	newstack(newst);
	cout << "\n newst.size() : " << newst.size();
	return 0;
}