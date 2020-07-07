#include "complex.h"
/*
Complex::Complex()
{
	this->re = 0.0;
	this->im = 0.0;
}

Complex::Complex(double re)
{
	this->re = re;
	this->im = 0.0;
}
*/
Complex::Complex(double re, double im)
{
	this->re = re;
	this->im = im;
}

Complex::Complex(const Complex& rhs)
{
	this->re = rhs.re;
	this->im = rhs.im;
}

Complex::~Complex()
{
	
}

void Complex::operator=(const Complex& rhs)
{
	this->re = rhs.re;
	this->im = rhs.im;
}

bool Complex::operator==(const Complex& rhs)
{
//	if (this->re == rhs.re && this->im == rhs.im)
//		return true;
//	else
//		return false;
		
	return (this->re == rhs.re && this->im == rhs.im);
}

const Complex Complex::operator+(const Complex& rhs)
{
	Complex result(this->re + rhs.re, this->im + rhs.im);
	
	return result;
}

const Complex Complex::operator-(const Complex& rhs)
{
	Complex result(this->re - rhs.re, this->im - rhs.im);
	
	return result;
}

double Complex::Real()
{
	return this->re;
}

double Complex::Imag()
{
	return this->im;
}

void Complex::Real(double re)
{
	this->re = re;
}

void Complex::Imag(double im)
{
	this->im = im;
}
