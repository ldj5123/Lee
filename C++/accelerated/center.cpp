#include <iostream>
#include <vector>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

const int COLS = 80;

vector<string> center(const vector<string>& lines)
{
    vector<string> re;
    string border(COLS, '*');
    re.push_back(border);

    for (vector<string>::const_iterator iter = lines.begin(); iter != lines.end(); ++iter) {
        string::size_type space = (COLS - 2 - iter->size()) / 2;

        string line = "*" + string(space, ' ') + *iter + string(space, ' ');
        line += (iter->size() % 2) ? " *" : "*";
        re.push_back(line);
    }

    re.push_back(border);
    return re;
}


int main()
{
    vector<string> lines;
    string s;

    while(getline(cin, s)){
        lines.push_back(s);
    }
    vector<string> result = center(lines);
    for (vector<string>::const_iterator iter = result.begin(); iter != result.end(); ++iter)
        cout << *iter << endl;
    
    return 0;
}