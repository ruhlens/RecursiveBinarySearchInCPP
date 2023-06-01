#include "BinarySearch.h"
#include <iostream>
#include <string>

using namespace std;

/*
* Subset method for Binary Search class.
* This method goes unused, I made it for an earlier implementation that I ended up refactoring
* Returns a subset of the given vector starting from the start arg and ending at the end arg
*/
vector<int> BinarySearch::subset(vector<int> vec, int start, int end)
{
	if (start < 0 || end >  vec.size() - 1 || start > end) {
		string s = std::to_string(start);
		string e = std::to_string(end);
		string size = std::to_string(vec.size());
		cout << "start: " + s + " end: " + e + " size: " + size << endl;
		cout << "Invalid size Arguments" << endl;
		throw invalid_argument(0);
	}
	vector<int> result;
	result.reserve(end - start);
	for (int i = start; i < end; i++) {
		result.push_back(vec[i]);
	}
	return result;
}

/*
* Binary Search Method for BinarySearch Class.
* Returns the index of the target number
*/
int BinarySearch::binarySearch(vector<int> vec, int start, int end, int target)
{
	int mid = (start + end) / 2;
	if (vec[mid] == target) {
		return mid;
	}
	else if (vec[mid] > target)
	{
		return binarySearch(vec, start, mid - 1, target);
	}
	else if (vec[mid] < target)
	{
		return binarySearch(vec, mid + 1, end, target);
	}
	return -1;
}