//============================================================================
// Name        : ch6.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 6 - Write a program that reads 2 numbers a,b and divides them, but prints the fraction part only!
//============================================================================

#include <iostream>

int main() {

	int a,b;

	std::cout<< "Enter 2 numbers:" << std::endl;
	std::cin>> a >> b;

	std::cout<< "a/b = " << a/b << std::endl;

	std::cout<< "Fraction part of divison = " << (a/double(b)) - (a/b);

    return 0;
}
