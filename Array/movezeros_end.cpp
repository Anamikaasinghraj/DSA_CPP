//moves all zeros to end of array.

#include <iostream>
using namespace std;

void moveZerosToEnd(int arr[], int n) {
    int index = 0; // Position to place non-zero elements

    // Move non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    // Fill the remaining positions with zeros
    while (index < n) {
        arr[index++] = 0;
    }
}

int main() {
    int arr[] = {0, 14, 9, 18, 41, 10, 0, 28, 27, 0, 6, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveZerosToEnd(arr, n);

    // Print the modified array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}


// output:- 14, 9, 18, 41, 10, 28, 27, 6, 9, 0, 0, 0, 0
