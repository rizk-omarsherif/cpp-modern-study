/*
//============================================================================
// Name        : ch4.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 4- Read integer T for a number of test cases.
 * 								for each test case read integer N followed by reading N integers
 * 								output: for each test case, print the minimum of the N integers.
//============================================================================
*/

#include <iostream>

int main()
{
	int number_of_test_cases, number_of_integers, num;
	int test_counter{0}, integer_counter{0}, min_value{0};

	std::cout<<"Enter number of test cases: "<<std::endl;
	std::cin>>number_of_test_cases;

	while(test_counter<number_of_test_cases)
	{
		std::cout<<"Test case number " << test_counter+1 << " : " << std::endl;
		std::cout<<"Enter number of following integers: "<<std::endl;
		std::cin>>number_of_integers;

		integer_counter=0;

		while(integer_counter<number_of_integers)
		{

			std::cout<<"Enter any number: "<<std::endl;
			std::cin>>num;

			if (integer_counter==0)
			{
				min_value=num;
			}

			if (num<min_value)
			{
				min_value=num;
			}

			integer_counter++;
		}

		std::cout<<min_value<<std::endl;
		test_counter++;
	}

	return 0;
}
