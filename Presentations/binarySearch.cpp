/*
    Define a function that performs a binary search on a sorted array of integers.
    The function should take three parameters: the array, the size of the array, and the target value to search for.
    The function should return the index of the target value in the array if it is found, or the size of the array if it is not found.
    The function should use a loop to perform the binary search.
    The binary search algorithm works by repeatedly dividing the search interval in half.
    If the target value is less than the middle element, the search continues in the lower half of the array.
    If the target value is greater than the middle element, the search continues in the upper half of the array.
    The search continues until the target value is found or the search interval is empty.
    For example, if the input array is {1, 2, 3, 4, 5, 6, 7, 8, 9} and the target value is 5,
    the function should return 4 (the index of the target value in the array).
    If the target value is 10, the function should return 9 (the size of the array).
*/

// Sahara

#include <iostream>
#include <cassert>

using namespace std;


int binarySearch(int arr[], unsigned int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

void binarySearchTest() {
    int arr[] = {-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};

    assert(binarySearch(arr, 16, 0) == 10);
    assert(binarySearch(arr, 16, -10) == 0);
    assert(binarySearch(arr, 16, 5) == 15);
    assert(binarySearch(arr, 16, -5) == 5);
    assert(binarySearch(arr, 16, 6) == -1);
    assert(binarySearch(arr, 16, -11) == -1);

    cout << "All binary search tests passed successfully!" << endl;
}

int main() {
    binarySearchTest();
    return 0;
}