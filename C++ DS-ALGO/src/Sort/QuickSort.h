#ifndef MY_QUICK_SORT_H
#define MY_QUICK_SORT_H

#include <vector>

template <typename T>
void QuickSort(std::vector<T> &arr);

template <typename T>
void Sort(int start, int end, std::vector<T> &arr);

template <typename T>
int GetAndPlacePivot(int start, int end, std::vector<T> &arr);

template <typename T>
void QuickSort(std::vector<T> &arr)
{
	if (arr.size() <= 1)
		return;

	Sort(0, arr.size() - 1, arr);
}

template <typename T>
void Sort(int start, int end, std::vector<T> &arr)
{
	if (start >= end)
		return;

	int pivot = GetAndPlacePivot(start, end, arr);

	Sort(start, pivot - 1, arr);
	Sort(pivot + 1, end, arr);
}

template <typename T>
int GetAndPlacePivot(int start, int end, std::vector<T> &arr)
{
	int pivot = end;
	int marker = start - 1;

	for (int i = start; i < end; i++)
	{
		if (arr[i] <= arr[pivot])
		{
			marker++;

			int temp = arr[marker];
			arr[marker] = arr[i];
			arr[i] = temp;
		}
	}

	// swap pivot with the marker position
	// All the values towards the end from marker are greter values
	// that towads the front are lesser values

	int temp = arr[pivot];
	arr[pivot] = arr[marker + 1];
	arr[marker + 1] = temp;

	return marker + 1;
}

#endif // MY_QUICK_SORT_H
