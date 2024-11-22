//============================================================================
// Name        : ex2.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 2 - Nested if-else Statements and Scope in C++
//============================================================================

#include <iostream>
using namespace std;

int main() {
    // Example 1: if-else if-else ladder
    int salary;
    cout << "Enter your salary: ";
    cin >> salary;

    if (salary < 1000) {
        cout << "You are poor\n";
    } else if (salary >= 1000 && salary < 20000) {
        cout << "Good salary\n";
    } else {
        cout << "You are rich\n";
    }

    // Example 2: Nested if-statements and scope
    cout << "Enter salary again: ";
    cin >> salary;

    if (salary < 1000) {
        cout << "Enter age: ";
        int age;
        cin >> age;

        if (age < 22) {
            cout << "You are still young.\n";
        }
    } else {
        cout << "You are rich\n";
        // Note: Variable 'age' is scoped inside the first if block and cannot be used here.
    }


    return 0;
}
