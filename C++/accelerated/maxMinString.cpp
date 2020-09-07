#include <vector>
#include <iostream>
#include <string>

using std::vector;
using std::cin;
using std::cout;
using std::string;



int main()
{
	vector<string> words;
	
	string word;
	while(cin >> word) {
		int i;
		for (i = 0; i < words.size(); ++i)
			if (word == words[i])
				break;
		if (i == words.size())
			words.push_back(word);
	}
	
	string longestWord = words[0];
	string shortestWord = words[0];
	
	for(int i = 1; i < words.size(); ++i){
		if(longestWord.size() < words[i].size())
			longestWord = words[i];
		if(shortestWord.size() > words[i].size())
			shortestWord = words[i];
	}
	
	cout << "longest word : " << longestWord << std::endl;
	cout << "shortest word : " << shortestWord << std::endl;
	
	return 0;
}
