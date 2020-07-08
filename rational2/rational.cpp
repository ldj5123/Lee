#include "rational.h"
#include <iostream>
#include <cassert>

static int getGcd(int a, int b)
{

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
{
	assert(den != 0);
	this->num = num;
	this->den = den;
	
}

Rational::Rational(const Rational& rhs)
{
	assert(den != 0);
	this->num = rhs.num;
	this->den = rhs.den;
}

Rational::~Rational()
{
	
}

void Rational::operator=(const Rational& rhs)
{
	this->num = rhs.num;
	this->den = rhs.den;
}

bool Rational::operator==(const Rational& rhs)
{
	return (this->num == rhs.num && this->den == rhs.den);
}

const Rational Rational::operator+(const Rational& rhs)
{
	Rational result;
	result.den = this->den*rhs.den;
	result.num = rhs.den*this->num + this->den*rhs.num;
	result.reduce();
	return result;
}

const Rational Rational::operator-(const Rational& rhs)
{
	Rational result;
	result.den = this->den*rhs.den;
	result.num = rhs.den*this->num - this->den*rhs.num;
	result.reduce();
	return result;
}

const Rational Rational::operator*(const Rational& rhs)
{
	Rational result;
	result.den = this->den*rhs.den;
	result.num = this->num*rhs.num;
	result.reduce();
	return result;
}

const Rational Rational::operator/(const Rational& rhs)
{
	Rational result;
	result.den = this->den*rhs.num;
	result.num = this->num*rhs.den;
	result.reduce();
	return result;
}



int Rational::Num()
{
	return this->num;
}

int Rational::Den()
{
	return this->den;
}

void Rational::Num(int num)
{
	this->num = num;
}

void Rational::Den(int den)
{
	this->den = den;
}

void Rational::reduce()
{
	int gcd = getGcd(this->num, this->den);
	
	this->num = this->num / gcd;
	this->den = this->den / gcd;
	
}
