//============================================================================
// Name        : ex4.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 4 - Operator Precedence, Associativity, and Order of Evaluation
//============================================================================

#include <iostream>
using namespace std;

int main() {
    // Precedence example
    cout << "Precedence Examples:\n";

    int result = 2 + 3 * 4 - 6 / 2; // * and / before + and -
    cout << "2 + 3 * 4 - 6 / 2 = " << result << "\n"; // Output: 11

    result = 2 + 3 * (4 - 6 / 2); // Parentheses change precedence
    cout << "2 + 3 * (4 - 6 / 2) = " << result << "\n"; // Output: 5

    // Associativity example
    cout << "\nAssociativity Examples:\n";

    result = 10 - 6 + 3; // Left-to-right associativity for - and +
    cout << "10 - 6 + 3 = " << result << "\n"; // Output: 7

    int x = 10, y = 20, z = 3;
    x += y += --z *= 9 - 3 - 1; // Right-to-left associativity for assignment
    cout << "x = " << x << ", y = " << y << ", z = " << z << "\n"; // Output: x = 40, y = 30, z = 10

    // Order of evaluation example
    cout << "\nOrder of Evaluation Examples:\n";

    x = 2, y = 3, z = 4;
    result = x + y * z; // y * z is evaluated first due to precedence
    cout << "x + y * z = " << result << "\n"; // Output: 14

    cout << "Order of evaluation (x + ++x):\n";
    x = 10;
    cout << "x + ++x = " << (x + ++x) << "\n"; // Undefined behavior: modifies and reads x in the same expression

    cout << "Order of evaluation (i with side effects):\n";
    int i = 1;
    cout << i << " " << i++ << "\n"; // Undefined behavior until C++17

    // Complex parentheses example
    cout << "\nComplex Parentheses Example:\n";

    x = 1, y = 2, z = 3;
    int a = 4, b = 5, c = 6;
    result = (x + (y - (a * b))) / (x + ++c) + ((1 + ((y + z) * 2)) * z);
    cout << "Result of complex expression = " << result << "\n";

    return 0;
}
