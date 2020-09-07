#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include "student_info.h"
#include "grade.h"
#include "median.h"
#include "average.h"

using std::cin;
using std::cout;
using std::endl;
using std::ostream;
using std::string;
using std::vector;
using std::back_inserter;
using std::find;
using std::transform;

double median_analysis(const vector<Student_info>& students)
{
	vector<double> grades;

	//for (vector<Student_info>::const_iterator iter = students.begin(); iter != students.end(); ++iter)
	//	grades.push_back(grade(*iter));
	transform(students.begin(), students.end(), back_inserter(grades), grade_aux);

	return median(grades);
}

double average_analtsis(const vector<Student_info>& students)
{
	vector<double> grades;

	transform(students.begin(), students.end(), back_inserter(grades), grade_average);

	return average(grades);
}

double optimistic_median_analysis(const vector<Student_info>& students)
{
	vector<double> grades;

	transform(students.begin(), students.end(), back_inserter(grades), grade_optimistic_median);

	return median(grades);
}

void write_analysis(ostream& out, const string& name, double (*analysis)(const vector<Student_info>&), const vector<Student_info>& did, const vector<Student_info>& didnt)
{
	cout << name << " (did) : " << analysis(did) << ", (didnt) : " << analysis(didnt) << endl;
}

bool did_all_hw(const Student_info& student)
{
	return (find(student.homework.begin(), student.homework.end(), 0) == student.homework.end());
}

int main()
{
	vector<Student_info> did, didnt;

	Student_info student;

	while(read(cin, student)) {
		if (did_all_hw(student))
			did.push_back(student);
		else
			didnt.push_back(student);
	}

	if(did.empty()) {
		cout << "no student did all the homeowrk" << endl;
		return 1;
	}

	if(didnt.empty()) {
		cout << "every student did all the homework" << endl;
		return 1;
	}

	write_analysis(cout, "median", median_analysis, did, didnt);
	write_analysis(cout, "average", average_analtsis, did, didnt);
	write_analysis(cout, "optimistic_median", optimistic_median_analysis, did, didnt);

	return 0;
}