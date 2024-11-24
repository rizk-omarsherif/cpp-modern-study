//============================================================================
// Name        : ex4.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 4 - Count number of digits in an integer
//============================================================================

#include<iostream>
using namespace std;

int main() {
	int num, digits { 0 };

	cin >> num;

	if (0 == num) {
		digits = 1;
	}
	else if(-2147483648 == num) // handling overflow (just showing how edge cases are tricky and its not easy to write a complete program)
	{
		digits=10;
	}
	else {
		while ((num > 0) || (-num > 0)) {
			digits++;
			num /= 10;
		}
	}
	cout << digits << endl;
	return 0;
}
