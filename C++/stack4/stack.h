#ifndef STACK_H
#define STACK_H
#include "array.h"

template <typename T>
class Stack {
private:
	static const int STACKSIZE;
	

	Array<T> arr_;
	int tos_;
	
public:
	explicit Stack(int size = Stack<T>::STACKSIZE, int tos = 0);
	bool operator==(const Stack<T>& rhs) const;
	
	int size() const;
	
	void push(const T& data);
	const T pop();
};

#include <cassert>

template <typename T>
const int Stack<T>::STACKSIZE = 100;

template <typename T>
Stack<T>::Stack(int size, int tos)
:arr_(size), tos_(tos) 
{

}

template <typename T>
bool Stack<T>::operator==(const Stack<T>& rhs) const
{
	if (tos_ != rhs.tos_)
		return 0;
	
	return arr_ == rhs.arr_;
}

template <typename T>
int Stack<T>::size() const
{
	return arr_.size();
}

template <typename T>
void Stack<T>::push(const T& data)
{
	assert(tos_ != arr_.size());
	arr_[tos_] = data;
	++tos_;
}

template <typename T>
const T Stack<T>::pop()
{
	assert(tos_ != 0);
	--tos_;
	return arr_[tos_];
}
#endif
