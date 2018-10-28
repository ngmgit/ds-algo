#ifndef MY_BUBBLE_SORT_H
#define MY_BUBBLE_SORT_H

#include <vector>

template <typename T>
void BubbleSort(std::vector<T>& arr);

template <typename T>
void BubbleSort(std::vector<T>& arr)
{
	if (arr.size() == 1)
		return;

	if (!arr.empty())
	{
		for (int j = arr.size() - 1; j >= 0; j--)
		{
			for (int i = 1; i <= j; i++)
			{
				if (arr[i - 1] > arr[i])
				{
					int temp = arr[i - 1];
					arr[i - 1] = arr[i];
					arr[i] = temp;
				}
			}
		}
	}
}


#endif