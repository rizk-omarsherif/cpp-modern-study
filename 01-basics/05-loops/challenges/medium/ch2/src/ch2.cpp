/*
//============================================================================
// Name        : ch2.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 2- Read integer N and print all numbers that satisfy the following:
//											Either is divisble by 8 or divisible by both 4 and 3
//============================================================================
*/

#include <iostream>

int main()
{

	int num{0}, iterator{0};

	std::cout<< "Enter the number: " << std::endl;
	std::cin>>num;

	while (iterator<=num)
	{
		if ( (0==iterator%8) || ( (0==iterator%4) && (0==iterator%3) ) )
		{
			std::cout<<iterator<<" ";;
		}
		iterator++;
	}
	return 0;
}
