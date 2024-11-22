//============================================================================
// Name        : ex9.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 9 - Nested Selection Initializer
//============================================================================

#include <iostream>
using namespace std;

int main() {
    int n = 123;

    // you can initialize more than one variable
    if (int digitSum = (n % 10) + (n / 10 % 10) + (n / 100), y=7; digitSum > 10) {
        cout << "The sum of the digits (" << digitSum << ") is greater than 10.\n";
    } else if (digitSum == 10) {
        cout << "The sum of the digits is exactly 10.\n";
    } else {
        cout << "The sum of the digits (" << digitSum << ") is less than 10.\n";
        cout<<y;
    }

    // cout << digitSum << y; // Error: 'digitSum' is not visible here

    return 0;
}
