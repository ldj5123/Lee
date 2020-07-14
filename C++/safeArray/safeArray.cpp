#include "safeArray.h"
#include <cassert>

const int SafeArray::SAFEARRAYSIZE = 100;

SafeArray::SafeArray(int size)
: Array(size)
{
	
}

SafeArray::SafeArray(const int *pArr, int size)
: Array(pArr, size)
{

}

SafeArray::SafeArray(const SafeArray& rhs)
: Array((Array)rhs)
{

}

SafeArray::~SafeArray()
{
						// 부모쪽에 있는 소멸자 자동 호출
}

SafeArray& SafeArray::operator=(const SafeArray& rhs)
{
	this->Array::operator=((Array)rhs);
	return *this;
}

bool SafeArray::operator==(const SafeArray& rhs) const
{
	return this->Array::operator==((Array)rhs);
}

int& SafeArray::operator[](int index)
{
	assert(index >= 0 && index < this->Array::size_);
	return this->Array::operator[](index);
}

const int& SafeArray::operator[](int index) const
{
	assert(index >= 0 && index < this->Array::size_);
	return this->Array::operator[](index);
}
