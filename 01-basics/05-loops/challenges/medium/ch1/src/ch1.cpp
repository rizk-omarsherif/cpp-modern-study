//============================================================================
// Name        : ch1.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 1- Read integer N and then print diamond of 2N rows
//============================================================================

/*
#include <iostream>

int main()
{

	int num{0}, row{1}, count{0};

	std::cout<< "Enter the number: " << std::endl;
	std::cin>>num;

	while (row<=num)
	{
		count=0;;
		while (count <= num-row)
		{
			if (count == (num-row))
			{
				while(count <= num+row-1)
				{
					if (count == num+row-1)
					{
						std::cout<<std::endl;
					}
					else
					{
						std::cout<<"*";
					}
					count++;
				}
			}
			else
			{
				std::cout<<" ";
				count++;
			}
		}
		row++;
	}

	row=num;
	count=0;

	while (row>0)
	{
		count=0;;
		while (count <= num-row)
		{
			if (count == (num-row))
			{
				while(count <= num+row-1)
				{
					if (count == num+row-1)
					{
						std::cout<<std::endl;
					}
					else
					{
						std::cout<<"*";
					}
					count++;
				}
			}
			else
			{
				std::cout<<" ";
				count++;
			}
		}
		row--;
	}
	return 0;
}
*/
/*
 *
 * Given a number N. Print diamond of 2N rows as in.
 * 	https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X
 */

#include<iostream>
using namespace std;

int main() {
	int N;

	cin >> N;

	/*
	 * Let's print the upper triangle first
	 * Let's assume N = 4, how many spaces and starts we print
	 * Row 1	Spaces 3	Stars 1
	 * Row 2	Spaces 2	Stars 3
	 * Row 3	Spaces 1	Stars 5
	 * Row 4	Spaces 0	Stars 7
	 *
	 * Now we wanna develop formulas for number of spaces and number of starts
	 * For a given 'row'
	 * 	Spaces are: N - rows   	(3, 2, 1, 0)
	 * 	Starts are: 2*row -1	(1, 3, 5, 7)
	 *
	 * Now we just iterate for each row
	 * 	print spaces
	 * 	then print starts
	 */
	int row = 1;
	while (row <= N) {
		int stars_count = 1;

		// Print N - rows spaces
		while (stars_count <= N-row) {
			cout << ' ';
			++stars_count;
		}

		// Print 2*rows-1 stars
		stars_count = 1;
		while (stars_count <= 2*row-1) {
			cout << '*';
			++stars_count;
		}
		cout << "\n";
		++row;
	}

	/*
	 * Let's print the lower triangle second
	 * Same logic, we just switch looping from N to 1
	 */
	row = N;
	while (row >= 1) {
		int stars_count = 1;

		while (stars_count <= N-row) {
			cout << ' ';
			++stars_count;
		}

		stars_count = 1;

		while (stars_count <= 2*row-1) {
			cout << '*';
			++stars_count;
		}
		cout << "\n";
		--row;
	}
	return 0;
}

