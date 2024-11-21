//============================================================================
// Name        : ex2.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 2 - Prefix and Postfix Increment and Decrement Operators
//============================================================================

#include <iostream> // Include the header for input/output

using namespace std;

int main() {
    int a, b;

    // Prefix Increment (++a): Increment first, then use the value
    a = 10;
    b = ++a; // Increment a, then assign the new value of a to b
    cout << "Prefix Increment (++a): " << a << " " << b << "\n"; // Output: 11 11

    a = 10;
    cout << "Prefix Increment used in expression: " << ++a << "\n"; // Output: 11

    // Postfix Increment (a++): Use the value first, then increment
    a = 10;
    b = a++; // Assign a to b, then increment a
    cout << "Postfix Increment (a++): " << a << " " << b << "\n"; // Output: 11 10

    a = 10;
    cout << "Postfix Increment used in expression: " << a++ << "\n"; // Output: 10

    // Undefined Behavior: Modifying a variable multiple times between sequence points
    a = 10;
    cout << "Undefined behavior with increments: " << a++ + ++a << "\n";

    // Prefix Decrement (--a): Decrement first, then use the value
    a = 10;
    b = --a; // Decrement a, then assign the new value of a to b
    cout << "Prefix Decrement (--a): " << a << " " << b << "\n"; // Output: 9 9

    a = 10;
    cout << "Prefix Decrement used in expression: " << --a << "\n"; // Output: 9

    // Postfix Decrement (a--): Use the value first, then decrement
    a = 10;
    b = a--; // Assign a to b, then decrement a
    cout << "Postfix Decrement (a--): " << a << " " << b << "\n"; // Output: 9 10

    a = 10;
    cout << "Postfix Decrement used in expression: " << a-- << "\n"; // Output: 10

    // Undefined Behavior: Modifying a variable multiple times between sequence points
    a = 10;
    cout << "Undefined behavior with decrements: " << a-- + --a << "\n";

    // Example: Exploring valid and invalid use of increment/decrement operators
    cout << "\nExploring increment/decrement operator assignments:\n";

    a = 0, b = 1;
    a = ++b; // Valid: Increment b, assign new value to a
    cout << "a = ++b: a = " << a << ", b = " << b << "\n";

    ++b = a; // Valid: Increment b, then assign a to b
    cout << "++b = a: a = " << a << ", b = " << b << "\n";

    a = b++; // Valid: Assign b to a, then increment b
    cout << "a = b++: a = " << a << ", b = " << b << "\n";

    // b++ = a; // INVALID: Postfix increment returns an r-value, cannot be assigned to
    cout << "b++ = a: Invalid - postfix increment returns an r-value, assignment not allowed.\n";

    return 0;
}
