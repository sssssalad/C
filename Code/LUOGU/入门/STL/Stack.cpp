#include <iostream>
#include <stack>
using namespace std;
void newstack(stack <int> ss){
	stack <int> sg = ss;
	while (!sg.empty()){//��ջ�ǿ�ʱִ��
		cout << ' ' << sg.top();//�������Ԫ��
		sg.pop();//ɾ������Ԫ��
	}
}
int main(){
	stack <int> newst;
	newst.push(55);//��ջ������Ԫ��
	newst.push(44);
	newst.push(33);
	newst.push(22);
	newst.push(11);
	cout << "���µĶ�ջΪ : ";
	newstack(newst);
	cout << "\n newst.size() : " << newst.size();//����ջ�Ĵ�С
	cout << "\n newst.top() : " << newst.top();
	cout << "\n newst.pop()�� ,���¶�ջΪ��";
	newst.pop();
	newstack(newst);
	cout << "\n newst.size() : " << newst.size();
	return 0;
}