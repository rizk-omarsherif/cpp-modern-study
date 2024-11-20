//============================================================================
// Name        : ex3.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 3 - Output Formatting and Printing Different Types
//============================================================================

#include <iostream> // Include library for input/output operations

int main() {

    std::cout << 1 << "\n";									// Simple integer output
    std::cout << 1 + 2 - 3 + 4 << "\n";  					// Simple arithmetic result
    std::cout << "1+2-3+4" << "\n";  						// Printing the arithmetic expression as a string
    std::cout << "1+2-3+4 = " << 1 + 2 - 3 + 4 << "\n\n";  	// Expression with result

    // Displaying numbers with different formats
    std::cout << "2*3*4 = " << 2 * 3 * 4 << "\n";  			// Multiplication result
    std::cout << "12/2/3 = " << 12 / 2 / 3 << "\n\n";  		// Sequential division

    // Integer and floating-point division comparison
    std::cout << "6/2 = " << 6 / 2 << "\n"; 			 // Integer division (result is 3)
    std::cout << "7/2 = " << 7 / 2 << "\n";  			 // Integer division (truncated result)
    std::cout << "7.0/2.0 = " << 7.0 / 2.0 << "\n"; 	 // Floating-point division
    std::cout << "7/2.0 = " << 7 / 2.0 << "\n\n";  		 // Mixed division (result is 3.5)

    // Handling large numbers and overflow
    std::cout << 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 << "\n";  		// Large number
    std::cout << 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 << "\n";  	// Integer overflow

    // Output different types (integer and string mixed)
    std::cout << 123 << " is a number\n";  			// Integer followed by a string
    std::cout << "123" << " is NOT a number\n\n";  	// String followed by another string

    // Floating-point number output
    std::cout << 15.7   << "\n";    // Positive floating-point
    std::cout << -12.52 << "\n\n";  // Negative floating-point

    // Large integer outputs and concatenation
    std::cout << 43211234 << "\n";      // Large integer output
    std::cout << 4321 << 1234 << "\n";  // Concatenation of two integers

    // Custom message output
    std::cout << "I was born on: " << 9 << "th of September\n";  // Mixed string and integer output

    return 0; // Indicate successful program execution
}
