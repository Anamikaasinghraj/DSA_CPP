#include <iostream>
using namespace std;

int main() 
{
    int num1, num2;
    char op;
    int result;

    // Input from the user
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    // Performing calculation based on operator
    if (op == '+') {
        result = num1 + num2;
        cout << "Result: " << result << endl;
    } else if (op == '-') {
        result = num1 - num2;
        cout << "Result: " << result << endl;
    } else if (op == '*') {
        result = num1 * num2;
        cout << "Result: " << result << endl;
    } else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            cout << "Result: " << result << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    } else if (op == '%') {
        if (num2 != 0) {
            result = num1 % num2;
            cout << "Result: " << result << endl;
        } else {
            cout << "Error: Modulo by zero is not allowed." << endl;
        }
    } else {
        cout << "Error: Invalid operator." << endl;
    }

    return 0;
}
