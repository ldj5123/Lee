#include <cassert>
#include <stdio.h>
#include "list.h"

List::List()
{
	ptr_ = new Node;
	assert(ptr_ );
	ptr_->data_ = -1;
	ptr_->next_ = 0;
}

List::List(const List& rhs)
{
	ptr_ = new Node;
	assert(ptr_ );
	ptr_->data_ = rhs.ptr_->data_;
	ptr_->next_ = rhs.ptr_->next_;
}

List::~List()
{
	delete [] ptr_;
}

void List::insertFirstNode(const List& rhs, int data)
{
	Node *ptr = new Node;
	assert(ptr );
	ptr->data_ = data;
	ptr->next_ = rhs.ptr_->next_;
	rhs.ptr_->next_ = ptr;
}

void List::insertNode(const List& rhs, int preData, int data)
{
	Node *ptr = rhs.ptr_->next_;
	while(ptr ){
		if (ptr->data_ == preData)
			break;
		ptr = ptr->next_;
	}
	
	if(ptr ){
		Node *tmp = new Node;
		assert(tmp );
		tmp->data_ = data;
		tmp->next_ = ptr->next_;
		ptr->next_ = tmp;
	}
}

void List::deleteNode(const List& rhs, int data)
{
	Node *ptr1 = rhs.ptr_->next_;
	Node *ptr2 = rhs.ptr_;
	
	while(ptr1 ){
		if (ptr1->data_ == data)
			break;
			
		ptr1 = ptr1->next_;
		ptr2 = ptr2->next_;
	}
	
	if(ptr1 ){
		ptr2->next_ = ptr1->next_;
		delete ptr1;
	}
}

void List::printList(const List& rhs)
{
	Node *ptr1 = rhs.ptr_->next_;
	printf("[");
	while(ptr1 ){
		printf("%d%s", ptr1->data_, (ptr1->next_ ) ? ", " : "");
		ptr1 = ptr1->next_;
	}
	printf("]");
	printf("\n");
}
