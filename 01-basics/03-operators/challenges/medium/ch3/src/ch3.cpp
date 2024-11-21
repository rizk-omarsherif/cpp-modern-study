//============================================================================
// Name        : ch3.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 3 - Get 4th digit from the back
//============================================================================

#include <iostream>

int main() {

	int a;

	std::cout<< "Enter an Integer: "<< std::endl;
	std::cin>> a ;

	std::cout<< (a/1000) % 10;

	return 0;
}
