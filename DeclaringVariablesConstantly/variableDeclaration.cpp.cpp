#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Round numbers" << endl;

    int nAverage;
    int nValue1 = 16, nValue2 = 10, nValue3 = 90;

    nAverage = (nValue1 + nValue2 + nValue3) / 3;

    cout << "Result: " << nAverage << endl;

    return 0;
}

//! steps to run the code:
// mv variableDeclaration.cpp.cpp variableDeclaration.cpp
// g++ -o variableDeclaration variableDeclaration.cpp
// ./variableDeclaration
