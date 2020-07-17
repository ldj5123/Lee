#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

class Rational {
friend ostream& operator<< (ostream& s, const Rational& r);
private:
	long num;
	long den;
	
	long gcd (long, long);
public:
	Rational (long n = 0, long d = 1);
//	~Rational ();
//	Rational& operator=(const Rational& rhs);
	Rational& operator=(long rhs);
	
	long numerator(void) const {return num;}
	long denominator(void) const {return den;}
	
	Rational operator+(void) const { return *this; }
	Rational operator-(void) const { return Rational (-num, den); }
	Rational invert(void) const { return Rational (den, num); }
	
	const Rational& operator+=(const Rational& rhs);
	const Rational& operator-=(const Rational& rhs);
	const Rational& operator*=(const Rational& rhs);
	const Rational& operator/=(const Rational& rhs);
	
	const Rational& operator+=(long rhs);
	const Rational& operator-=(long rhs);
	const Rational& operator*=(long rhs);
	const Rational& operator/=(long rhs);
	
	const Rational& operator++();
	const Rational operator++(int);
	const Rational& operator--();
	const Rational operator--(int);
};	

const Rational operator+(const Rational& l, const Rational& r);
const Rational operator-(const Rational& l, const Rational& r);
const Rational operator*(const Rational& l, const Rational& r);
const Rational operator/(const Rational& l, const Rational& r);

bool operator==(const Rational& lhs, const Rational& rhs);
bool operator!=(const Rational& lhs, const Rational& rhs);
bool operator<=(const Rational& lhs, const Rational& rhs);
bool operator>=(const Rational& lhs, const Rational& rhs);
bool operator<(const Rational& lhs, const Rational& rhs);
bool operator>(const Rational& lhs, const Rational& rhs);
	


Rational rabs(const Rational& rhs);

inline Rational& Rational::operator=(long rhs) {
	num = rhs;
	den = 1;
	return *this;
}

inline double toDouble (const Rational& r) {
	return double(r.numerator()) / r.denominator();
}

inline long trunc (const Rational& r) {
	return r.numerator() / r.denominator();
}

inline long floor(const Rational& r) {
	long q = r.numerator() / r.denominator();
	return (r.numerator() < 0 && r.denominator() != 1) ? --q : q;
}

inline long ceil(const Rational& r) {
	long q = r.numerator() / r.denominator();
	return (r.numerator() >= 0 && r.denominator() != 1) ? ++q : q;
}

Rational toRational(double x, int iterations = 5);
static Rational toRational(double x, double limit, int iterations);

Rational binomial(int n, int k) ;
Rational harmonic(int n);
Rational bernoulli (int n);

#endif
