//============================================================================
// Name        : ex8.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 8 - Selection Initializer with Switch in C++17
//============================================================================

#include <iostream>
using namespace std;

int main() {
    /*
    Example: Using a selection initializer with a switch statement.
    - Variable 'num' is declared and initialized within the switch condition.
    - The scope of 'num' is limited to the switch block.
    */
    switch (int num = 25 % 7; num) {
        case 0:
            cout << "The remainder is 0\n";
            break;
        case 1:
            cout << "The remainder is 1\n";
            break;
        default:
            cout << "The remainder is " << num << "\n";
            break;
    }

    // cout << num; // Error: 'num' is not visible here

    return 0;
}
