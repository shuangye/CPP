#include "tests.h"
#include <vector>
#include <iostream>
#include "sort.hpp"
using std::vector;

void test_sort()
{
	vector<int> foo = bubble_sort<int>(vector<int>({ 9, 8, 7, 6, 45, 1, 0 }));
	for (auto x : foo)
		std::cout << x << ", ";
}

