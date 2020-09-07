#include <vector>
#include <iostream>
#include <string>

using std::vector;
using std::cin;
using std::cout;
using std::string;
using std::istream;

struct Pair{
	string word;
	int count;
};

istream& read(istream& in, vector<Pair>& wordCount)
{
	
	while(in >> word){
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
	
	in.clear();
}


int main()
{
//	vector<string> words;
//	vector<int> counts;
	vector<Pair> wordCount;
	
	read(cin, wordCount);
	
	
	for (int i = 0; i < wordCount.size(); ++i){
		cout << wordCount[i].word << " : " << wordCount[i].count << std::endl;
	}
	return 0;
}
