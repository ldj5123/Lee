#include <algorithm>
#include <string>
#include <vector>

using std::vector;

template<typename T>
bool equal(vector<T>::const_iterator& begin, vector<T>::const_iterator& end, vector<T>& d)
{
    vector<T>::const_iterator iter = d.begin();
    while (begin != end && *begin == *iter){
        ++begin;
        ++iter;
    }

    if (begin == end) {
        return true;
    }
    if (begin != end){
        return false;
    }
}