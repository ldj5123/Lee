#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>

class Rational{
friend std::ostream& operator<<(std::ostream& out, const Rational& rhs);
private:
	int num_;
	int den_;
public:
	Rational(int num = 0, int den = 1);
	//Rational(const Rational& rhs);
	//~Rational();
	
	//void operator=(const Rational& rhs);
	bool operator==(const Rational& rhs) const;
	const Rational operator+(const Rational& rhs) const;
	const Rational operator-(const Rational& rhs) const;
	const Rational operator*(const Rational& rhs) const;
	const Rational operator/(const Rational& rhs) const;

	int Num() const;
	int Den() const;
	
	void Num(int num);
	void Den(int den);
	
	void reduce();	

};

#endif
