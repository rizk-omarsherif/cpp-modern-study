//============================================================================
// Name        : ch3.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 3 - Given 8 space-separated integers, find the sum of those in even places and those in odd places
//               ex: input => 11 2 7 9 12 -8 3 -1
//                   out   => 2 33
//============================================================================


#include<iostream>

int main(){

	int odd1, odd2, odd3, odd4;
	int even1, even2, even3, even4;

	std::cout<< "Enter the 8 numbers: ";

	std::cin>> odd1 >> even1 ;
	std::cin>> odd2 >> even2 ;
	std::cin>> odd3 >> even3 ;
	std::cin>> odd4 >> even4 ;

	std::cout<< "Sum of even = " << even1+even2+even3+even4 << std::endl;

	std::cout<< "Sum of odd = "  << odd1+odd2+odd3+odd4 << std::endl;

	return 0;
}
