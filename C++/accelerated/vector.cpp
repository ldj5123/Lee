#include <vector>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <random>


using std::vector;
using std::sort;


int main()
{
	vector<int> num;
	std::random_device rd;
	std::mt19937 mersenne(rd());
	
	std::uniform_int_distribution<> number(1,100);
	
	for(int i = 0; i < 100; ++i)
		num.push_back(number(mersenne));
	
	sort(num.begin(), num.end());
	
	
//	std::cout << num[num.size()/4] << std::endl << num[num.size()/2]  << std::endl << num[num.size()*3/4]  << std::endl;
	
	int size = num.size();
	int oneQuart = (size % 2) ? num[size/4] : (num[size / 4 - 1] + num[size/4]) / 2;
	int twoQuart = (size % 2) ? num[size/2] : (num[size / 2 - 1] + num[size/2]) / 2;
	int threeQuart = (size % 2) ? num[size*3/4] : (num[size * 3 / 4 - 1] + num[size* 3/4]) / 2;
	
	std::cout << "oneQuart : " << oneQuart << std::endl;
	std::cout << "twoQuart : " << twoQuart << std::endl;
	std::cout << "threeQuart : " << threeQuart << std::endl;
	return 0;
}
