//============================================================================
// Name        : ch5.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 5- Find the prime!
//============================================================================

#include <iostream>

int main() {

	int num;
	bool is_prime= true;
	std::cin>>num;

	if (num<=1)
	{
		std::cout<<"Not prime"<<std::endl;
	}
	else
	{
		for (int i=2; i<num/2; ++i)
		{
			if (num%i==0)
			{
				is_prime=false;
				break;
			}
		}
	}

	std::cout<<is_prime;
	return 0;
}
