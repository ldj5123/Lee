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

#endif
