//============================================================================
// Name        : ch2.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 2 - Replace MinMax: Read an integer (N<200), then read N integers (assume all value [0,2000])
// 							Print the array after doing the following: - find min and max number and swap them
//============================================================================

#include <iostream>

int main() {

	int a[200] { }, n, min { 2001 }, max { -1 };
	std::cin >> n;

	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];

		if (a[i] < min) {
			min = a[i];
		}

		if (a[i] > max) {
			max = a[i];
		}
	}

	for (int i = 0; i < n; ++i) {
		if (a[i] == max) {
			a[i] = min;
		} else if (a[i] == min) {
			a[i] = max;
		} else {

		}
	}

	for (int i = 0; i < n; ++i) {
		std::cout<< a[i]<<" ";
	}


	std::cout << "min = " << min << " " << "max = " << max;

	return 0;
}
