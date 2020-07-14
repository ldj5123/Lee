#include <iostream>
#include "rational.h"

int main()
{
	Rational r1;
	Rational r2(3);	
	Rational r3(3, 4);
	Rational r4 = r3;
	
//	r1.Num(r3.Num());
//	r1.Den(r3.Den());

	r1 = r3;
	
	if( r1 == r3 )
		std::cout << "r1 and r3 are equal" << std::endl;
	else
		std::cout << "r1 and r3 are not equal" << std::endl;
		
	r4 = r1 + r2;
	
	std::cout << "r1 : (" << r1.Num() << "/ " << r1.Den() << ")" << std::endl;
	std::cout << "r2 : (" << r2.Num() << "/ " << r2.Den() << ")" << std::endl;
	std::cout << "r3 : (" << r3.Num() << "/ " << r3.Den() << ")" << std::endl;
	std::cout << "r4 : (" << r4.Num() << "/ " << r4.Den() << ")" << std::endl;
	
	r4 = r2 - r1;
	std::cout << "r4 : (" << r4.Num() << "/ " << r4.Den() << ")" << std::endl;
	
	r4 = r1 * r2;
	std::cout << "r4 : (" << r4.Num() << "/ " << r4.Den() << ")" << std::endl;
	
	r4 = r1 / r2;
	std::cout << "r4 : (" << r4.Num() << "/ " << r4.Den() << ")" << std::endl;
	
	Rational r5(9, 12);
	r5.reduce();
	std::cout << "r5 : (" << r5.Num() << "/ " << r5.Den() << ")" << std::endl;
	
	
	
	
	
	
	return 0;
}
