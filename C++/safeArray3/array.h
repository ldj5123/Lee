#ifndef ARRAY_H
#define ARRAY_H

class Array{
protected:				// 자식쪽에서 부모의 프라이빗에 접근하게 하고싶을때 사용
	int *pArr_;
	int size_;
	
private:
	static const int ARRAYSIZE;

	
	void set_arr(const int *pArr, int size);
public:

//	Array* operator&();
//	const Array* operator&() const;
	
	explicit Array(int size = Array::ARRAYSIZE);
	Array(const int *pArr, int size);
	Array(const Array& rhs);
	virtual ~Array();
	
	Array& operator=(const Array& rhs);
	
	bool operator==(const Array& rhs) const;

	virtual int& operator[](int index);
	virtual const int& operator[](int index) const;
	
	int size() const;
};

#endif
