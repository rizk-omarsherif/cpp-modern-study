//============================================================================
// Name        : ch7.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 7- Digits sum in range! Read 3 integers N,A,B
//													and print the summation of numbers between 1 and N whose sum of digits is between A and B
//============================================================================

#include <iostream>

int main() {
	int n,a,b,total{0};
	std::cin>>n >> a >> b;

	for (int i=0; i<=n; ++i)
	{
		int num=i;
		int digits_sum=0;

		while(num)
		{
			digits_sum += num%10;
			num/=10;
		}

		if (a<= digits_sum && b>= digits_sum)
		{
			total+=i;
		}
	}

	std::cout<<total;
	return 0;
}
