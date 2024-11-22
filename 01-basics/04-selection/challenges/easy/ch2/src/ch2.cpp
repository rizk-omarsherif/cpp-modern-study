//============================================================================
// Name        : ch2.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 2 - Read 2 integers and print based on the following cases:
//								if both odd -> A*B
//								if both even -> A/B
//								if first is odd and second is even -> A+B
//								if first is even and second is odd -> A-B
//============================================================================

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    // Determine even/odd status
    bool is_a_even = (a % 2 == 0);
    bool is_b_even = (b % 2 == 0);

    // Descriptive messages
    cout << a << " is " << (is_a_even ? "even" : "odd") << "\n";
    cout << b << " is " << (is_b_even ? "even" : "odd") << "\n";

    // Perform operation based on even/odd status
    if (!is_a_even && !is_b_even) {
        cout << "Both numbers are odd. Result (a * b): " << a * b << "\n";
    } else if (is_a_even && is_b_even) {
        if (b == 0) {
            cout << "Division by zero is undefined.\n";
        } else {
            cout << "Both numbers are even. Result (a / b): " << a / b << "\n";
        }
    } else if (!is_a_even && is_b_even) {
        cout << "a is odd, b is even. Result (a + b): " << a + b << "\n";
    } else {
        cout << "a is even, b is odd. Result (a - b): " << a - b << "\n";
    }

    return 0;
}


/*
#include <iostream>

int main() {
    int a,b;
    std::cout << "Enter 2 integers: "<<std::endl;
    std::cin >> a >> b;

    if (0 == a%2)
    {
    	std::cout<< a << " is even!" << std::endl;
    	if (0 == b%2)
    	{
        	std::cout<< b << " is even!" << std::endl;
    		std::cout<< "a/b =" << a/b;
    	}
    	else
    	{
        	std::cout<< b << " is odd!" << std::endl;
    		std::cout<< "a-b =" << a-b;
    	}
    }
    else
    {
    	std::cout<< a << " is odd!" << std::endl;

    	if (0 == b%2)
    	{
        	std::cout<< b << " is even!" << std::endl;
    		std::cout<< "a+b =" << a+b;
    	}
    	else
    	{
        	std::cout<< b << " is odd!" << std::endl;
    		std::cout<< "a*b =" << a*b;
    	}
    }

    return 0;
}
*/
