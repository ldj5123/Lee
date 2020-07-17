#ifndef STRING_H
#define STRING_H

#include <iostream>
#include "stringRep.h"


class String{
friend std::ostream& operator<<(std::ostream& out, const String& rhs);
private:
//	char *str;
//	int len;
	StringRep *ptr_;
	
	String(const char *str, bool);
	
public:
//	String();
	String(const char *str = NULL);
	String(const String& rhs);
	~String();
	
	String& operator=(const String& rhs);	// daisy-chain이 가능하기 위해서는 반환값이 String&이 되어야한다.
	String& operator=(const char *str);
	
	bool operator==(const String& rhs) const;
	
	const String operator+(const String& rhs) const;
	
	const char *c_str() const { return ptr_->str_; }			// 선언과 동시에 정의하면 컴파일러가 inline으로 만들어줌
	int length() const { return ptr_->len_; }
};

inline std::ostream& operator<<(std::ostream& out, const String& rhs)
{
	return out << rhs.c_str();
}

inline String::String (const char *str, bool)
{
	ptr_ = new StringRep(str, true);
	ptr_->rc_ = 1;
}

inline String::String(const char *str)
{
	if (str ) {
		ptr_ = new StringRep(str);
	} else {
		ptr_ = new StringRep();
	}
	ptr_->rc_ = 1;
}

inline String::String(const String& rhs)
{
	ptr_ = rhs.ptr_;
	++ptr_->rc_;
}

inline String::~String()
{
	--ptr_->rc_;
	if(ptr_->rc_ == 0)
		delete ptr_;
}

#endif
