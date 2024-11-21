//============================================================================
// Name        : ch1.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 1 - Is even? Use 3 different methods %2 /2 %10
//============================================================================

#include <iostream>

int main() {

	int a;
	bool is_even1,is_even2,is_even3;

	std::cin>> a ;

	is_even1 = (a%2 == 0);
	is_even2 = ( ((a/2.0) - (a/2)) == 0 );
	is_even3 = (a%10 == 0) || (a%10 == 2) || (a%10 == 4) || (a%10 == 6) || (a%10 == 8) ;

	std::cout<< is_even1 << is_even2 << is_even3;

	return 0;
}
