//============================================================================
// Name        : ch4.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 4- Find all quadruples: How many (a,b,c,d) with the following property:
//																					1 <= a,b,c,d <= 200
//																					a+b = c+d
//============================================================================

#include <iostream>

int main() {
	int d=0,count=0;

	for (int a=1; a<=200; ++a)
		for (int b=1; b<=200; ++b)
			for (int c=1; c<=200; ++c)
			{
				d = a+b-c;

				if ( d>=1 && d<=200)
				{
					count++;
				}
			}
	std::cout<<count;
	return 0;
}
