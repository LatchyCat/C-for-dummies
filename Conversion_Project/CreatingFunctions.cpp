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
            // Clear any extra input in the buffer
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return input;
        }
        // Clear the error state and ignore bad input
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a number." << endl;
    }
}

int main() {
  // Prompt for two numbers using getValidInput
    int testNum1 = getValidInput("Enter the first number: ");
    int testNum2 = getValidInput("Enter the second number: ");

    // Add the numbers using addNumbers
    int result = addNumbers(testNum1, testNum2);

    // Display the result
    cout << "The result is: " << result << endl;

    return 0; // Program ended successfully
}

//! Testing file and it works successfully
// ╰─± g++ CreatingFunctions.cpp -o outputfile
// ╭─latchy at Oriel’s MacBook Pro in ~/CPlusPlus_Programs/Conversion_Project on main✘✘✘
// ╰─± ./outputfile
// Enter the first number: aas
// Invalid input. Please enter a number.
// Enter the first number: 22
// Enter the second number: asdas
// Invalid input. Please enter a number.
// Enter the second number: 10
// The result is: 32
