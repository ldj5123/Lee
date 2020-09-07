#include "median.h"
#include "grade.h"
#include "student_info.h"
#include "average.h"
#include <vector>
#include <stdexcept>
#include <algorithm>

using std::vector;
using std::domain_error;
using std::remove_copy;


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

double grade_aux(const Student_info& s)
{
	try{
		return grade(s.midterm, s.final, s.homework);
	} catch (domain_error) {
		return grade(s.midterm, s.final, 0);
	}
}

double grade_average(const Student_info& s)
{
	return grade(s.midterm, s.final, average(s.homework));
}

double grade_optimistic_median(const Student_info& s)
{
	vector<double> nonzero;
	remove_copy(s.homework.begin(), s.homework.end(), back_inserter(nonzero), 0);

	if (nonzero.empty())
		return grade(s.midterm, s.final, 0);
	else
		return grade(s.midterm, s.final, median(nonzero));
}