#pragma once
#include <vector>

class BinarySearch
{
public:
	static std::vector<int> subset(std::vector<int> vec, int start, int end);
	static int binarySearch(std::vector<int> vec, int beg, int end, int target);
};

