#ifndef MY_SELECTION_SORT_H
#define MY_SELECTION_SORT_H

#include <vector>

template <typename T>
void SelectSort(std::vector<T>& arr);

template <typename T>
void SelectSort(std::vector<T>& arr)
{
	int minIdx;

	for (int i = 0; i < arr.size() - 1; i++)
	{
		minIdx = i;

		for (int j = i + 1; j < arr.size(); j++)
		{
			if (arr[j] < arr[minIdx])
				minIdx = j;
		}

		// swap i with the min;
		if (minIdx != i)
		{
			int temp = arr[minIdx];
			arr[minIdx] = arr[i];
			arr[i] = temp;
		}
	}
}

#endif
