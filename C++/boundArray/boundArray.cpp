#include "boundArray.h"

BoundArray::BoundArray(int lower, int upper)
: lower_(lower), SafeArray(upper-lower+1)
{
	
}

BoundArray::BoundArray(int lower, int upper, const int *pArr)
: lower_(lower), SafeArray(pArr + lower, upper-lower+1)
{

}

bool BoundArray::operator==(const BoundArray& rhs) const
{
	if (lower_ != rhs.lower_)
		return false;
		
	return this->SafeArray::operator==((SafeArray)rhs);
}

int& BoundArray::operator[](int index)
{
	return this->SafeArray::operator[](index - lower_);
}

const int& BoundArray::operator[](int index) const
{
	return this->SafeArray::operator[](index - lower_);
}

int BoundArray::upper() const
{
	
	return lower_ + this->Array::size_-1;		// lower_ + size_;
}

int BoundArray::lower() const
{
	return lower_;		
}
