// Minimum and Maximum  product of a triplet subsequence of size 3 in array.


#include <iostream>
#include <algorithm>  // For sorting
using namespace std;

void minMaxProductTriplet(int arr[], int n) {
    sort(arr, arr + n);  // Sort the array

    // Maximum product: Either top 3 largest numbers or 2 smallest (negative) & largest number
    int maxProduct = max(arr[n-1] * arr[n-2] * arr[n-3], arr[0] * arr[1] * arr[n-1]);

    // Minimum product: Either 3 smallest numbers or 2 largest & smallest number
    int minProduct = min(arr[0] * arr[1] * arr[2], arr[0] * arr[n-1] * arr[n-2]);

    cout << "Max Product of Triplet: " << maxProduct << endl;
    cout << "Min Product of Triplet: " << minProduct << endl;
}

int main() {
    int arr[] = {-17, -3, 15, 6, -8};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    minMaxProductTriplet(arr, n);

    return 0;
}


// Output:-
// Max Product of Triplet:  2040
// Min Product of Triplet: -1530