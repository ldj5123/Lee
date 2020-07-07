#ifndef RATIONAL_H
#define RATIONAL_H

class Rational{
private:
	int num;
	int den;

public:
	Rational(int num = 0, int den = 1);
	Rational(const Rational& rhs);
	
	~Rational();
	
	void operator=(const Rational& rhs);
	bool operator==(const Rational& rhs);
	const Rational operator+(const Rational& rhs);
	const Rational operator-(const Rational& rhs);
	const Rational operator*(const Rational& rhs);
	const Rational operator/(const Rational& rhs);
	int reduce(const Rational& rhs);
	
	
	int Num();
	int Den();
	
	void Num(int num);
	void Den(int den);

};

#endif
