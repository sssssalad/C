#include <bits/stdc++.h>
using namespace std;
int main(){
    set<string> myset = { "Nikita","Deep","Priya","Suman","Aman" };
    //定义一个名为myset、包含string元素的集合
    set<string> myset2;

    myset.insert("cyx");//在集合末尾插入新元素
    myset2.insert(myset.find("Deep"), myset.end());
    //myset里第一次出现“deep”的位置一直到集合末尾一同插入myset2
    //find()若找到元素则返回指向该元素的迭代器，否则返回指向集合末尾的迭代器set :: end()

    myset.erase("Priya");//删除指定值

    if (myset.count("Priya"))//查找指定值，元素存在则返回1
        cout << "键Priya存在\n";
    else cout << "键Priya不存在\n";
    
    cout << "myset的元素是: " << endl;
    set<string>::const_iterator it; // 声明一个名为it的迭代器
    it = myset.begin(); // 把it赋给集合的第一个元素
    while (it != myset.end()){
        cout << *it ;   // 打印it指向的元素的值
        ++it;           // 迭代到下一个元素
        if (it != myset.end()) cout << endl; //打印最后一个元素不输出空行
    }
    return 0;
}