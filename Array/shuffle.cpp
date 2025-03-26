#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffleArray(int arr[], int n) {
    srand(time(0)); // Initialize random seed
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1); // Generate random index
        // Swap arr[i] and arr[j] using a temporary variable
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    shuffleArray(arr, n);
    printArray(arr, n);
    return 0;
}

