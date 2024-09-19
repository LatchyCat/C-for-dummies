#include <iostream>
#include <cmath>  // For pow()

int main() {
    int startingYear = 1971;  // Moore's Law starts around 1971
    int currentYear = 2024;   // Current year
    int yearsPassed = currentYear - startingYear;

    // Moore's Law: transistor count doubles every 2 years
    // Starting transistor count for Intel's 4004 processor in 1971 was 2,300
    double startingTransistorCount = 2300;

    // Calculate how many times transistor count has doubled
    int doublingPeriods = yearsPassed / 2;

    // Apply Moore's Law: transistorCount = startingTransistorCount * 2^doublingPeriods
    double transistorCount = startingTransistorCount * pow(2, doublingPeriods);

    // Output the result
    std::cout << "In " << currentYear << ", the estimated transistor count is: "
              << transistorCount << std::endl;

    return 0;
}

//! steps to run the code:
// mv MooresLaw.cpp MooresLaw.cpp
// g++ -o MooresLaw MooresLaw.cpp
// ./MooresLaw
