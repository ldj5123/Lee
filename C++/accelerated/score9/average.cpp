#include <vector>
#include <algorithm>
#include <numeric>
#include "average.h"

using std::vector;
using std::accumulate;

double average(const vector<double>& vec)
{
    double re =0.0;
    // for (vector<double>::const_iterator iter = vec.begin(); iter != vec.end(); ++iter)
    //     re += *iter;
    re = accumulate(vec.begin(), vec.end(), 0.0) / vec.size();

    return re;   
}