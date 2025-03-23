// sum of digits of a number until sum becomes single digit 

#include <iostream>
using namespace std;

int sumUntilOneDigit(int num) {
    while (num >= 10)  // Repeat until num becomes a single digit
        {
            int sum = 0;
        while (num > 0) {
            sum += num % 10;  // Add last digit
            num /= 10;        // Remove last digit
        }
        num = sum;  // Update num to new sum
    }
    return num;
}

int main() {
    int num = 482659;  
    cout << sumUntilOneDigit(num);
    return 0;
}

// output: 7
