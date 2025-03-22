// find second largest element in an Array:-



#include <iostream>
using namespace std;

int main() {
    int arr[] = {56, 70, 84, 45, 99, 49, 60, 78}; // 8 elements
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout <<"size of array: " <<n;
    // output:  8

    int largest = arr[0], secondLargest = -1;

    // Find the largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Find the second largest distinct element
    for (int i = 0; i < n; i++) {
        if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    // Output the result
    if (secondLargest != -1) {
        cout << "Second largest: " << secondLargest;
    } else {
        cout << "No second largest element";
    }

    return 0;
}

// output: 84
