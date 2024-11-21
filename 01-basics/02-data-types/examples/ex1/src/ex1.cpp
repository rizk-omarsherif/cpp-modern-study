//============================================================================
// Name        : ex1.cpp
// Author      : Omar Rizk
// Version     : 1.1
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 1 - Declaration vs Definition and Initialization Styles
//============================================================================

#include <iostream>

int main() {
    // Declaration without definition
    int age;  // Memory is allocated, but no value is assigned
    age = 18; // Definition: Assigning a value
    std::cout << "Age (defined later): " << age << "\n";

    // Direct Initialization
    int height = 170; // Initialization with an equals sign
    std::cout << "Height (direct initialization):     " << height << " cm\n";

    // Functional Initialization
    int weight(70); // Initialization using parentheses
    std::cout << "Weight (functional initialization): " << weight << " kg\n";

    // Uniform Initialization
    int salary{5000}; // Initialization using braces
    std::cout << "Salary (uniform initialization):    " << salary << " USD\n\n";

    // Narrowing conversion examples
    double pi = 3.14;      // Allowed
    int rounded_pi(pi);    // Allowed, but truncates (3.14 -> 3)
    // int strict_pi{pi};  // Uncommenting this will cause a compile-time error (prevents narrowing)

    std::cout << "Rounded Pi (functional initialization): " << rounded_pi << "\n";
    std::cout << "Note: Uniform initialization prevents narrowing conversions.\n";

    return 0;
}

/*
===========================================================================================
| **Style**                | **Syntax**               | **Example**       | **Notes**                                            |
|------------------------- |--------------------------|-------------------|------------------------------------------------------|
| Direct Initialization    | `=`                      | `int age = 60;`   | Common but allows narrowing conversions.             |
| Functional Initialization| `()`                     | `int age(60);`    | Compact, but ambiguous in certain contexts.          |
| Uniform Initialization   | `{}`                     | `int age{60};`    | Preferred for safety; prevents narrowing conversions.|
===========================================================================================
*/

