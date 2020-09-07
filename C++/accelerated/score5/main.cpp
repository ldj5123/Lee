#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include "student_info.h"
#include "median.h"
#include "grade.h"


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



int main()
{
	vector<Student_info> students;
	
	string::size_type maxlen = 0;
	Student_info s;
	
	try {
		while (read(cin, s)){
			maxlen = max(maxlen, s.name.size());
			students.push_back(s);
		}
	} catch (domain_error e) {
		cout << e.what();
		return 1;	
	}
	
	sort(students.begin(), students.end(), compare);
	
	for (int i = 0; i < students.size(); ++i){
		cout << students[i].name;
		cout << string(maxlen - students[i].name.size() +1,' ');
		
		
		double final_grade = grade(students[i]);
		
		streamsize prec = cout.precision();
		
		cout << setprecision(3) << final_grade << setprecision(prec) << endl;
	
	}
	
	
	return 0;
}
