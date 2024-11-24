//============================================================================
// Name        : ch2.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 2- Multiplication Table! Read integer N and M, then print NxM lines for their multiplication table
//============================================================================

#include <iostream>

int main()
{
	int n,m;

	std::cout<<"Enter 2 integers: "<<std::endl;
	std::cin>>n>>m;;

	int i=1,j=1;;
	while (i<=n)
	{
		while(j<=m)
		{
			std::cout<<i<<" x "<<j<<" = "<<i*j<<std::endl;
			j++;
		}
		j=1;
		i++;
	}

	return 0;
}
