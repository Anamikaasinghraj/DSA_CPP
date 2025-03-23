// clockwise rotation:  

#include <iostream>
using namespace std;

void RightRotate(int arr[], int n, int d) {
    d = d % n; // Handle cases where d > n
    int temp[d];

    // Store last d elements in temp
    for (int i = 0; i < d; i++) 
        temp[i] = arr[n - d + i];

    // Shift remaining elements to the right
    for (int i = n - 1; i >= d; i--) 
        arr[i] = arr[i - d];

    // Move temp elements to the beginning
    for (int i = 0; i < d; i++) 
        arr[i] = temp[i];
}

int main() {
    int arr[] = {23, 12, 8, 24, 15, 5, 7, 21};
    int d = 4, n = sizeof(arr) / sizeof(arr[0]);

    RightRotate(arr, n, d);

    // Print the rotated array
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
    return 0;
}
