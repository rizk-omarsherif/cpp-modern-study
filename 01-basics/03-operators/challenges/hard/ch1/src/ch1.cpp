//============================================================================
// Name        : ch1.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 1: Read an integer and print 100 if number is even or 7 if number is odd
//============================================================================

#include <iostream>

int main() {

	int x, out;
	bool is_even, is_odd;even

	std::cin>> x;

	is_even = (x%2 == 0);
	is_odd = 1 - is_even;

	std::cout << (is_even) * 100 + (is_odd * 7) << std::endl;
	return 0;
}
