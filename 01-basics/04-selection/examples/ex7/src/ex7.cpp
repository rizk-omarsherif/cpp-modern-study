//============================================================================
// Name        : ex7.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 7 - Selection Initializer in C++17
//============================================================================

#include <iostream>
using namespace std;

int main() {
    // Example 1: Traditional if-else with variable declared outside the block
    /*
    Explanation:
    - Variable 'x' is declared outside the if-else block.
    - It remains in scope even after the conditional statements, which may lead to unintended use.
    */
    int x = 11;
    if (x % 2 == 1)
        cout << x << " is odd\n";
    else if (x % 2 == 0)
        cout << x << " is even\n";

    cout << x << " is visible here but no need\n"; // 'x' is still in scope

    // Example 2: Using selection initializer in C++17
    /*
    Explanation:
    - Variable 'y' is declared and initialized inside the if condition.
    - It is scoped only within the if-else block and does not exist outside.
    */
    if (int y = 10; y % 2 == 1)
        cout << y << " is odd\n";
    else if (y % 2 == 0)
        cout << y << " is even\n";

    // cout << y; // Error: 'y' is not visible here

    return 0;
}
