#include <cassert>
//#include <stdlib.h>
#include "stack.h"

Stack::Stack(int size)
{
	// this->pArr = (int *)malloc (sizeof(int) * size);  // 하나당 크기를 배열의 갯수와 곱해서 동적할당을 해준다.
	this->pArr = new int[size];
	assert(this->pArr );//조건이 참이면 진행, 거짓이면 프로그램이 죽는다.  !=NULL 생략
	this->size = size;
	this->tos = 0;
}

Stack::~Stack()
{
	// free(this->pArr);
	delete [] this->pArr;
}

void Stack::push(int data)
{
	assert(this->tos != this->size);
	
	/*if (this->tos == this->size){
		fprintf(stderr, "stack is full\n");
		//stdout 버퍼를 쓴다. stderr 버퍼를 쓰지 않는다.
		exit(1);
		}
	*/
	
	
	this->pArr[this->tos] = data;
	++this->tos;		
}

int Stack::pop()
{
		assert(this->tos );   //!=NULL생략, 포인터에 적용,
/*if (this->tos ==0){
		fprintf(stderr, "stack is empty\n");
		exit(2);
	}
	*/
	
	--this->tos;
	return this->pArr[this->tos];
}
