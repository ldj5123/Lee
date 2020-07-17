#ifndef STRINGREP_H
#define STRINGREP_H

class StringRep {			// body
friend class String;		// handle
private:
	char *str_;
	int len_;
	int rc_;
	
	StringRep();
	StringRep(const char *s);
	StringRep(const char *s, bool);
	~StringRep();	
	
	StringRep(const StringRep& rhs);		// not use
	StringRep& operator=(const StringRep& rhs);	// not use
public:

		
};

#include <cassert>
#include <cstring>

inline StringRep::StringRep(const char *s, bool)
: str_((char *)s), len_(strlen(s))
{

}

inline StringRep::StringRep()
: str_(new char[1]), len_(1)
{
	assert(str_ );
	str_[0] = '\0';
}

inline StringRep::StringRep(const char *s)
: str_(new char[strlen(s) +1]), len_(strlen(s))
{
	assert(str_ );
	strcpy(str_, s);
}

inline StringRep::~StringRep()
{
	delete [] str_;
}


#endif
