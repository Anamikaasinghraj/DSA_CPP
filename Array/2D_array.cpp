#include <iostream>
using namespace std;

int main() {
    int arr[3][3], sum = 0;

    // Input the 3x3 matrix
    cout << "Enter 9 elements for the 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];  // Adding elements to sum
        }
    }

    // Printing the matrix
    cout << "\nMatrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Printing the sum
    cout << "Sum of all elements: " << sum << endl;

    return 0;
}
