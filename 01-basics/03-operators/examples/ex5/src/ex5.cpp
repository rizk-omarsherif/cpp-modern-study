//============================================================================
// Name        : ex5.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Relational Operators: Comparison of integers, strings, and floating-point numbers
//============================================================================

#include <iostream>
using namespace std;

int main() {
    // Example 1: Relational Operators with Integers
    int x = 3, y = 5;

    bool result = (x > y);
    cout << result << "\n"; // 0 (false)

    result = (x < y);
    cout << result << "\n"; // 1 (true)

    cout << !result << "\n"; // 0 (false)
    cout << !(x < y) << "\n\n"; // 0 (false)

    // Example 2: Relational Operators with Strings

    string firstName { "john" }, fullName { "john doe" };
    string otherName { "mike" }, secondName { "john" }, mixedName { "JOHN" };

    /*
      * How does C++ compare strings?

       Assume all are lower case. The answer is exactly as your English Dictionary

       - Letter by letter is compared
       - If a word has a smaller letter: it appears first
       -- E.g. love < zebra as l is before z
       -- E.g. love > long as lo are common, but v > n


       - If one word is done in comparison: the smaller in length comes first
       -- E.g. counter < counterattack

       What about a mix of upper and lower cases?
       - Upper letters are smaller than small letters
       - A < a
       - A < z
       - Z < a
       - loVE < love       (as V < v)
       - loVe < long       (as V < n)


       Overall: letter by letter comparison and decision based on which letter is smaller
       */


    cout << (firstName < fullName) << "\n"; // 1 (true)
    cout << (firstName > otherName) << "\n"; // 0 (false)
    cout << (firstName != secondName) << "\n"; // 0 (false)
    cout << (firstName == secondName) << "\n"; // 1 (true)

    cout << (firstName == mixedName) << "\n"; // 0 (false)
    cout << (firstName > mixedName) << "\n"; // 1 (true)

    // Example 3: Floating-Point Precision and Comparison
    double a { 3.0 / 7.0 };
    double b { 1 + 3.0 / 7.0 - 1 };

    // Comparing floating-point numbers, be cautious of precision issues
    cout << a << " " << b << " " << (a == b) << "\n"; // 0.428571 0.428571 1 (sometimes it may output 0)

    a = 5.0, b = 4.99999999999999999;
    cout << a << " " << b << " " << (a == b) << "\n"; // 5 4.999999999999999 0 (sometimes it may output 1)

    // Note: Never compare doubles for equality directly

    return 0;
}
