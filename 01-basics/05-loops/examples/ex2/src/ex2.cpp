//============================================================================
// Name        : ex2.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 2 - NUmbers divisible by 3 when start = 1 and end = user input
//============================================================================


#include<iostream>
using namespace std;

int main()
{
	int end, start{1};

	cin>>end;

	while (start<=end)
	{
		if (0==start%3)
		{
			cout<< start << endl;
		}

		start++;
	}
	return 0;
}
