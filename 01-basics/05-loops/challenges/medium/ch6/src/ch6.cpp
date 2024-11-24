//============================================================================
// Name        : ch6.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 6- Find special pairs: Count how many X,Y numbers such that X in range [50-300]
//																					   Y in range [70-400]
//																					   X<Y and X+Y divisble by 7
//============================================================================

#include <iostream>

int main() {

	int count =0;

	for (int y=70; y<=400; ++y)
	{
		for (int x=50; x<=300; ++x)
		{
			if ( (x<y) && (x+y)%7==0)
			{
				count++;
			}
		}
	}

	std::cout<<count;

	return 0;
}
