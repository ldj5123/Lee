#ifndef STACK_H
#define STACK_H


class Stack {
private:

	int *pArr;
	int size;
	int tos;	

public:
	Stack(int size);	// 생성자(constructor)
	~Stack();			// 소멸자(destructor)

	void push (int data);
	int pop ();
};

#endif
