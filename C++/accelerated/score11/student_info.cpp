#include "student_info.h"
#include "grade.h"
#include "median.h"
#include "average.h"

using std::istream;
using std::vector;
using std::domain_error;
using std::remove_copy;

// istream& read_hw(istream& in, vector<double>& hw)
// {
// 	if (in ){
// 		hw.clear();
// 		double d;
// 		while (in >> d)
// 			hw.push_back(d);
// 		in.clear();
// 	}
	
// 	return in;
// }

bool compare(const Student_info& left, const Student_info& right)
{
	return left.name() < right.name();
}

Student_info::Student_info()
: midterm(0.0), final(0.0)
{
	// name, midterm, final, homworks
}

Student_info::Student_info(istream& in)
{
	this->read(in);
}

istream& Student_info::read(istream& in)
{
	in >> this->name_ >> this->midterm >> this->final;
	this->read_hw(in);
	return in;
}

istream& Student_info::read_hw(istream& in)
{
	if (in ){
		this->homework.clear();
		double d;
		while (in >> d)
			this->homework.push_back(d);
		in.clear();
	}
	
	return in;
}

double Student_info::grade() const
{
	return ::grade(this->midterm, this->final, ::median(this->homework));
}

double Student_info::grade_aux() const
{
	try{
		return this->grade();
	} catch (domain_error) {
		return ::grade(this->midterm, this->final, 0);
	}
}

double Student_info::grade_average() const
{
	return ::grade(this->midterm, this->final, ::average(this->homework));
}

double Student_info::grade_optimistic_median() const
{
	vector<double> nonzero;
	remove_copy(this->homework.begin(), this->homework.end(), back_inserter(nonzero), 0);

	if (nonzero.empty())
		return ::grade(this->midterm, this->final, 0);
	else
		return ::grade(this->midterm, this->final, median(nonzero));
}

std::string Student_info::name() const
{
	return this->name_;
}