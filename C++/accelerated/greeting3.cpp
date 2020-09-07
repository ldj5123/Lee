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
	
	int pad, pad2;
	std::cout<<"input pad: ";
	std::cin>>pad;
	std::cout<<"input pad2: ";
	std::cin>>pad2;
	const int rows = pad * 2 + 3;
	const string::size_type cols = greeting.size() + pad2 * 2 + 2;
	
	std::cout << std::endl;
	
	int r = 0;
	for(int r = 0; r != rows; ++r){
		string::size_type c = 0;
		
		string line;
		if(r == 0 || r == rows-1){
			line = string(cols, '*');
		} else if (r != rows / 2){
			line = "* " + string(cols-2, ' ') + " *"; 
		} else {
			line = "* " + string(pad2, ' ') + greeting + string(pad2, ' ') + " *";
		}
		
		
		std::cout << line << std::endl;
	}
	
	return 0;
}
