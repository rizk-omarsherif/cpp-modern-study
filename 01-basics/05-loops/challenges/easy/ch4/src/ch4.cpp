//============================================================================
// Name        : ch4.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 4- Read integer N and then print left angle triangle of N rows upside down!
//============================================================================

#include <iostream>

int main()
{

	int num,row=1,stars_count=1;
	std::cout<< "Enter the number: " << std::endl;
	std::cin>>num;

	while (num)
	{
		stars_count=1;

		while(stars_count <= num)
		{
			std::cout<<"*";
			++stars_count;
		}
		std::cout<<std::endl;
		num--;
	}

	return 0;
}
