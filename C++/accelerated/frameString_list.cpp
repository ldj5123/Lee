#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::max;
using std::list;

string::size_type width(const list<string>& lines)
{
    list<string>::const_iterator iter = lines.begin();
    string::size_type maxLen = iter->size();
    ++iter;
    while (iter != lines.end()) {
        // if (maxLen < iter->size())
        //     maxLen = iter->size();
        maxLen = max(maxLen, iter->size());
        ++iter;
        
    }
    return maxLen;
}

list<string> frame(const list<string>& lines)
{
    list<string> re;
    list<string>::size_type maxLen = width(lines);

    string border = string(maxLen + 4,'*');

    re.push_back(border);

    for (list<string>::const_iterator iter = lines.begin(); iter != lines.end(); ++iter)
        re.push_back("* " + *iter +string(maxLen - iter->size(), ' ') + " *");

    re.push_back(border);

    return re;
}

list<string> vcat(const list<string>& top, const list<string>& bottom)
{
    list<string> re;
    re = top;

    // for (list<string>::const_iterator iter = bottom.begin(); iter != bottom.end(); ++iter)
    //     re.push_back(*iter);
    re.insert(re.end(), bottom.begin(), bottom.end());
    return re;
}

list<string> hcat(const list<string>& left, const list<string>& right)
{
    list<string> re;

    list<string>::const_iterator i = left.begin();
    list<string>::const_iterator j = right.begin();

    while (i != left.end() || j != right.end()) {
        string s;

        string::size_type width1 = width(left) + 1;

        if (i != left.end()) {
            s = *i;
            ++i;
        }

        s += string(width1 - s.size(), ' ');

        if (j != right.end()) {
            s += *j;
            ++j;
        }

        re.push_back(s);
    }

    return re;
}

int main()
{
    list<string> lines;

    string s;
    while (getline(cin, s)) {
        lines.push_back(s);
    }

    list<string> frameLines;
    frameLines = frame(lines);

    for (list<string>::const_iterator iter = frameLines.begin(); iter != frameLines.end(); ++iter)
        cout << *iter << endl;
    
    list<string> result;
    result = vcat(lines, frameLines);

    for (list<string>::const_iterator iter = result.begin(); iter != result.end(); ++iter)
        cout << *iter << endl;

    result = hcat(lines, frameLines);

    for (list<string>::const_iterator iter = result.begin(); iter != result.end(); ++iter)
        cout << *iter << endl;

    return 0;
}