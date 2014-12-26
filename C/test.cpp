#include <vector>
#include <iostream>
#include "sort.hpp"
#include "tests.h"
using namespace std;

void test_sort()
{	
	vector<int> foo = bubble_sort<int>(vector<int>({ 9, 8, 7, 6, 45, 1, 0 }));
	for (auto x : foo)
		cout << x << ", ";
}
