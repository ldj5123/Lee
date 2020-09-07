#ifndef STUDENT_INFO_H
#define STUDENT_INFO_H

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <algorithm>

class Student_info{
private:
	std::string name_;
	double midterm;
	double final;
	std::vector<double> homework;

	std::istream& read_hw(std::istream& in);
	
public:
	Student_info();
	Student_info(std::istream& in);

	std::istream& read(std::istream& in);
	

	double grade() const;
	double grade_aux() const;
	double grade_average() const;
	double grade_optimistic_median() const;
	
	std::string name() const;

	bool valid() const { return !this->homework.empty(); }
};

//std::istream& read_hw(std::istream& in, std::vector<double>& hw);
//std::istream& read(std::istream& in, Student_info& s);

bool compare(const Student_info& left, const Student_info& right);

#endif
