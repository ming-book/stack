#pragma once
#include "pch.h"
#include <iostream>
using namespace std;
template <typename  T>
class stack {
private:
	T *stk; //起始地址
	int top;  //始终指向栈顶元素
	int MAXN; //栈的最大存储量
public:
	stack(int size);
	~stack();
	int push(T x);  //栈中添加元素
	int pop(T *pt); //栈中删除元素
	T getTop();//获取栈顶元素
	bool empty();   //堆栈为空则返回真
	int size();    //返回栈中元素数目
};

template <typename  T>
stack<T>::stack(int size) {
	MAXN = size;
	stk = new T[MAXN];
	top = -1;
}
template <typename T>
stack<T>::~stack() {
	delete stk;
}
template <typename T>
int stack<T>:: push(T x) {
	if (top > MAXN - 1) return -1;
	stk[++top] = x;
	return 0;

}
template <typename T>
int stack<T>:: pop(T *pt) {

	if (top == -1) return 0;
	pt = stk[top--];

}
template <typename T>
T stack<T>:: getTop() { 

	return stk[top];
}
template <typename T>
bool stack<T>::empty() {
	if (top == MAXN) return true;
	return false;

}
template <typename T>
int stack<T>::size() {
	return top+1;

}



int main()
{
	stack<int> s(100);
	int a = 10;
	s.push(a);
	int b = s.size();
	cout << "栈的大小是："<<b <<endl;


}
