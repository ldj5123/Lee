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
using std::max;

struct Student_info{
	string name;
	double midterm;
	double final;
	vector<double> homework;
};

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

double grade(const Student_info& s)
{
	return grade(s.midterm, s.final, s.homework);
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

istream& read(istream& in, Student_info& s)
{
	in >> s.name >> s.midterm >> s.final;
	read_hw(in, s.homework);
	return in;
}

bool compare(const Student_info& left, const Student_info& right)
{
	return left.name < right.name;
}

int main()
{
	vector<Student_info> students;
	
	string::size_type maxlen = 0;
	Student_info s;
	while (read(cin, s)){
		maxlen = max(maxlen, s.name.size());
		students.push_back(s);
	}
	
	sort(students.begin(), students.end(), compare);
	
	for (int i = 0; i < students.size(); ++i){
		cout << students[i].name;
		cout << string(maxlen - students[i].name.size() +1,' ');
		
		try{
			double final_grade = grade(students[i]);
			
			streamsize prec = cout.precision();
			
			cout << setprecision(3) << final_grade << setprecision(prec) << endl;
		} catch (domain_error e){
			cout << e.what();
		}
	}
	
	
	return 0;
}
