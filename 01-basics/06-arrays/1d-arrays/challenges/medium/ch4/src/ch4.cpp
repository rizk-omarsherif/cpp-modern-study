//============================================================================
// Name        : ch4.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 4 - Read N numbers <=200 for all digits from 0 to 9, we want to know how many times it has appeared.
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, x, occurrence[10] = {0};

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;

		if (x == 0)
			occurrence[0]++;

		while (x) {
			int digit = x % 10;
			occurrence[digit]++;
			x /= 10;
		}

	}
	for (int i = 0; i <= 9; i++) {
		cout << i << " " << occurrence[i] << endl;
	}

}
