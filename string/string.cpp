#include <cstring>
#include <cassert>
#include "string.h"

String::String(const char *str, bool )
{
	this->str = str;
	this->len = strlen(str);
}

void String::set_str(const char *str)
{
	if(str ){
		this->len = strlen(str);
		this->str = new char[this->len + 1];
		assert(this->str );
		strcpy(this->str, str);
	} else {
		this->len = 0;
		this->str =	new char[1];		
		assert(this->str );
		this->str[0] = '\0';
	}
}
/*
String::String()
{
	this->set_str(NULL);
}
*/
String::String(const char *str)
{
	this->set_str(str);
}

String::String(const String& rhs)
{
	this->set_str(rhs.str);
}

String::~String()
{
	delete [] this->str;		// 대괄호 : 배열공간을 해제
}

String& String::operator=(const String& rhs)
{
	if(this != &rhs) {			// 같은걸 치환하면 delete 떄문에 데이터가 없어지기때문에 조건으로 방지
		delete [] this->str;
		this->set_str(rhs.str);
	}
	return *this;
}

String& String::operator=(const char *rhs)
{
	if (this->str != str) {
		delete [] this->str;
		this->set_str(str);
	}
	return *this;
}
/*
const String String::operator+(const String& rhs)
{
	char *buf = new char[this->len + rhs.len + 1];
	strcpy(buf, this->str);
	strcat(buf, rhs.str);
	
	String result(buf);
	delete [] buf;
	
	return result;
}
*/
const String String::operator+(const String& rhs)
{
	char *buf = new char[this->len + rhs.len + 1];
	strcpy(buf, this->str);
	strcat(buf, rhs.str);
	
	String result(buf, true);
	//delete [] buf;
	
	return result;
}

bool String::operator==(const String& rhs)
{
	return strcmp(this->str, rhs.str) == 0;
}

const char *String::c_str()
{
	return this->str;
}

int String::length()
{
	return this->len;
}
