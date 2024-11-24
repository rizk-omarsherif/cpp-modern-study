//============================================================================
// Name        : ch6.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 6- Print primes separated by commas!
//============================================================================

#include <iostream>

int main() {

	int n;
	bool is_prime = true, first_print=true;;

	std::cout << "Enter any number: " << std::endl;
	std::cin >> n;

	for (int  i= 2; i <= n; ++i)
	{
		is_prime = true;

		if (i == 2 || i == 3)
		{
			std::cout << i << ",";
			continue;
		}

		for (int j = 2; j <= i/2; ++j)

		{
			if (i % j == 0)
			{
				is_prime=false;
				break;
			}
		}

		if (is_prime==true)
		{
			if (first_print==false)
			{
				std::cout << ",";

			}

			std::cout << i;
			first_print=false;
		}
	}
	return 0;
}
