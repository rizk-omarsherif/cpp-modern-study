//============================================================================
// Name        : ex3.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 3 - Read X and Y computer X to the power of Y
//============================================================================


#include<iostream>
using namespace std;

int main()
{
	int num,pow, result{1}; ;

	cin>>num >>pow;

	while (pow>=1)
	{
		result *= num;

		pow--;
	}

	cout<< result<<endl;
	return 0;
}
