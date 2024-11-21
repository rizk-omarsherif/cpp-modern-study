//============================================================================
// Name        : ch2.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 2 - Easy to Medium: Trace the following code
//               and compare your answer with the compiler's output
//============================================================================

#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 1, c;

    cout << (c = a + b, a = b, b = c,
            c = a + b, a = b, b = c,
            c = a + b, a = b, b = c,
            c = a + b, a = b, b = c) << endl;

    return 0;
}
