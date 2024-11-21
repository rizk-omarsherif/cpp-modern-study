//============================================================================
// Name        : ch2.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 2 - Last 3 digits sum
//============================================================================

#include <iostream>

int main() {

	int a, last1, last2, last3, sum;

	std::cout<< "Enter an Integer: "<< std::endl;
	std::cin>> a ;

	last1 = a%10;
	a /= 10;

	last2 = a%10;
	a /= 10;

	last3 = a%10;
	a /= 10;

	sum = last1 + last2 + last3;


	std::cout<<sum;

	return 0;
}
