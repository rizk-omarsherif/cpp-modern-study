//============================================================================
// Name        : ch5.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 5- Read integer N then read N numbers and find average of odd positions and average of even positions
//============================================================================

#include <iostream>

int main()
{

	double list_numbers, even_num{0}, even_sum{0}, even_average{0}, odd_num{0}, odd_sum{0}, odd_average{0};
	int num, pos{1};
	std::cout<<"Enter numer: "<< std::endl;
	std::cin>>num;

	while(pos<=num)
	{
		std::cin>>list_numbers;

		if (0==pos%2)
		{
			even_sum+=list_numbers;
			even_num++;
		}
		else
		{
			odd_sum+=list_numbers;
			odd_num++;
		}
		pos++;
	}

	even_average = even_sum/even_num;
	odd_average = odd_sum/odd_num;

	std::cout<<"Even positions average = " << even_average << std::endl;
	std::cout<<"Odd positions average = " << odd_average << std::endl;

	return 0;
}
