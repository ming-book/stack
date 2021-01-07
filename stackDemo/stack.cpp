#pragma once
#include "pch.h"
#include <iostream>
using namespace std;
template <typename  T>
class stack {
private:
	T *stk; //��ʼ��ַ
	int top;  //ʼ��ָ��ջ��Ԫ��
	int MAXN; //ջ�����洢��
public:
	stack(int size);
	~stack();
	int push(T x);  //ջ�����Ԫ��
	int pop(T *pt); //ջ��ɾ��Ԫ��
	T getTop();//��ȡջ��Ԫ��
	bool empty();   //��ջΪ���򷵻���
	int size();    //����ջ��Ԫ����Ŀ
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
	cout << "ջ�Ĵ�С�ǣ�"<<b <<endl;


}
