#pragma once
#ifndef _CPP_C_SORT_HPP
#define _CPP_C_SORT_HPP

#include<vector>
#include "api.h"
using namespace std;

// ģ�岻֧�ַ������, �����ģ���������ʵ�ַ���ͬһ���ļ��С�

// bubble sort
// sort by ascending
template <typename T>
vector<T>& bubble_sort(vector<T>& to_be_sorted)
{
	int max_index = to_be_sorted.size() - 1;
	for (int i = 0; i < max_index; ++i)
		for (int j = 0; j < max_index - i; ++j)
			if (to_be_sorted[j] > to_be_sorted[j + 1])
				swap(to_be_sorted[j], to_be_sorted[j + 1]);
	return to_be_sorted;
}

#endif  // _CPP_C_SORT_HPP