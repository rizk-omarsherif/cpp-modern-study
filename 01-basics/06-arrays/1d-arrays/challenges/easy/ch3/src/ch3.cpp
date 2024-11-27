//============================================================================
// Name        : ch3.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 3 - Enter an ordered list and print it without duplicates
//============================================================================

#include <iostream>

int main() {
	int n;   // assume n > 0
	std::cin >> n;

	// As the list is sorted, it is enough to check if an element as same as the previous or not
	// if equal, then duplicate. If not, then it is the first of its value!

	int last_value = -1;
	for (int i = 0; i < n; i++) {
		int value;
		std::cin >> value;

		if (value != last_value)
			std::cout << value << " ";

		last_value = value;
	}
	return 0;
}
