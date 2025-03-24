 // Given an array of integers arr[], Find the Inversion Count in the array 
 
 #include <iostream>
using namespace std;

int countInversions(int arr[], int n) {
    int count = 0;
    // Check all pairs (i, j)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                count++; // Increment count if inversion found
            }
        }
    }
    return count;
}

int main() {
    int arr[] = {8, 4, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Inversion Count: " << countInversions(arr, n) << endl;
    return 0;
}

//output: 6