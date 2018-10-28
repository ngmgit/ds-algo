#ifndef MY_INSERTION_SORT_H
#define MY_INSERTION_SORT_H
#include <vector>
#include <algorithm>

template <typename T>
void InsertSort(std::vector<T>& arr);


template <typename T>
void InsertSort(std::vector<T>& arr)
{
	int markerIdx = 0;
	for (int i = 1; i < arr.size(); i++)
	{
		if (arr[i] < arr[markerIdx])
		{
			std::swap(arr[i], arr[markerIdx]);

			int j = markerIdx;

			while (j > 0 && arr[j] < arr[j - 1])
			{
				std::swap(arr[j], arr[j - 1]);
				j--;
			}
		}

		markerIdx++;
	}
}

#endif