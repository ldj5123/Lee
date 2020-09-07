#include <iostream>
#include <string>
#include <ios>
#include <iomanip>


using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::streamsize;
using std::setprecision;

int main()
{
	cout << "input your name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << endl;
	
	cout << "input your mid final score: ";
	double midterm, final;
	cin >> midterm >> final;
	
	cout << "input your homework score: ";
	int count = 0;
	double sum = 0.0;
	
	double d;
	while(cin >> d){
		++count;
		sum += d;
	}
	
	streamsize prec = cout.precision();
	
	cout << "Your final score : " << setprecision(3) << 0.2 * midterm + 0.4 * final + 0.4 * sum / count << setprecision(prec) << endl;
	
	return 0;
}
