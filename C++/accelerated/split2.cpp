#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::find_if;

// vector<string> split(const string& s)
// {
//     vector<string> ret;

//     string::size_type i = 0;
//     while(i != s.size()) {
//         while (i != s.size() && isspace(s[i]))
//             ++i;
//         string::size_type j = i;
//         while (j != s.size() && !isspace(s[j]))
//             ++j;
//         if(i != j){
//             ret.push_back(s.substr(i, j-i));
//             i = j;
//         }
//     }

//     return ret;
// }

bool space(char ch)
{
    return isspace(ch);
}

bool not_space(char ch)
{
    return !isspace(ch);
}

// string::const_iterator find_if(string::const_iterator begin, string::const_iterator end, bool (*f)(char ch))
// {
//     string::const_iterator it;
//     for (it = begin; it !=end; ++it)
//         if(f(*it))
//             break;
    
//     return it;
// }

vector<string> split(const string& s)
{
    vector<string> re;

    string::const_iterator iter = s.begin();
    while(iter != s.end()) {
        // while (iter != s.end() && isspace(s[*iter]))
        //     ++iter;
        // for (string::const_iterator it =iter; iter !=s.end(); ++iter)
        //     if(not_space(*it))
        //         return break;
        iter = find_if(iter, s.end(), not_space);

        string::const_iterator iter2 = iter;

        iter2 = find_if(iter2, s.end(), space);

        if (iter != iter2)
            re.push_back(string(iter, iter2));
            iter = iter2;
    }
    return re;
}

int main()
{
    string s;
    while(getline(cin, s)){
        vector<string> words = split(s);

        for (vector<string>::const_iterator iter = words.begin(); iter != words.end(); ++iter)
            cout << *iter << endl;
    }
    cout << s << endl;
    return 0;
}