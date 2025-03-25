//  find the largest and smallest element in an array.  


#include <iostream>
using namespace std;

void findLargestSmallest(int arr[], int n) {
    int largest = arr[0], smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;
}

int main() {
    int arr[] = {12, 45, 1, -5, 99, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    findLargestSmallest(arr, n);
    return 0;
}
