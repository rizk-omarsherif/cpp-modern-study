//============================================================================
// Name        : ex4.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 4 - Is even? Print Digits.
//                           Read an integer N, then: if it's even, print last digit of it
//							                          if it's odd, if < 1000, print last 2 digits
//													  if > 1000 and < 1000000, print last 4 digits
//                                                    otherwise, print its negative value
//============================================================================

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    bool is_even = (num % 2 == 0);

    if (is_even) {
        // If the number is even, output the last digit
        cout << num % 10 << "\n";
    } else {
        // If the number is odd, evaluate further conditions
        if (num < 1000) {
            // Output the last 2 digits if the number is less than 1000
            cout << num % 100 << "\n";
        } else if (num < 1000000) {
            // Output the last 4 digits if the number is less than 1,000,000
            cout << num % 10000 << "\n";
        } else {
            // For larger numbers, output the negative of the number
            cout << -num << "\n";
        }
    }

    return 0;
}
