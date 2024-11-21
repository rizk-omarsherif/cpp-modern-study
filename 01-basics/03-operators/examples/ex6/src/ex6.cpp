//============================================================================
// Name        : ex6.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 6 - Logical Operators and Short-Circuiting
//============================================================================

#include <iostream>
using namespace std;

int main() {

    int x { 10 };

    // Example 1: Logical OR with short-circuiting
    // (x += 50 > 10) is discarded due to short-circuiting
    x < 100 || (x += 50 > 10);
    cout << "After x < 100 || (x += 50 > 10), x = " << x << "\n"; // x remains 10

    // Example 2: Logical AND with short-circuiting
    // (++x > 10) is discarded due to short-circuiting
    x == 20 && (++x > 50);
    cout << "After x == 20 && (++x > 50), x = " << x << "\n"; // x remains 10

    // Example 3: Combining AND and OR with short-circuiting
    // (++x > 10) is discarded, but (x > 0) evaluates
    (x == 20) && (++x > 50) || (x > 0);
    cout << "After (x == 20) && (++x > 50) || (x > 0), x = " << x << "\n"; // x = 10

    // Example 4: All expressions evaluated
    // All parts of the expression are evaluated
    (x == 10) && ((++x > 50) || (x > 0));
    cout << "After (x == 10) && ((++x > 50) || (x > 0)), x = " << x << "\n"; // x = 11

    // Example 5: Correcting common coding mistakes
    // Incorrect: x < 5 (should use parentheses for precedence)
    cout << "(x < 5): " << (x < 5) << "\n"; // Corrected with parentheses to avoid confusion

    // Incorrect: Writing & instead of &&
    cout << "(x == 10 && x > 0): " << (x == 10 && x > 0) << "\n"; // Corrected logical AND

    // Incorrect: Writing & & instead of && (extra space removed)
    cout << "(x == 10 && x > 0): " << (x == 10 && x > 0) << "\n"; // Corrected logical AND

    // Incorrect: Writing = instead of == for comparison
    int y = 5;
    cout << "(x == 10 && y == 5): " << (x == 10 && y == 5) << "\n"; // Corrected comparison operator

    return 0;
}
