//============================================================================
// Name        : ex5.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Examples 5 - Find most frequent number
//============================================================================

// Faster method (frequency array)

#include<iostream>
using namespace std;

int main() {
	int n, numbers[200];

	// Be careful: max value is 150.
	// So we need to access the array at 150
	int frequency[150+1] = {0};	// {0} set all to zeros

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> numbers[i];
		frequency[numbers[i]]++;
	}

	// just find max position in the array
	int max_pos = -1;

	for (int i = 0; i < 151; ++i)	// Iterate on ALL array
	{
		if (max_pos == -1 || frequency[max_pos] < frequency[i])
			max_pos = i;
	}
	cout<<max_pos<<" repeated "<<frequency[max_pos]<<" times";

	return 0;
}



/*
#include<iostream>
using namespace std;

int main() {
	int n, numbers[200];

	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> numbers[i];

	int max_value = -1, max_repeat = -1;

	for (int i = 0; i < n; ++i)
	{
		// count how many times numbers[i] exists
		int repeat = 0;
		for (int j = 0; j < n; ++j)
			repeat += numbers[i] == numbers[j];

		if (max_repeat == -1 || max_repeat < repeat)
			max_repeat = repeat, max_value = numbers[i];
	}
	cout<<max_value<<" repeated "<<max_repeat<<" times";

	return 0;
}
*/
