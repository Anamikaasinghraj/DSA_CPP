// Sort an array in wave form:
// Using high-low pattern

#include <iostream>
#include <algorithm>  
using namespace std;

void waveSort(int arr[], int n) {
    sort(arr, arr + n);  // Step 1: Sort the array

    // Step 2: Swap adjacent elements to form a wave
    for (int i = 0; i < n - 1; i += 2) 
        swap(arr[i], arr[i + 1]);
}

int main() {
    int arr[] = {3, 6, 5, 10, 7, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    waveSort(arr, n);
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
    return 0;
}


// output: 5, 3, 7, 6, 10, 20