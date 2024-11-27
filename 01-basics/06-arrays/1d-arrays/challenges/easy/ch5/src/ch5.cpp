//============================================================================
// Name        : ch5.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 5 - Smallest pair
//============================================================================

#include<iostream>

int main() {
	const int N = 200;

	int n, a[N];

	std::cin >> n;
	for (int i = 0; i < n; i++)
		std::cin >> a[i];

	/**
	 let's calculate Ai+Aj+j-i for every pair (i,j)
	 such that i < j
	 this can be done using nested for loops.
	 **/
	// let's use some big value and later minimize
	int mn;
	bool first_time = true;

	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			int tmp = a[i] + a[j] + j - i;
			if (first_time || tmp < mn) {
				mn = tmp;
				first_time = false;
			}
		}
	}
	std::cout << mn << std::endl;
	return 0;
}
