//============================================================================
// Name        : ex3.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 3 - C++ Data Types and Their Ranges
//============================================================================

#include <iostream>
#include <climits>   // For integer limits (INT_MAX, etc.)
#include <cfloat>    // For floating-point limits (FLT_MAX, etc.)

int main() {
    // Integer Types
    std::cout << "Integer Data Types and Ranges:\n";
    std::cout << "int: [" << INT_MIN << ", " << INT_MAX << "]\n";
    std::cout << "unsigned int: [0, " << UINT_MAX << "]\n";
    std::cout << "short: [" << SHRT_MIN << ", " << SHRT_MAX << "]\n";
    std::cout << "unsigned short: [0, " << USHRT_MAX << "]\n";
    std::cout << "long: [" << LONG_MIN << ", " << LONG_MAX << "]\n";
    std::cout << "unsigned long: [0, " << ULONG_MAX << "]\n";
    std::cout << "long long: [" << LLONG_MIN << ", " << LLONG_MAX << "]\n";
    std::cout << "unsigned long long: [0, " << ULLONG_MAX << "]\n\n";

    // Floating-Point Types
    std::cout << "Floating-Point Data Types and Ranges:\n";
    std::cout << "float: [" << FLT_MIN << ", " << FLT_MAX << "]\n";
    std::cout << "double: [" << DBL_MIN << ", " << DBL_MAX << "]\n";
    std::cout << "long double: [" << LDBL_MIN << ", " << LDBL_MAX << "]\n\n";

    // Boolean Type
    std::cout << "Boolean Data Type:\n";
    std::cout << "bool: true or false (stored as 1 or 0)\n\n";

    // Character Type
    std::cout << "Character Data Type:\n";
    std::cout << "char: [" << CHAR_MIN << ", " << CHAR_MAX << "] (ASCII values)\n";
    std::cout << "unsigned char: [0, " << UCHAR_MAX << "]\n";
    std::cout << "wchar_t: Wide character type, depends on platform\n";
    std::cout << "char16_t and char32_t: UTF-16 and UTF-32 types\n\n";

    // Notes on Size and Ranges
    std::cout << "Notes:\n";
    std::cout << "- The size of types like int, long, and double depends on the platform and compiler.\n";
    std::cout << "- For example, on most 32-bit systems, int is 4 bytes, but on some 16-bit systems, it can be 2 bytes.\n";
    std::cout << "- Floating-point ranges depend on IEEE 754 standards.\n";
    std::cout << "- Use <climits> and <cfloat> for portable code to get type-specific limits.\n";

    return 0;
}
