#include <iostream>
#include <vector>
#include "student_info.h"
#include <stdexcept>
#include "median.h"

using std::istream;
using std::vector;
using std::domain_error;

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
	if(in){
		vector<double> homework;
		read_hw(in, homework);
		
		if (homework.size() == 0)
			throw domain_error("student has done no homework");
	/*	
		for (int i = 0; i < homework.size(); ++i)
			sum += homework[i];
			
		s.homework = sum / homework.size();
	*/	
		s.homework = median(homework);
		in.clear();
	}
	return in;
}

bool compare(const Student_info& left, const Student_info& right)
{
	return left.name < right.name;
}

