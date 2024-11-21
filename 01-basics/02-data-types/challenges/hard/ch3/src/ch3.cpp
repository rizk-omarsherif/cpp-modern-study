//============================================================================
// Name        : ch3.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 3 - Read integer N and print the sum from 1 to N
//============================================================================

#include<iostream>

int main() {

	int n;
	std::cin>> n;

	/* An intuition for N = 8
								1+2+3+4+5+6+7+8
								1 8 - 2 7 - 3 6 - 4 5    [first and last] [2nd and 2nd from back] ...
								value of each pair = 9 which is n+1
								how many pairs? 	 4 which is n/2
								so n/2 pairs, each has value n+1
								so total sum = n/2 * (n+1) 											*/

	/* An intuition for N = 7
	 	 	 	 	 	 	 	1+2+3+4+5+6+7
	 	 	 	 	 	 	 	1 7 - 2 6 - 3 5 - 4
	 	 	 	 	 	 	 	so 3 pairs each of value n+1
	 */

	// Solve in 1 line
	std::cout<< n*(n+1)/2;
	return 0;
}
