//============================================================================
// Name        : ch2.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 2 - Write a program that reads 2 integers A,B
//               B is either 1 or -1 ; if -1 print 2*A+1 , if 1 print A*A
//============================================================================

#include<iostream>

int main() {

	int a,b;

	std::cin>> a >> b;

	// The 2 output equations
	int eq_b_is_1 = a*a;
	int eq_b_is_neg_1 = 2*a +1;


	// The trick: find relation so you can convert from [-1 1] to [0 1]
	int is_1 = (b+1)/2;
	int is_neg_1 = 1 - is_1;

	// Either 1 * is_1 equation + 0 * is_neg_1 equation when b =  1
	// or     0 * is_1 equation + 1 * is_neg_1 equation when b = -1
	std::cout<< is_1 * eq_b_is_1 + is_neg_1 * eq_b_is_neg_1;
	return 0;
}
