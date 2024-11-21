//============================================================================
// Name        : ch1.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 1 - Write a program that reads 2 numbers and print their +-*/
//============================================================================

#include<iostream>

int main(){

	double number_1, number_2;

	std::cout << "Enter 2 numbers separated by a space: ";
	std::cin >> number_1 >> number_2;

	std::cout << "The two numbers are: " << number_1 << " and " << number_2 << std::endl;
	std::cout << number_1 << " + "  << number_2 << " = " << number_1 + number_2 << std::endl;;
	std::cout << number_1 << " - "  << number_2 << " = " << number_1 - number_2 << std::endl;;
	std::cout << number_1 << " * "  << number_2 << " = " << number_1 * number_2 << std::endl;;
	std::cout << number_1 << " / "  << number_2 << " = " << number_1 / number_2 << std::endl;;

	return 0;
}
