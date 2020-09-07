#include <iostream>
#include <algorithm>
#include <vector>
#include "median.h"
#include "algo.h"

using std::cout;
using std::endl;
using std::vector;
using std::sort;

int main()
{
	int nums[] = {1, 2, 3, 4, 5};
	double nums2[] = {1.1, 2.2, 3.3, 4.4, 5.5};

	vector<int> vec1(nums, nums + 5);
	vector<double> vec2(nums2, nums2 + 5);
	vector<int> vec3(nums, nums + 5);
	vector<double> vec4(nums2, nums2 + 5);
	int median1 = median(vec1);
	cout << "median1 : " << median1 << endl;

	double median2 = median(vec2);
	cout << "median2 : " << median2 << endl;

	if(myequal(vec2.begin(), vec2.end(), vec4))
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;

	return 0;
}