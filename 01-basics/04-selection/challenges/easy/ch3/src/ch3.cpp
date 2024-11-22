//============================================================================
// Name        : ch3.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 3 - Order 3 numbers in ascending order
//============================================================================

#include <iostream>

int main(){

	int a,b,c;
	std::cin>> a >> b >> c;

	if (int temp=a; b<a)
	{
		a = b;
		b = temp;
	}

	if (int temp=b; c<b)
	{
		b = c;
		c = temp;
	}

	if (int temp=a; b<a)
	{
		a = b;
		b = temp;
	}

	std::cout<< a << b << c;

	return 0;
}
