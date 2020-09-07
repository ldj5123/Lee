#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;
using std::copy;
using std::ostream_iterator;

template <typename In>
bool myequal(In begin, In end, In begin2)
{
    while (begin != end)
        if (*begin++ != *begin2++)
            break;
    return (begin == end);
}

template <typename In, typename T>
In myfind(In begin, In end, const T& value)
{
    while (begin != end){
        if (*begin == value)
            break;
        begin++;
    }
    return begin;
}

template <typename In, typename Pred>
In myfind_if(In begin, In end, Pred predict)
{
    while (begin != end){
        if (predict(*begin))
            break;
        begin++;
    }
    return begin;
}

template <typename In, typename Out, typename Op>
Out mytransform(In begin, In end, Out des, Op func)
{
    while (begin != end) {
        *des++ = func(*begin++);
    }

    return des;
}

bool greaterThenFour(int value)
{
    return value > 4;
}

int square(int value)
{
    return value * value;
}

int main()
{
    int nums[] = {1, 2, 3, 4,5};
    vector<int> vec(nums, nums + 5);
    vector<int> vec2 = vec;

    if (myequal(vec.begin(), vec.end(), vec.begin()))
        cout << "vec and vec2 are equal" << endl;
    else
        cout << "vec and vec2 are not equal" << endl;

    if (myfind(vec.begin(), vec.end(), 5) != vec.end())
        cout << "found" << endl;
    else
        cout << "not found" << endl;

    if (myfind_if(vec.begin(), vec.end(), greaterThenFour) != vec.end())
        cout << "element is exist greater then 4" << endl;
    else
        cout << "element is not exist greater then 4" << endl;

    mytransform(vec.begin(), vec.end(), vec2.begin() ,square);

    for (vector<int>::const_iterator iter = vec2.begin(); iter != vec2.end(); ++iter)
    {
        cout << *iter << endl;
    }

    copy(vec2.begin(), vec2.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}