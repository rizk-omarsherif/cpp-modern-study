//============================================================================
// Name        : ch4.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 4 - Given 3 integers, you have to find the biggest one of them which is < 100
//												print -1 if no such number
//============================================================================

#include <iostream>

int main(){

	int a,b,c,temp=-1;

	std::cin>> a >> b >> c;

	if (a<100 && a>temp)
	{
		temp = a;
	}

	if (b<100 && b>temp)
	{
		temp = b;
	}

	if (c<100 && c>temp)
	{
		temp = c;
	}

	std::cout<<temp;
	return 0;
}
