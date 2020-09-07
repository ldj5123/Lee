#include <vector>
#include <iostream>
#include <string>

using std::vector;
using std::cin;
using std::cout;
using std::string;

int main()
{
	string str;
	vector<string> strs;
	vector<int> count;
	
	while(cin >> str){
		strs.push_back(str);
	}
	
	typedef vector<int>::size_type vec_sz;
	for (vec_sz i = 0; i < strs.size(); ++i){
		int cnt = 1;
		for (vec_sz j = 0; j < strs.size(); ++j){
			if (i != j && strs[i] == strs[j]){
				++cnt;
			}
		}
		count.push_back(cnt);
	}
	
	for (vec_sz i = 0; i < strs.size(); ++i){
		cout << strs[i] << " : " << count[i] << std::endl;
	}
	return 0;
}
