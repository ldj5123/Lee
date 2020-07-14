#ifndef COMPLEX_H
#define COMPLEX_H

class Complex{
private:
	double re;
	double im;
	
public:
	//Complex();				// default constructor 입력값이 없는 생성자
	//Complex(double re);		// convert constructor 
	Complex(double re = 0.0, double im = 0.0);  // 기본인자 (default argument)
	//Complex(Complex c);						// 복사생성자는 인자의 타입이 const ttype의 reference다.  벨류를 넣게되면 복사생성자가 무한호출된다.
	Complex(const Complex& rhs);			// right hand side  copy constructor
	//Complex(const Complex* pc);			// 모양새가 안좋게 나온다.
	
	~Complex();						// destuctor 소멸자는 한가지 형태
	
//	void operator=(Complex c);		// 성능상의 문제가 많다. 벨류를 넣게되면 복사생성자가 무한호출된다.
//	void operator=(const Complex *pc);		// 성능은 문제없지만 모양새가 나쁘다.
	void operator=(const Complex& rhs);
	bool operator==(const Complex& rhs);		// 논리(false, true)를 나타내는 bool type 사용
	const Complex operator+(const Complex& rhs);
	const Complex operator-(const Complex& rhs);
	
	double Real();
	double Imag();
	
	void Real(double re);
	void Imag(double im);
};

#endif
