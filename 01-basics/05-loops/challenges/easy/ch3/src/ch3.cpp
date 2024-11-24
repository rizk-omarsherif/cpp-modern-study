//============================================================================
// Name        : ch3.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 3- Read integer N and then print left angle triangle of N rows
//============================================================================

#include <iostream>

int main()
{

	int num,row=1,stars_count=1;
	std::cout<< "Enter the number: " << std::endl;
	std::cin>>num;

	while (row <= num)
	{
		stars_count=1;

		while(stars_count <= row)
		{
			std::cout<<"*";
			++stars_count;
		}
		std::cout<<std::endl;
		row++;
	}

	return 0;
}
