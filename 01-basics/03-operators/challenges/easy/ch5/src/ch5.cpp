//============================================================================
// Name        : ch5.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 5 - Averages
//============================================================================

#include <iostream>

int main() {

	double num1, num2, num3, num4, num5;

	std::cout<< "Enter 5 numbers:" << std::endl;
	std::cin>> num1 >> num2 >> num3 >> num4 >> num5;

	std::cout<< "Average = " << (num1 + num2 + num3 + num4 + num5) / 5 << std::endl;
	std::cout<< "Sum 0f first 3 numbers / sum of last 2 numbers = " << (num1+num2+num3) / (num4+num5) << std::endl;
	std::cout<< "Average 0f first 3 numbers / average of last 2 numbers = " << ((num1+num2+num3)/3) / ((num4+num5)/2) << std::endl;

    return 0;
}
