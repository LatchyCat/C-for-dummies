
// 1. The Purpose of #include <iostream>
// iostream stands for input-output stream and is part of the C++ Standard Library. It defines objects such as:

// std::cin: Used to receive input from the standard input (usually the keyboard).
// std::cout: Used to output data to the standard output (usually the screen).
// std::cerr: Used to output error messages.
// std::clog: Used for general logging.
// These objects are part of the std namespace, which is why using namespace std; is often used to avoid typing std:: every time.

//? Preprocessor Directive:
// This statement tells the compiler to include the input/output stream library so that functions like cin and cout can be used.
// iostream is enclosed in angle brackets < > because it’s part of the standard C++ library.
#include <iostream>
#include <string>


//? Namespace Declaration:
//!  Because we declar a namespace
//* we do not have to use
// std::
// This tells the compiler to use the std namespace globally, allowing you to use cout, cin, cerr, etc.,
// without prefixing them with std::. If you don’t use this, you will have to write std::cout and std::cin instead.
using namespace std;



//? Output with cout:
// string words;
// cout << "Hello, World!" << endl;

// cout (console output) is used to print data to the screen.
// << is the insertion operator that directs the output to the cout stream.
// "Hello, World!" is a string literal being sent to the output.
// endl is a special keyword that inserts a newline character (\n) and flushes the output buffer.


// int number;
// cin >> number;
// cout << "The number is: " << 42 << endl;


int main() {
    // Output example using cout
    cout << "Hello, World!" << endl;  // Moved inside main

    // Declare a string variable
    string words;

    // Declare a variable to store user input
    int number;

    // Input example using cin
    cout << "Enter a number: ";
    cin >> number;

    // Output the entered number
    cout << "You entered: " << number << endl;

    // Output another number directly
    cout << "The number is: " << 42 << endl;

    // Return 0 to indicate the program ended successfully
    return 0;
}
