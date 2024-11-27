//============================================================================
// Name        : ch1.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 1 - Is increasing array?
//								Read N then read N<=200 integers.  Print YES if array is increasing (every element is >= prev)
//============================================================================


#include <iostream>

int main()
{

	int a[200]{};
	int n;
	bool is_inc = true;

	std::cout<<"Enter a number: "<<std::endl;
	std::cin>>n;
	for (int i=0; i<n ;++i)
	{int element=0;

		std::cin>>element;
		a[i] = element;
	}

	for (int i=1; i<n; i++)
	{
		if (a[i]<a[i-1])
		{
			is_inc=false;
			break;
		}
	}

	if (is_inc==true)
	{
		std::cout<<"YES";
	}
	else
	{
		std::cout<<"NO";
	}
	return 0;
}
