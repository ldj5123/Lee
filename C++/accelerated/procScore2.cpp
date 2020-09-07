#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
#include <vector>
#include <algorithm>


using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::streamsize;
using std::setprecision;
using std::vector;
using std::sort;

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
	
	vector<double> homework;
	double d;
	while(cin >> d){
		homework.push_back(d);
	}
	
	int size = homework.size();
	if (size == 0){
		cout << "#homework is zero Please try again" << endl;
		return -1; 
	}
	
	sort(homework.begin(), homework.end());
	
	double median;
	int mid = size / 2;
	if (size % 2)
		median = homework[mid];
	else
		median = (homework[mid-1] + homework[mid]) / 2;
	
	streamsize prec = cout.precision();
	
	cout << "Your final score : " << setprecision(3) << 0.2 * midterm + 0.4 * final + 0.4 * median << setprecision(prec) << endl;
	
	return 0;
}
