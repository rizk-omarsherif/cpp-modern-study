/*
//============================================================================
// Name        : ch3.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 3- Read integer N (1<=30) and print all numbers that are multiple of 3 but not multiple of 4
//============================================================================
*/

/*
#include <iostream>

int main()
{

	int num{0}, iterator{1}, count{0};

	std::cout<< "Enter the number: " << std::endl;
	std::cin>>num;

	while (iterator)
	{
		if ( (0==iterator%3) && !(0==iterator%4))
		{
			std::cout<<iterator<<" ";;
			count++;
		}

		if (count==num)
		{
			break;
		}
		iterator++;
	}
	return 0;
}
*/

// Solution by Bernardo Salazar
// More efficient is to jump 3s

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int start = 3;
	while (n) {
		if(start % 4 != 0)	// make sure multiple of 4 too
			--n, cout<<start<<" ";
		start += 3;	// increment with 3: is multiple of 3
	}

	return 0;
}
