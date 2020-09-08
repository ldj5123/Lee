#include "core.h"
#include "grade.h"

using std::istream;

bool compare(const Core& left, const Core& right)
{
    return left.name() < right.name();
}

Core::Core()
: midterm(0.0), final(0.0)
{

}

Core::Core(istream& in)
{
    this->read(in);
}

istream& Core::read_common(istream& in)
{
    in >> this->n >> this->midterm >> this->final;
	
	return in;
}

istream& Core::read_hw(istream& in)
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

istream& Core::read(istream& in)
{
    this->read_common(in);
	this->read_hw(in);
	return in;
}

double Core::grade() const
{
    return ::grade(this->midterm, this->final, this->homework);
}

std::string Core::name() const
{
    return this->n;
}
