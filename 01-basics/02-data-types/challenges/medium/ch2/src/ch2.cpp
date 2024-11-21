//============================================================================
// Name        : ch2.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 2 - Swap 2 integers
//============================================================================

#include<iostream>

int main() {
	int num1, num2, temp;

	std::cout<< "Enter 2 numbers: ";
	std::cin>> num1 >> num2;

	std::cout<< "Before swap: " << std::endl << "num1 = " << num1 << std::endl << "num2 = " << num2 << std::endl;

	temp = num1;
	num1 = num2;
	num2 = temp;
	std::cout<< "After swap: " << std::endl << "num1 = " << num1 << std::endl << "num2 = " << num2 << std::endl;

	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	std::cout<< "After swapping again: " << std::endl << "num1 = " << num1 << std::endl << "num2 = " << num2 << std::endl;

	num1 = num1 * num2;
	num2 = num1 / num2;
	num1 = num1 / num2;
	std::cout<< "After swapping again: " << std::endl << "num1 = " << num1 << std::endl << "num2 = " << num2 << std::endl;

	num1 = num1 * num2;
	num2 = num1 / num2;
	num1 = num1 / num2;
	std::cout<< "After swapping again: " << std::endl << "num1 = " << num1 << std::endl << "num2 = " << num2 << std::endl;

	return 0;
}
