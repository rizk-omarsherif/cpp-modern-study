//============================================================================
// Name        : ch4.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 4 - Is Palindrome?
//============================================================================

#include <iostream>

int main() {
	// The size of the array should be larger than
	// the maximum value of N (1000)
	int arr[999];

	int N;
	std::cin >> N;

	for (int i = 0; i < N; i++)
		std::cin >> arr[i];

	for (int i = 0; i < N / 2; i++) {
		if (arr[i] != arr[N - 1 - i]) {
			std::cout << "NO";
			return 0;
		}
	}
	std::cout << "YES";
	return 0;
}
