//============================================================================
// Name        : ch1.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 1 - Determine the Number of Digits in an Integer
//============================================================================

#include <iostream>

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    if (num < 10)
    	std::cout << "1 digit\n";
    else if (num < 100)
    	std::cout << "2 digits\n";
    else if (num < 1000)
    	std::cout << "3 digits\n";
    else if (num < 10000)
    	std::cout << "4 digits\n";
    else
    	std::cout << "5 or more digits\n";

    return 0;
}
