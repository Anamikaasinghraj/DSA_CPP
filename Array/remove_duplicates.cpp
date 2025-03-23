// remove duplicates from sorted array

#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    int j = 0; // Tracks unique elements
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j])  // If a new element is found
            arr[++j] = arr[i]; // Place it in the next unique position
    }
    return j + 1; // New size of the array
}

int main() {
    int arr[] = {1, 1, 12, 12, 31, 31, 14, 14, 87, 87, 87};  
    int n = sizeof(arr) / sizeof(arr[0]);

    int newSize = removeDuplicates(arr, n);

    for (int i = 0; i < newSize; i++)  
        cout << arr[i] << " ";  
    return 0;
}

//output: 1, 12, 31, 14, 87
