#include <iostream>
#include <string>

using std::string;

int main()
{
	string name;
	std::cout<<"input yout name: ";
	std::cin>>name;
	
	const string greeting = "Hello, " + name + "!"; //  == std::string greeting("Hello, " + name + "!");
	
	const string spaces(greeting.size(), ' ');
	const string second = "* " + spaces + " *";
	
	int pad;
	std::cout<<"input pad: ";
	std::cin>>pad;
	const int rows = pad * 2 + 3;
	const string::size_type cols = greeting.size() + pad * 2 + 2;
	
	std::cout << std::endl;
	
	int r = 0;
	for(int r = 0; r != rows; ++r){
		string::size_type c = 0;
		while(c != cols){
			if(r == pad + 1 && c == pad + 1){
				// greeting msg
				std::cout << greeting;
				c += greeting.size();
			} else {
				// '*' or ' '
				if(r == 0 || r == rows-1 || c == 0 || c == cols-1)
					std::cout << '*';
				else
					std::cout << ' ';
				++c;
			}
			
		}
		std::cout << std::endl;
	}
	
	return 0;
}
