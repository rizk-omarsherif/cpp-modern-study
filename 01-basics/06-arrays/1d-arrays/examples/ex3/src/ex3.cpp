//============================================================================
// Name        : ex3.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Examples 3 - find pair values of maximum sum
//============================================================================

#include<iostream>
using namespace std;

// just find max 2 numbers and add them
int main() {
	int n, numbers[200];	// max expected size

	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> numbers[i];

	int max1, max2;
	if (numbers[0] >= numbers[1])
		max1 = numbers[0], max2 = numbers[1];
	else
		max1 = numbers[1], max2 = numbers[0];

	for (int i = 2; i < n; ++i)
		if (max1 <= numbers[i])
			max2 = max1, max1 = numbers[i];
		else if (max2 < numbers[i])
			max2 = numbers[i];

	cout << "max sum = " << max1 + max2;
	return 0;
}
