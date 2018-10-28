#include "pch.h"
#include "../C++ DS-ALGO/src/Sort/BubbleSort.h"
#include "../C++ DS-ALGO/src/Sort/QuickSort.h"
#include "../C++ DS-ALGO/src/Sort/SelectionSort.h"
#include "../C++ DS-ALGO/src/Sort/InsertionSort.h"

class Sort : public ::testing::Test {
protected:
	std::vector<int> unsortedArr = { 4,  5, -1,  3, -1 };
	std::vector<int> sortedArr = { -1, -1,  3,  4,  5 };
};

template <typename T>
void CheckArray(std::vector<T>& originalArr, std::vector<T>& sortedArr);

template <typename T>
void CheckArray(std::vector<T>& originalArr, std::vector<T>& sortedArr)
{
	for (int i = 0; i < originalArr.size(); ++i) {
		EXPECT_EQ(originalArr[i], sortedArr[i]) << "Vectors x and y differ at index " << i;
	}
}

TEST_F(Sort, BubbleSortT) {
	BubbleSort(unsortedArr);
	CheckArray(unsortedArr, sortedArr);
}

TEST_F(Sort, QuickSortT) {
	QuickSort(unsortedArr);
	CheckArray(unsortedArr, sortedArr);
}


TEST_F(Sort, SelectSortT) {
	SelectSort(unsortedArr);
	CheckArray(unsortedArr, sortedArr);
}


TEST_F(Sort, InsertSortT) {
	InsertSort(unsortedArr);
	CheckArray(unsortedArr, sortedArr);
}
