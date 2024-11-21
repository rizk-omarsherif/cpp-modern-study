//============================================================================
// Name        : ch1.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 1 - Swapping 3 numbers! Do it in 4 lines!
//============================================================================

#include<iostream>

int main() {

	int num1, num2, num3;

	std::cout<< "Enter 3 numbers: " << std::endl;
	std::cin>> num1 >> num2 >> num3;

	std::cout<< "Numbers before swap:  " << std::endl << "num1 = " << num1 << "  num2 = " << num2 << "  num3 = " << num3 << std::endl;

	// 4 lines start here
	num1 = num1+num2+num3;
	num3 = num1-num2-num3;
	num2 = num1-num2-num3;
	num1 = num1-num2-num3;
	// 4 lines end here

	/*
	 temp = num1;
	 num1 = num2;
	 num2 = num3;
	 num3 = temp;
	 */

	std::cout<< "Numbers after swap:  " << std::endl << "num1 = " << num1 << "  num2 = " << num2 << "  num3 = " << num3 << std::endl;

	return 0;
}
