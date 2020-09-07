#include <vector>
#include <iostream>
#include <string>

using std::vector;
using std::cin;
using std::cout;
using std::string;

struct Pair{
	string word;
	int count;
};

int main()
{
	string word;
//	vector<string> words;
//	vector<int> counts;
	vector<Pair> wordCount;
	
	while(cin >> word){
		int i;
		for (i = 0; i < wordCount.size(); ++i){
			if(word == wordCount[i].word)
				break;
		}
		if (i == wordCount.size()){
			Pair pair;
			pair.word = word;
			pair.count = 1;
			wordCount.push_back(pair);
			
		} else {
			++wordCount[i].count;
		}
	}
	
	
	for (int i = 0; i < wordCount.size(); ++i){
		cout << wordCount[i].word << " : " << wordCount[i].count << std::endl;
	}
	return 0;
}
