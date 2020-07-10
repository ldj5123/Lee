#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>


class Complex {
friend std::ostream& operator<<(std::ostream& out, const Complex& rhs);
private:
	static int numberOfComplex;
	double re_;
	double im_;
public:
	static int getNumberOfComplex();
	
	Complex(double re = 0.0, double im = 0.0);
	Complex(const Complex& rhs);
	~Complex();
	
	  
	bool operator==(const Complex& rhs) const;
	
	const Complex operator+(const Complex& rhs) const;
	const Complex operator-(const Complex& rhs) const;
	
	double real() const;
	double imag() const;
	
	void real(double re);
	void imag(double im);

};

#endif
