// rotate an array by d-counterclockwise  or left: 


#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int d) {
    d = d % n; // d > n
    int temp[d];

    // Store first d elements & shift remaining
    for (int i = 0; i < d; i++) temp[i] = arr[i];
    for (int i = d; i < n; i++) arr[i - d] = arr[i];
    for (int i = 0; i < d; i++) arr[n - d + i] = temp[i];
}

int main() {
    int arr[] = {23, 12, 8, 24, 15, 5, 7, 21}, d = 4, n = sizeof(arr) / sizeof(arr[0]);
    leftRotate(arr, n, d);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}

// Output:- 15, 5, 7, 21, 23, 12, 8, 24