#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
class Array {
protected:
	T *pArr_;
	int size_;
private:
	static const int ARRAYSIZE;
	
	void set_arr(const T *pArr, int size);
public:

//	Array* operator&();
//	const Array* operator&() const;
	
	explicit Array(int size = Array<T>::ARRAYSIZE);
	Array(const T *pArr, int size);
	Array(const Array<T>& rhs);
	virtual ~Array();
	
	Array<T>& operator=(const Array<T>& rhs);
	
	bool operator==(const Array<T>& rhs) const;

	virtual T& operator[](int index);
	virtual const T& operator[](int index) const;
	
	int size() const;
};

#include <cassert>

template <typename T>
const int Array<T>::ARRAYSIZE = 100;

template <typename T>
void Array<T>::set_arr(const T *pArr, int size)
{
	this->pArr_ = new T[size];
	assert(this->pArr_);
	this->size_ = size;
	
	for (int i = 0; i < size; ++i)
		this->pArr_[i] = pArr[i];
}

template <typename T>
Array<T>::Array(int size)
:pArr_(new T[size]), size_(size)
{
	assert(this->pArr_ );
}

template <typename T>
Array<T>::Array(const T *pArr, int size)
{
	this->set_arr(pArr,size);
}

template <typename T>
Array<T>::Array(const Array<T>& rhs)
{
	this->set_arr(rhs.pArr_, rhs.size_);
}

template <typename T>
Array<T>::~Array()
{
	delete [] this->pArr_;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& rhs)
{
	if (this != &rhs) {
		delete [] this->pArr_;
		
		this->set_arr(rhs.pArr_, rhs.size_);
	}
	return *this;
}

template <typename T>
bool Array<T>::operator==(const Array<T>& rhs) const
{
	if (this->size_ != rhs.size_)
		return false;
	int i;
	for (i = 0; i <rhs.size_ ; ++i)
		if(this->pArr_[i] != rhs.pArr_[i])
			break;
	return (i == rhs.size_);
}

template <typename T>
T& Array<T>::operator[](int index)
{
	return this->pArr_[index];
}

template <typename T>
const T& Array<T>::operator[](int index) const
{
	return this->pArr_[index];
}

template <typename T>
int Array<T>::size() const
{
	return this->size_;
}



#endif
