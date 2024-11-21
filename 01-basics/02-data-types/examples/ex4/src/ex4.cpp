//============================================================================
// Name        : ex4.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 4 - Constants and Limits in C++
//============================================================================

#include <iostream>
#include <climits> // For INT_MAX, INT_MIN, UINT_MAX, LLONG_MAX

int main() {
    // Use capital letters for constants as a convention
    const double PI{3.14159};
    // PI = 10; // Uncommenting this line will cause a compile-time error (cannot modify a const)

    const int LUCKY{13}; // Using brace initialization
    // const int x; // Uncommenting this line will cause an error (const must be initialized)

    const char CHAR_VAL{'A'}; // A constant character value
    const std::string WELCOME_MSG{"Welcome to our BANK"}; // A constant string

    // Display constant values
    std::cout << "PI: " << PI << "\n";
    std::cout << "Lucky Number: " << LUCKY << "\n";
    std::cout << "Character Value: " << CHAR_VAL << "\n";
    std::cout << "Welcome Message: " << WELCOME_MSG << "\n\n";

    // Demonstrating C++ limits from <climits>
    std::cout << "Integer Max Value (INT_MAX): " << INT_MAX << "\n";
    std::cout << "Integer Min Value (INT_MIN): " << INT_MIN << "\n";

    // Constants for long and unsigned types
    const unsigned int UINT_MAX_VAL{UINT_MAX};
    const long long LONG_MAX_VAL{LLONG_MAX};

    std::cout << "Unsigned Integer Max Value: " << UINT_MAX_VAL << "\n";
    std::cout << "Long Long Max Value: " << LONG_MAX_VAL << "\n";

    return 0; // Indicate successful program execution
}
