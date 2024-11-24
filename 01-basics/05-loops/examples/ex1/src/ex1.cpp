//============================================================================
// Name        : ex1.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 1 - While loops + Break and Continue
//============================================================================

#include <iostream>
using namespace std;

int main() {
    int x, y;

    while (true) {
        cout << "Enter two integers (x and y): ";
        cin >> x >> y;

        // Check if y is zero and handle it
        if (y == 0) {
            cout << "Y is zero! Try another number for y.\n";
            // Ask the user to input new numbers, but continue the loop
            continue;  // This skips the rest of the loop and prompts the user again
        }

        // If y is not zero, perform division
        cout << "Result of x / y: " << x / y << "\n";

        // Ask the user if they want to continue
        cout << "Do you want to continue? (y/n): ";
        char choice;
        cin >> choice;
        if (choice == 'n' || choice == 'N') {
            break;  // Exit the loop when the user enters 'n'
        }
    }

    cout << "Goodbye!\n";
    return 0;
}
