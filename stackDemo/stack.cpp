#pragma  once
#include <iostream>
using namespace std;
template <typename  T>
class stack {
private:
	T *stk; //��ʼ��ַ
	int top;  //ʼ��ָ��ջ��Ԫ��
	int MAXN; //ջ�����洢��
public:
	stack(int size) { MAXN  = size}
	~stack();
	int push(T x);

};
