#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <operation> <num1> <num2>" << std::endl;
        return 1;
    }

    std::string aExpression = argv[1];
    int num1 = std::stoi(argv[2]);
    int num2 = std::stoi(argv[3]);

    // Performing operation based on user input
    if (aExpression == "add") {
        std::cout << num1 + num2;
    }
    else if (aExpression == "subtract")
    {
        std::cout << num1 - num2;
    }
    else if (aExpression == "multiply")
    {
        std::cout << num1 * num2;
    }
    else if (aExpression == "divide")
    {
        if (num2 != 0)
        {
            std::cout << num1 / num2;
        } else {
            std::cout << "Error: Division by zero is not allowed.";
        }
    } else {
        std::cout << "Invalid operation selected.";
    }

    return 0;
}

// #include <iostream>
// #include <string>

// int main()
// {
//     std::string aExpression; // Options: Add, subtract, multiply, divide
//     int num1, num2;

//     std::cout << "Welcome to oriel's maths!" << std::endl;

//     std::cout << "Select a mathematical expression (add, subtract, multiply, divide): ";
//     std::cin >> aExpression;

//     std::cout << "Type first number: ";
//     std::cin >> num1;

//     std::cout << "Type second number: ";
//     std::cin >> num2;

//     // Performing operation based on user input
//     if (aExpression == "add") {
//         std::cout << "Result: " << num1 + num2 << std::endl;
//     }
//     else if (aExpression == "subtract")
//     {
//         std::cout << "Result: " << num1 - num2 << std::endl;
//     }
//     else if (aExpression == "multiply")
//     {
//         std::cout << "Result: " << num1 * num2 << std::endl;
//     }
//     else if (aExpression == "divide")
//     {
//         if (num2 != 0)
//         {
//             std::cout << "Result: " << num1 / num2 << std::endl;
//         } else {
//             std::cout << "Error: Division by zero is not allowed." << std::endl;
//         }
//     } else {
//         std::cout << "Invalid operation selected." << std::endl;
//     }

//     std::cout << "Press Enter to continue..." << std::endl;
//     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//     std::cin.get();
//     return 0;
// }
