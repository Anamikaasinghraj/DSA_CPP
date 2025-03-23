// adding one to number represented as array of digits:

#include <iostream>
using namespace std;

void addOne(int arr[], int &n)
 {
    int carry = 1;  // Initial carry = 1 (for +1 operation)

    for (int i = n - 1; i >= 0; i--) {
        arr[i] += carry;
        if (arr[i] < 10) return;  // No more carry needed
        arr[i] = 0;  // If digit becomes 10, set to 0
    }

    // If carry is still left, add a new digit at the beginning
    cout << "1 ";
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
    return;
}

int main() {
    int arr[] = {9, 9, 9};  
    int n = sizeof(arr) / sizeof(arr[0]);

    addOne(arr, n);

    return 0;
}

// output: 1, 0, 0, 0
