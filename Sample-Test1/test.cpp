#include "pch.h"
#include "../C++ DS-ALGO/src/Sort/BubbleSort.h"
#include "../C++ DS-ALGO/src/Sort/QuickSort.h"
#include "../C++ DS-ALGO/src/Sort/SelectionSort.h"
#include "../C++ DS-ALGO/src/Sort/InsertionSort.h"

template <typename T>
void CheckArray(std::vector<T>& originalArr, std::vector<T>& sortedArr);

template <typename T>
void CheckArray(std::vector<T>& originalArr, std::vector<T>& sortedArr)
{
	for (int i = 0; i < originalArr.size(); ++i) {
		EXPECT_EQ(originalArr[i], sortedArr[i]) << "Vectors x and y differ at index " << i;
	}
}

TEST(Sort, BubbleSortT) {

	std::vector<int> myArr   = {  4,  5, -1,  3, -1};
	std::vector<int> sortArr = { -1, -1,  3,  4,  5};

	BubbleSort(myArr);
	CheckArray(myArr, sortArr);
}

TEST(Sort, QuickSortT) {

	std::vector<int> myArr   = {  4,  5, -1,  3, -1 };
	std::vector<int> sortArr = { -1, -1,  3,  4,  5 };

	QuickSort(myArr);

	CheckArray(myArr, sortArr);
}


TEST(Sort, SelectSortT) {

	std::vector<int> myArr = { 4,  5, -1,  3, -1 };
	std::vector<int> sortArr = { -1, -1,  3,  4,  5 };

	SelectSort(myArr);

	CheckArray(myArr, sortArr);
}


TEST(Sort, InsertSortT) {

	std::vector<int> myArr = { 4,  5, -1,  3, -1 };
	std::vector<int> sortArr = { -1, -1,  3,  4,  5 };

	InsertSort(myArr);

	CheckArray(myArr, sortArr);
}