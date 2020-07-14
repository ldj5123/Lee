#include <iostream>
#include "complex.h"

int main()
{
	Complex c1;					// (0. 0i)
	//Complex c2(3.0);			// (3. 0i)
	Complex c2 = 3.0;
	Complex c3(3.0, 4.0);		// (3. 4i)
	Complex c4 = c3;			// Complex c4(c3);		같은 클래스 개체로 객체생성
	
	//Complex c4(&c3);			
	
//	c1.Real(c3.Real());
//	c1.Imag(c3.Imag());
	c1 = c3;					// operator=(c1, c3) or c1.operator=(c3)
	
	//c1.operator=(&c3);			// c1 = &c3;
	
	if (c1 == c3)				// operator==(c1, c3) or c1.operator(c1,c3);
		std::cout << "c1 and c3 are equal" << std::endl;
	else
		std::cout << "c1 and c3 are not equal" << std::endl;
	
	c4 = c1 + c2;				// c4.operator=(c1.operator+(c2))
	
	std::cout << "c1 : (" << c1.Real() << ", " << c1.Imag() << "i)" << std::endl;
	std::cout << "c2 : (" << c2.Real() << ", " << c2.Imag() << "i)" << std::endl;
	std::cout << "c3 : (" << c3.Real() << ", " << c3.Imag() << "i)" << std::endl;
	std::cout << "c4 : (" << c4.Real() << ", " << c4.Imag() << "i)" << std::endl;
	c4 = c1 + c2;
	std::cout << "c4 : (" << c4.Real() << ", " << c4.Imag() << "i)" << std::endl;
	
	return 0;
}
