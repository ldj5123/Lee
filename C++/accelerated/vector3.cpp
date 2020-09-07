#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::sort;

int main()
{
	vector<string> str;
	vector<int> len;
	string istr;

	while(cin >> istr){
		str.push_back(istr);
	}
	

	for (vector<int>::size_type i = 0; i < str.size() ; ++i){
		len.push_back(str[i].length());
	}
	
	sort(len.begin(), len.end());
	
	for (vector<int>::size_type i = 0; i < str.size() ; ++i){
		if(str[i].length() == len[len.size()-1])
			cout << "long string : " << str[i] << endl;
		if(str[i].length() == len[0])
			cout << "short string : " << str[i] << endl;
	}
	
	
	return 0;
}
