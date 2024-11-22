//============================================================================
// Name        : ch5.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 5 - Enter X then 5 numbers then print how many are smaller than or equal x and how many are bigger than x
//============================================================================

#include <iostream>

int main()
{
	int x, a,b,c,d,e, count=0;

	std::cout<< "Enter X: " << std::endl;
	std::cin>> x;

	std::cout<< "Enter 5 numbers: " << std::endl;
	std::cin>> a>>b>>c>>d>>e;

	count += (a<=x);
	count += (b<=x);
	count += (c<=x);
	count += (d<=x);
	count += (e<=x);

	std::cout<< count << " " << 5 - count << std::endl;

	return 0;
}
