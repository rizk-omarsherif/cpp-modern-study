//============================================================================
// Name        : ex2.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 2 - Insertion and Extraction Operators
//============================================================================

#include <iostream>
#include <string>

int main() {
    // Using the insertion operator (<<) to display output
    std::string name;
    std::cout << "Enter your name: "; // Prompt the user
    std::cin >> name; // Extract input (stops at whitespace)
    std::cout << "Welcome, " << name << "!\n";

    // Displaying multiple values
    int length {5}, width = {10};
    std::cout << "Length: " << length << ", Width: " << width << "\n";

    // Taking multiple inputs
    int a, b;
    std::cout << "Enter two numbers separated by a space: ";
    std::cin >> a >> b;
    std::cout << "You entered: " << a << " and " << b << "\n";

    return 0;
}
