//============================================================================
// Name        : ex2.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 2 - Print Multiple Print Statements in Different Ways
//============================================================================

#include <iostream> // Include library for input/output operations

int main() {

    // Using \n for new line
    std::cout << "I am Omar Rizk.\nI was born in Cairo.\nI graduated from AAST.\n\n";
    // Note: '\n' is a newline character that simply moves the cursor to the next line.

    // Using std::endl for new line
	std::cout << "I am Omar Rizk." << std::endl;
    std::cout << "I was born in Cairo." << std::endl;
    std::cout << "I graduated from AAST." << std::endl;
    // Note: std::endl does two things:
    // 1. Moves the cursor to the next line (like '\n').
    // 2. Flushes the output buffer, ensuring the content is immediately displayed.

    // Indicate successful program termination
    return 0;
}
