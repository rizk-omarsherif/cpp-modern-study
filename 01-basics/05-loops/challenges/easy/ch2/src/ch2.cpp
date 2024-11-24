//============================================================================
// Name        : ch2.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 2 - Read an integer N followed by a single char then output the char N times
//============================================================================

#include <iostream>

int main()
{

	int num;
	char character;
	std::cout<< "Enter the number: " << std::endl;
	std::cin>>num;

	std::cout<< "Enter the character: " << std::endl;
	std::cin>>character;

	while (num>0)
	{
		std::cout<<character;
		num--;
	}

	return 0;
}
