//============================================================================
// Name        : ex5.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 5 - Last 3 Digits! : if N<10000, print this is a small number
//											  otherwise, sum last 3 digits, if sum is odd, say this is a great number
//											  otherwise if sum is even, if any digit of last 3 is odd say this is a good number
//											  otherwise, say this is a bad number
//============================================================================

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 10000) {
        cout << "This is a small number\n";
    } else {
        // Extract the last three digits
        int digit1 = n % 10;
        n = n / 10;
        int digit2 = n % 10;
        n = n / 10;
        int digit3 = n % 10; // Old value of n is discarded

        // Calculate the sum of the last three digits
        int sum = digit1 + digit2 + digit3;

        if ((sum % 2) != 0) { // Check if the sum is odd
            cout << "This is a great number\n";
        } else {
            // Check if any of the last three digits are odd
            bool is_digit1_odd = (digit1 % 2 == 1);
            bool is_digit2_odd = (digit2 % 2 == 1);
            bool is_digit3_odd = (digit3 % 2 == 1);

            if (is_digit1_odd || is_digit2_odd || is_digit3_odd) {
                cout << "This is a good number\n";
            } else {
                cout << "This is a bad number\n";
            }
        }
    }

    return 0;
}
