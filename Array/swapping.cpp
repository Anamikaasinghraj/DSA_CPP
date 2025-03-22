// swapping in an array in ascending order:-


#include <iostream>
using namespace std;

//using sorting

void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) 
                swap(arr[i], arr[j]); 
        }
    }
}

int main() {
    int arr[] = {78, 67, 39, 31, 96, 78, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr, n);

    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";

    return 0;
}

// output: 0, 9, 31, 39, 67, 78, 78, 96
