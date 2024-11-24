//============================================================================
// Name        : ch1.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 1 - Print in range
//============================================================================

#include <iostream>

int main()
{

	int start, end;
	std::cout<< "Enter start number: " << std::endl;
	std::cin>>start;

	std::cout<< "Enter end number: " << std::endl;
	std::cin>>end;

	while (start<=end)
	{
		std::cout<<start<<std::endl;
		start++;
	}

	return 0;
}
