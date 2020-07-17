#ifndef BOUNDARRAY_H
#define BOUNDARRAY_H

#include "safeArray.h"

template <typename T>
class BoundArray : public SafeArray<T> {
private :
//	int upper_;
	int lower_;
	
public :
	BoundArray(int lower, int upper);
	BoundArray(int lower, int upper, const T *pArr);
//	BoundArray(const BoundArray& rhs);
//	~BoundArray();
//	BoundArray& operator=(const BoundArray& rhs);

	bool operator==(const BoundArray<T>& rhs) const;
	
	T& operator[](int index);
	const T& operator[](int index) const;
	
	int upper() const;
	int lower() const;
};

template <typename T>
BoundArray<T>::BoundArray(int lower, int upper)
: lower_(lower), SafeArray<T>(upper-lower+1)
{
	
}

template <typename T>
BoundArray<T>::BoundArray(int lower, int upper, const T *pArr)
: lower_(lower), SafeArray<T>(pArr + lower, upper-lower+1)
{

}

template <typename T>
bool BoundArray<T>::operator==(const BoundArray<T>& rhs) const
{
	if (lower_ != rhs.lower_)
		return false;
		
	return this->SafeArray<T>::operator==((SafeArray<T>)rhs);
}

template <typename T>
T& BoundArray<T>::operator[](int index)
{
	return this->SafeArray<T>::operator[](index - lower_);
}

template <typename T>
const T& BoundArray<T>::operator[](int index) const
{
	return this->SafeArray<T>::operator[](index - lower_);
}

template <typename T>
int BoundArray<T>::upper() const
{
	
	return lower_ + this->Array<T>::size_-1;		// lower_ + size_ -1;  손자 멤버함수도 조부모 protected 멤버에 있는것에 접근가능
}

template <typename T>
int BoundArray<T>::lower() const
{
	return lower_;		
}

#endif
