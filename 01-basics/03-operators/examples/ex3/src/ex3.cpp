//============================================================================
// Name        : ex3.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 3 - Compound Assignment, Comma Operators, and Edge Cases
//============================================================================

#include <iostream>
using namespace std;

int main() {
    int num {5};

    // Compound assignment operators
    num = num + 1;
    cout << "num = num + 1 -> num = " << num << "\n"; // 6

    num += 1; // Same as num = num + 1
    cout << "num += 1 -> num = " << num << "\n"; // 7

    num *= 2; // Same as num = num * 2
    cout << "num *= 2 -> num = " << num << "\n"; // 14

    num = num - (-2); // Subtract negative 2, equivalent to addition
    cout << "num = num - (-2) -> num = " << num << "\n"; // 16

    num -= 10; // Same as num = num - 10
    cout << "num -= 10 -> num = " << num << "\n"; // 6

    num /= 2; // Same as num = num / 2
    cout << "num /= 2 -> num = " << num << "\n"; // 3

    // Comma operator example
    int a {1}, b {2};
    int result = (a = 10, b = 20); // Assign 10 to a, 20 to b, then assign b to result
    cout << "a = " << a << ", b = " << b << ", result = " << result << "\n"; // a = 10, b = 20, result = 20

    // Guess the output of this case
    a = 0;
    cout << "(a++, ++a, a++, ++a, a++) = " << (a++, ++a, a++, ++a, a++) << "\n";
    // Explanation:
    // 1. a = 0 initially.
    // 2. a++ increments after evaluation (a = 1, evaluates to 0).
    // 3. ++a increments before evaluation (a = 2, evaluates to 2).
    // 4. a++ increments after evaluation (a = 3, evaluates to 2).
    // 5. ++a increments before evaluation (a = 4, evaluates to 4).
    // 6. a++ increments after evaluation (a = 5, evaluates to 4).
    // The final value (last expression) returned by the comma operator is a++ (evaluates to 4).

    // Incrementing after assignment
    a = 0;
    cout << "(a = 10)++ = " << (a = 10)++ << "\n"; // Output: 10
    cout << "a after (a = 10)++ = " << a << "\n";  // Output: 11
    // Explanation:
    // 1. (a = 10) assigns 10 to a, resulting in an lvalue referring to a.
    // 2. The postfix increment operator `++` increments `a` but evaluates to its old value (10).
    // 3. After the expression, `a` becomes 11.

    return 0;
}
