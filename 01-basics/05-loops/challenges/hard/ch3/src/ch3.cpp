//============================================================================
// Name        : ch3.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 3- Special Sum! -
//============================================================================

//============================================================================
// Name        : ch3.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 3 - Special Sum!
//============================================================================

/*
Challenge #3: Special Sum

Description:
- You are given T test cases.
- For each test case:
  1. Read an integer N (the number of integers in the sequence).
  2. Then read N integers: a, b, c, ...
  3. Compute the sum of the following special expression:
     - The k-th number in the sequence is raised to the power of k.
     - For example:
       - If the sequence is 5, 7, 2:
         - Compute: (5^1 + 7^2 + 2^3)
       - If the sequence is 1, 2, 3, 4:
         - Compute: (1^1 + 2^2 + 3^3 + 4^4)

Input:
- The first line contains an integer T, the number of test cases.
- For each test case:
  - The first line contains an integer N, the number of integers in the sequence.
  - The second line contains N integers separated by spaces.

Output:
- For each test case, output a single integer: the result of the special sum.

Example:
Input:
2
3 5 7 2
4 1 2 3 4

Output:
62
288

Explanation:
- For the first test case:
  (5^1 + 7^2 + 2^3) = (5 + 49 + 8) = 62
- For the second test case:
  (1^1 + 2^2 + 3^3 + 4^4) = (1 + 4 + 27 + 256) = 288
*/


#include <iostream>

int main()
{
	int test,number_of_integers_in_case, num=0, i=1, j=1,sum=0, prod=1;

	std::cout<<"Enter number of tests: "<<std::endl;
	std::cin>>test;

	while(test>0)
	{
		std::cout<<"Enter number of integers in test case: "<<std::endl;
		std::cin>>number_of_integers_in_case;

		i=1;
		while(i<=number_of_integers_in_case)
		{
			std::cin>>num;
			j=1;
			prod=1;
			while(j<=i)
			{
				prod *= num;
				j++;
			}
			sum += prod;
			i++;;
		}
		test--;
		std::cout<<sum<<std::endl;
		sum=0;
	}

	return 0;
}
