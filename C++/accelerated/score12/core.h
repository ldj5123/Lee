#ifndef CORE_H
#define CORE_H

#include <iostream>
#include <string>
#include <vector>




class Core {
public:
    Core();
    Core(std::istream& in);

    std::istream& read(std::istream& in);

    double grade() const;
    std::string name() const;

    

protected:
    double midterm;
    double final;
    std::vector<double> homework;

    std::istream& read_hw(std::istream& in);
    std::istream& read_common(std::istream& in);
private:
    std::string n;
};

bool compare(const Core& left, const Core& right);

#endif