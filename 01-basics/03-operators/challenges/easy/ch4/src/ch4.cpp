//============================================================================
// Name        : ch4.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 4 - Guess the Output - Logical and Relational Operators
//============================================================================

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 30, d = 40;

    cout << (a + b == c) << "\n";
    cout << (a + b + c >= 2 * d) << "\n\n";

    cout << (a > 5 || d < 30) << "\n";
    cout << (a > 5 && d < 30) << "\n";
    cout << (a <= b && b <= c) << "\n";

    cout << (a > 5 && d < 30 || c - b == 10) << "\n";
    cout << (a <= b && b <= c && c <= d) << "\n\n";

    cout << (a > 5 && d < 30 || c > d || d % 2 == 0) << "\n";
    cout << (a > 5 && d < 30 || c > d && d % 2 == 0) << "\n\n";

    cout << (a == 10 || b != 20 && c != 30 || d != 40) << "\n";
    cout << ((a == 10 || b != 20) && c != 30 || d != 40) << "\n\n";

    return 0;
}
