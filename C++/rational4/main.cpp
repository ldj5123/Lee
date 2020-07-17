#include <iostream>
#include "rational.h"


int main()
{
	Rational r1;
	Rational r2(1, 2);	
	Rational r3(3, 4);
	Rational r4 = r3;
	
//	r1.Num(r3.Num());
//	r1.Den(r3.Den());

	r1 = r3;
	
	if( r1 == r3 )
		std::cout << "r1 and r3 are equal" << std::endl;
	else
		std::cout << "r1 and r3 are not equal" << std::endl;
	
	r4 = r1 + r2 + r3;
	
//	std::cout << "r1 : (" << r1.Num() << "/ " << r1.Den() << ")" << std::endl;
	std::cout << "r1 : " << r1 << std::endl;
	std::cout << "r2 : " << r2 << std::endl;
	std::cout << "r3 : " << r3 << std::endl;
	std::cout << "r1 + r2 : " << r4 << std::endl;
	
	r4 = r3 - r1;
	std::cout << "r3 - r1 : " << r4 << std::endl;
	
	r4 = r1 * r2;
	std::cout << "r1 * r2 : " << r4 << std::endl;
	
	r4 = r1 / r2;
	std::cout << "r1 / r2 : " << r4 << std::endl;
	
	Rational r5(16, 2);
	std::cout << "r5 : " << r5 << std::endl;
	
//	std::cout << "input r4 : ";
//	std::cin >> r4;
	
	const Rational r6 = r4;
	std::cout << "r6 : " << r6 << std::endl;
/*	
	Rational *pr = new Rational;
	Rational *pArr[5];
	pArr[0] = new Rational;
	pArr[1] = new Rational(2);
	pArr[2] = new Rational(2, 3);
	pArr[3] = new Rational;
	pArr[4] = new Rational;
	
	std::cout << "# Rational object : " << Rational::getNumberOfRational() << std::endl;
	
	delete pr;
	for (int i = 0; i < 5; ++i)
		delete pArr[i];
	std::cout << "# Rational object : " << Rational::getNumberOfRational() << std::endl;
	
*/

	std::cout << "\nn\tEuler Approx.\tHarmonic(n)" << std::endl;
	std::cout << "========================================" << std::endl;
	for (int n = 1; n < 25; ++n) {
		Rational r = harmonic(n);
		double g = toDouble(r) - log(n);
		g -= (1.0/(2*n)) * (1.0 - (1.0/(6*n)));
		std::cout << n << '\t' << g << '\t' << r << std::endl;
	}
	
	std::cout << endl << "n\tBernoulli (n)" << std::endl;
	std::cout << "==========================================" << std::endl;
	Rational b;
	for (int n = 0; n < 23; ++n) {
		if ((b = bernoulli(n)) != 0)
			std::cout << n << '\t' << b << std::endl;
	}
	return 0;
}
