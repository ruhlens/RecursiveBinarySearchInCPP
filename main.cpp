
#include "BinarySearch.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
* Main method
*/
int main()
{
	vector<int> vec;
	vec = { 0, 1, 2, 5, 8, 10, 11, 12, 15, 26, 30, 32, 35, 40, 43, 48, 58, 67, 69, 70, 83, 99, 101, 102, 300, 405, 500, 657, 890, 1002};
	int numberToSearchFor = 0;
	int result = BinarySearch::binarySearch(vec, 0, vec.size() - 1, numberToSearchFor);
	cout << std::to_string(numberToSearchFor) + " is located at index " + std::to_string(result) << endl;
	return 0;
}

