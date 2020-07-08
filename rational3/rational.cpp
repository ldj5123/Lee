#include "rational.h"
#include <cassert>

std::ostream& operator<<(std::ostream& out, const Rational& rhs)
{
	out << rhs.num_ << "/ " << rhs.den_;
	
	return out;
}

static int getGcd(int a, int b)
{
	if (a == 0 || b == 0)
		return 1;
	while(1){
		if(b>a){
			int tmp = a;
			a = b;
			b = tmp;
		}
		a = a % b;
		if(a==0)
			return b;
		if(b%a!=0)
			a = b % a;
	}

}


Rational::Rational(int num, int den)
: num_(num), den_(den)
{

}

bool Rational::operator==(const Rational& rhs) const
{
	return (num_ == rhs.num_ && den_ == rhs.den_);
}

const Rational Rational::operator+(const Rational& rhs) const
{
	Rational result;
	result.den_ = den_*rhs.den_;
	result.num_ = rhs.den_ * num_ + den_ * rhs.num_;
	result.reduce();
	return result;
}

const Rational Rational::operator-(const Rational& rhs)const
{
	Rational result;
	result.den_ = den_ * rhs.den_;
	result.num_ = rhs.den_* num_ - den_ * rhs.num_;
	result.reduce();
	return result;
}

const Rational Rational::operator*(const Rational& rhs) const
{
	Rational result;
	result.den_ = den_ * rhs.den_;
	result.num_ = num_ * rhs.num_;
	result.reduce();
	return result;
}

const Rational Rational::operator/(const Rational& rhs) const
{
	Rational result;
	result.den_ = den_ * rhs.num_;
	result.num_ = num_ * rhs.den_;
	result.reduce();
	return result;
}



int Rational::Num() const
{
	return num_;
}

int Rational::Den() const
{
	return den_;
}

void Rational::Num(int num)
{
	num_ = num;
}

void Rational::Den(int den)
{
	den_ = den;
}

void Rational::reduce()
{
	int gcd = getGcd(num_, den_);
	
	num_ = num_ / gcd;
	den_ = den_ / gcd;
	
}
