#ifndef STRING_H
#define STRING_H

#include <iostream>

class String{
friend std::ostream& operator<<(std::ostream& out, const String& rhs);
private:
	char *str;
	int len;
	void set_str(const char *str);			// helper func. tool func.
	String(const char *str, bool );
public:
//	String();
	String(const char *str = NULL);
	String(const String& rhs);
	~String();
	
	String& operator=(const String& rhs);	// daisy-chain이 가능하기 위해서는 반환값이 String&이 되어야한다.
	String& operator=(const char *str);
	
	bool operator==(const String& rhs);
	
	const String operator+(const String& rhs);
	
	const char *c_str();
	int length();
};

#endif
