#pragma  once
#include <iostream>
using namespace std;
template <typename  T>
class stack {
private:
	T *stk; //起始地址
	int top;  //始终指向栈顶元素
	int MAXN; //栈的最大存储量
public:
	stack(int size) { MAXN  = size}
	~stack();
	int push(T x);

};
