//============================================================================
// Name        : ch5.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 5- Read integer N and then print X using * (N always odd)
//============================================================================

#include <iostream>

int main() {

	int n;
	std::cout<<"Enter integer: "<<std::endl;
	std::cin>>n;

	for(int i=1; i<=n; ++i)
	{
		for(int j=1; j<=n; ++j)
		{
			if(i==j)
			{
				std::cout<<"*";
			}
			else if(j == n-i+1)
			{
				std::cout<<"*";
			}
			else
			{
				std::cout<<" ";
			}
		}
		std::cout<<std::endl;
	}
	return 0;
}
