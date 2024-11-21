//============================================================================
// Name        : ch7.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 7 - Read 2 positive integers and print reminder of division without using the modulus operator &
//============================================================================

#include <iostream>

int main() {

	int a,b;

	std::cout<< "Enter 2 numbers:" << std::endl;
	std::cin>> a >> b;
	/*
	 * 13 % 5 = 2 [2 complete units, each is 5]
	 * 2 * 5 = 1- [total complete units]
	 * reminder us 13 - 10 = 3
	 */
	std::cout<< "Reminder of division = " << (a - (a/b) * b) << std::endl;

    return 0;
}
