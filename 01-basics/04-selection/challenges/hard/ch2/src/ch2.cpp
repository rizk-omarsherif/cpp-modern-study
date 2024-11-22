//============================================================================
// Name        : ch2.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 2 - Read 4 numbers representing 2 intervals and print their intersection interval.
//								if they don't intersect , print -1
//============================================================================

#include <iostream>

int main() {

	int s1, e1, s2, e2;

	std::cout << "Enter [S1 and E1]: " << std::endl;
	;
	std::cin >> s1 >> e1;
	std::cout << "Enter [S2 and E2]: " << std::endl;
	;
	std::cin >> s2 >> e2;

	if (e1 < s2 || e2 < s1) {
		std::cout << -1 << std::endl;
	} else {
		if (s1 < s2)
			s1 = s2;

		if (e1 > e2)
			e1 = e2;

		std::cout << "Interval of intersection is [ " << s1 << " " << e1 << " ]"
				<< std::endl;
	}

	return 0;
}
