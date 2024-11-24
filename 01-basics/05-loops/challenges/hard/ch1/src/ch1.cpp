//============================================================================
// Name        : ch1.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 1- Reverse number and print its triple
//============================================================================

#include <iostream>

int main()
{
	int num,rev=0,rev_triple=0;
	std::cout<<"Enter an integer: "<<std::endl;
	std::cin>>num;

	while(num>0)
	{
		rev = rev*10 + (num%10);

		num/=10;
	}
	rev_triple = rev*3;
	std::cout<<rev<<" "<<rev_triple;
	return 0;
}
