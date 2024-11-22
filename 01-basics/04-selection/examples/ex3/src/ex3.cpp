//============================================================================
// Name        : ex3.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 3 - Find the Smallest of Three Numbers (Three Methods)
//============================================================================

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Solution 1: Nested if-else
    /*
    Explanation:
    - Compares num1 with num2 first.
    - Uses an inner if-else to compare either num1 or num2 with num3.
    - Determines the smallest number in a step-by-step manner.
    - Requires more lines and indentation, making it slightly less readable.
    */
    cout << "Solution 1: Using Nested if-else\n";
    cin >> num1 >> num2 >> num3;

    if (num1 < num2) {
        if (num1 < num3)
            cout << num1 << "\n";
        else
            cout << num3 << "\n";
    } else {
        if (num2 < num3)
            cout << num2 << "\n";
        else
            cout << num3 << "\n";
    }

    // Solution 2: Using if-else with logical operators
    /*
    Explanation:
    - Combines logical operators (&&) to evaluate conditions in one step.
    - Directly determines the smallest number with compound conditions.
    - More concise than Solution 1 but slightly harder to debug or extend.
    */
    cout << "Solution 2: Using Logical Operators\n";
    cin >> num1 >> num2 >> num3;

    if (num1 <= num2 && num1 <= num3)
        cout << num1 << "\n";
    else if (num2 <= num1 && num2 <= num3)
        cout << num2 << "\n";
    else
        cout << num3 << "\n";

    // Solution 3: Using a tracking variable
    /*
    Explanation:
    - Initializes a variable (answer) with num1.
    - Updates the value of answer if a smaller number (num2 or num3) is found.
    - Simplest and cleanest method.
    - Easy to extend for more numbers.
    */
    cout << "Solution 3: Using a Tracking Variable\n";
    cin >> num1 >> num2 >> num3;

    int answer = num1;

    if (answer > num2)
        answer = num2;

    if (answer > num3)
        answer = num3;

    cout << answer << "\n";

    /*
    Conclusion:
    - Solution 3 (Tracking Variable) is the best approach for this problem:
      - Simpler and cleaner logic compared to nested if-else or logical operators.
      - Easier to maintain and extend for larger datasets.
      - Minimal computational overhead and straightforward to implement.
    */
    return 0;
}
