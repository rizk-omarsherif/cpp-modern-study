//============================================================================
// Name        : ex1.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 1 - Basic Conditional Statements in C++
//============================================================================

#include <iostream>
using namespace std;

int main() {
    // Example 1: Basic if-statement
    int salary;
    cout << "Enter your salary: ";
    cin >> salary;

    if (salary < 1000) {
        cout << "This is below average\n";
    }

    cout << "Bye\n";

    // Example 2: if-statement with a block and scope
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num == 10) {
        int x = 3; // Variable x is scoped within this block
        cout << "10 is a lucky number\n";
        cout << "Also " << 2 * num + x << "\n";
    }

    // Variable x is not visible here and cannot be used.

    return 0;
}
