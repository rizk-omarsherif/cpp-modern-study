//============================================================================
// Name        : ex1.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 1 - Arithmetic, Unary, and Logical Operators
//============================================================================

#include <iostream>
using namespace std;

int main() {

    // Arithmetic Operators
    int x {6}, y {3};

    cout << "x + y = " << x + y << "\n";            // 9
    cout << "x + 2 * y - 1 = " << x + 2 * y - 1 << "\n"; // 11
    cout << "x / y = " << x / y << "\n\n";            // 2

    int z1 = (x + y) / 3 / 3;   // 1
    cout << "(x + y) / 3 / 3 = " << z1 << "\n\n";   // 1

    // Unary Operators
    int y2 {-x};  // -6
    cout << "y2 = -x, so y = " << y2 << "\n\n";     // -6

    // Logical Operators
    bool male {true};
    bool female { !male }; // false
    cout << "male = " << male << ", female = " << female << "\n"; // 1 0
    cout << "!0 = " << (!0) << ", !1 = " << (!1) << "\n"; // 1 0

    return 0;
}
