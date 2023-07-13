#include <iostream>
using namespace std;

void merg(int arr1[], int n, int arr2[], int m) {
    int i = m - 1;                // Index for the last element of arr1
    int j = n - 1;                // Index for the last element of arr2
    int k = m + n - 1;            // Index for the last position of merged array

    while (i >= 0 && j >= 0) {    // Iterate while both arrays have elements remaining
        if (arr1[i] > arr2[j]) {  // Compare the current elements of arr1 and arr2
            arr1[k--] = arr1[i--]; // Place the larger element in the merged array
        } else {
            arr1[k--] = arr2[j--]; // Place the larger element in the merged array
        }
    }

    while (j >= 0) {              // Copy any remaining elements from arr2 to arr1
        arr1[k--] = arr2[j--];
    }
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) { // Iterate over the elements of the array
        cout << arr[i] << " ";   // Print the current element
    }
    cout << endl;
}

int main() {
    int nums1[6] = {1, 2, 3, 0, 0, 0}; // First array with m elements
    int m = 3;                        // Number of elements in nums1

    int nums2[3] = {2, 5, 6};          // Second array with n elements
    int n = 3;                         // Number of elements in nums2

    merg(nums1, m, nums2, n);          // Merge nums1 and nums2
    print(nums1, m + n);               // Print the merged array

    return 0;
}
