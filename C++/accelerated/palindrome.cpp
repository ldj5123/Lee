#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::equal;
/*
template <typename ITERNATOR, typename ITERNATOR2>
bool my_equal(ITERNATOR begin, ITERNATOR end, ITERNATOR2 begin2)
{
    ITERNATOR2 iter2 = begin2;
    ITERNATOR iter;
    for (iter = begin; iter != end; ++iter, ++iter2){
        if(*iter != *iter2)
            break;
    }
    return iter == end;
}
*/
int main()
{
    // vector<string> words;
    // words.push_back("aaa");
    // words.push_back("bbb");
    // words.push_back("ccc");
    // words.push_back("ddd");

    // for (vector<string>::const_iterator iter = words.begin(); iter != words.end(); ++iter)
    //     cout << *iter << endl;
    
    // for (vector<string>::const_reverse_iterator iter = words.rbegin(); iter != words.rend(); ++iter)
    //     cout << *iter << endl;

    string s = "madam";

//    if (my_equal(s.begin(), s.end(), s.rbegin()))
    if (equal(s.begin(), s.end(), s.rbegin()))
        cout << "palindrome!" << endl;

    else 
        cout << "not palindrome!" << endl;

    return 0;
}