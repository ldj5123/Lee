#include "rational.h"
#include <iostream>
#include <cassert>


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
	int gcd = reduce(result);
	result.den = result.den / gcd;
	result.num = result.num / gcd;
	return result;
}

const Rational Rational::operator-(const Rational& rhs)
{
	Rational result;
	result.den = this->den*rhs.den;
	result.num = rhs.den*this->num - this->den*rhs.num;
	int gcd = reduce(result);
	result.den = result.den / gcd;
	result.num = result.num / gcd;
	return result;
}

const Rational Rational::operator*(const Rational& rhs)
{
	Rational result;
	result.den = this->den*rhs.den;
	result.num = this->num*rhs.num;
	int gcd = reduce(result);
	result.den = result.den / gcd;
	result.num = result.num / gcd;
	return result;
}

const Rational Rational::operator/(const Rational& rhs)
{
	Rational result;
	result.den = this->den*rhs.num;
	result.num = this->num*rhs.den;
	int gcd = reduce(result);
	result.den = result.den / gcd;
	result.num = result.num / gcd;
	return result;
}

int Rational::reduce(const Rational& rhs)
{
	this->num = rhs.num;
	this->den = rhs.den;
	std::cout << "r11 : (" << this->num << "/ " << this->den << ")" << std::endl;
	while(1){
		if(this->den > this->num){
			int tmp = this->num;
			this->num = this->den;
			this->den = tmp;
		}
		this->num = this->num % this->den;
		if(this->num==0)
			return this->den;
		if(this->den % this->num!=0)
			this->num = this->den % this->num;
	}
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
