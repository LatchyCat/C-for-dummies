#include <iostream>
#include <string>
#include <limits>
using namespace std;

int addNumbers(int num1, int num2) {
    return num1 + num2;
}

int getValidInput(const string& prompt) {
    int input;
    while (true) {
        cout << prompt;
        if (cin >> input) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return input;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a number." << endl;
    }
}

int main() {
    // This program demonstrates the use of functions for input validation and addition

    // addNumbers: A function that takes two integers and returns their sum
    // getValidInput: A function that prompts the user for input and ensures it's a valid integer

    // Main function: Orchestrates the program flow
    // 1. Prompts for two numbers using getValidInput
    // 2. Adds the numbers using addNumbers
    // 3. Displays the result

    int testNum1 = getValidInput("Enter the first number: ");
    int testNum2 = getValidInput("Enter the second number: ");

    int testNum1, testNum2;
    cout << "Enter the first number: ";
    cin >> testNum1;
    cout << "Enter the second number: ";
    cin >> testNum2;
    int result = addNumbers(testNum1, testNum2);
    cout << "The result is: " << result << endl;

    if (cin.fail()) {
        cout << "Invalid input. Operation failed." << endl;
        return 1;
    } else {
        cout << "The result is: " << result << endl;
        return 0;
    }
}
