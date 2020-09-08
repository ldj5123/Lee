#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stdexcept>
#include <iomanip>
#include "core.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::sort;
using std::max;
using std::domain_error;
using std::streamsize;
using std::setprecision;


int main()
{
    vector<Core> students;

    Core s;
    string::size_type maxLen = 0;

    while(s.read(cin)) {             // read(cin, s)
        maxLen = max(maxLen, s.name().size());
        students.push_back(s);
    }

    sort(students.begin(), students.end(), compare);

    for (vector<Core>::size_type i = 0; i != students.size(); ++i) {
        cout << students[i].name() << string(maxLen + 1 - students[i].name().size(), ' ');
        try{
            double final_grade = students[i].grade();       // grade(students[i])
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade << setprecision(prec) << endl;
        } catch (domain_error e) {
            cout << e.what() << endl;
        }
    }

    return 0;
}