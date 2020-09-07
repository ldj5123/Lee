#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <stdexcept>


using std::istream;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::streamsize;
using std::setprecision;
using std::vector;
using std::sort;
using std::domain_error;

double median(vector<double> vec)
{
	typedef vector<double>::size_type vec_sz;
	vec_sz size = vec.size();
	
	if(size == 0)
		throw domain_error("median of an empty vector");
		
	sort(vec.begin(), vec.end());
	
	vec_sz mid = size / 2;
	return (size % 2) ? vec[mid] : (vec[mid-1] + vec[mid]) / 2;
	
}


double grade(double midterm, double final, double homework)
{
	return 0.2 * midterm + 0.4 * final +  0.4 * homework;
}

double grade(double midterm, double final, const vector<double>& homework)
{
	if (homework.size() == 0)
		throw domain_error("student has done no homework");
	
	return grade(midterm, final, median(homework));
}

istream& read_hw(istream& in, vector<double>& hw)
{
	if (in ){
		hw.clear();
		double d;
		while (in >> d)
			hw.push_back(d);
		in.clear();
	}
	
	return in;
}

int main()
{
	cout << "input your name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << endl;
	
	cout << "input your mid final score: ";
	double midterm, final;
	cin >> midterm >> final;
	
	
	try {
		vector<double> homework;
		
		read_hw(cin, homework);
		
		double final_grade = grade(midterm, final, homework);
		
		streamsize prec = cout.precision();
		
		cout << "Your final score : " << setprecision(3) << final_grade << setprecision(prec) << endl;
	} catch(domain_error) {
		cout << endl << "You must enter your grades. "
			"please try again" << endl;
		return 1;
	}
	return 0;
}
