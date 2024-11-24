//============================================================================
// Name        : ex5.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 5 - For loop tracing example (tricky)
//============================================================================

#include<iostream>
using namespace std;

int main() {
	int t = 0;
	for (int c = 0; c < 3; ++c) {
		for (int var = 0; var < 4; ++var)
			for (int h = 0; h < 2; ++h)
				++t;
			++t;
		++t;

		// last 2 ++t are in first loop, so its same as t+=2
	}
	cout << t;

	return 0;
}
