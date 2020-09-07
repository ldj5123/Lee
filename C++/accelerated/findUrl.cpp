#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::find;
using std::search;
using std::back_inserter;

bool not_url_char(char c)
{
    // alphanumberic
    static const string special_url_ch = "~:/?;@&$-_,+!*'().";

    return !(isalnum(c) || find(special_url_ch.begin(), special_url_ch.end(), c) != special_url_ch.end());
}

string::const_iterator url_beg(string::const_iterator begin, string::const_iterator end)
{
    static const string sep = "://";

    for (string::const_iterator iter = begin; iter != end; ++iter){
        iter = search(iter, end, sep.begin(), sep.end());
        if (iter == end)
            break;
        if (iter != begin && iter + sep.size() != end) {
            string::const_iterator iter2 = iter;
            while (iter2 != begin && isalpha(iter2[-1]))
                --iter2;
            if (iter2 != iter && !not_url_char(iter[sep.size()]))
                return iter2;
        }

        iter += sep.size();
    }
    return end;
}



string::const_iterator url_end(string::const_iterator begin, string::const_iterator end)
{
    return find_if(begin, end, not_url_char);
}

vector<string> find_url(const string& s)
{
    vector<string> re;

    string::const_iterator iter = s.begin();
    
    while (iter != s.end()) {
        iter = url_beg(iter, s.end());

        if (iter != s.end()){
            string::const_iterator iter2 = url_end(iter, s.end());

            re.push_back(string(iter, iter2));
            iter = iter2;
        }
    }

    return re;
}

int main()
{   
    string s;
    vector<string> re;
    while(getline(cin, s)){
        vector<string> tmp = find_url(s);

        copy(tmp.begin(), tmp.end(), back_inserter(re));
    }
    for (vector<string>::const_iterator iter = re.begin(); iter != re.end(); ++iter)
        cout << *iter << endl;
    return 0;
}