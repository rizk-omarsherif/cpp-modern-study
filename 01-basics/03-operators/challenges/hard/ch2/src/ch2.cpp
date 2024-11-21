//============================================================================
// Name        : ch2.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 2: Years!
//============================================================================

/*
Problem #2: Years!

Assume a year consists of 12 months, and each month has 30 days.
Thus, one year equals 12 * 30 = 360 days.

Task:
- Read an integer representing the total number of days (e.g., someone's age in days).
- Print 3 numbers:
  1. Total years (number of complete years in the given days)
  2. Total months (remaining complete months after accounting for years)
  3. Remaining days (days left after accounting for years and months)

Rules:
- Each year is 360 days.
- Each month is 30 days.

Inputs and Outputs:
- Example Inputs and corresponding Outputs:
  - Input: 360  → Output: 1 0 0   (1 year, 0 months, 0 days)
  - Input: 30   → Output: 0 1 0   (0 years, 1 month, 0 days)
  - Input: 10   → Output: 0 0 10  (0 years, 0 months, 10 days)
  - Input: 391  → Output: 1 1 1   (391 = 360 + 30 + 1 → 1 year, 1 month, 1 day)
  - Input: 61   → Output: 0 2 1   (61 = 2 * 30 + 1 → 0 years, 2 months, 1 day)
  - Input: 200  → Output: 0 6 20  (200 = 6 * 30 + 20 → 0 years, 6 months, 20 days)
  - Input: 1000 → Output: 2 9 10  (1000 = 2 * 360 + 9 * 30 + 10 → 2 years, 9 months, 10 days)
*/

#include <iostream>

int main() {

	int days {5000};

	int years, months;

	years = days / 360;  // Calculate full years
	days = days % 360;   // Remaining days after accounting for years
	months = days / 30;  // Calculate full months from remaining days
	days = days % 30;    // Remaining days after accounting for months

	/*
	years = days / 360;
	months = ((days/ 360.0)-years)*12.0;
	days = days - (years*360 + months*30);
	 */
	std::cout<< " Years = " << years << std::endl;
	std::cout<< " Months = " << months << std::endl;
	std::cout<< " Days = " << days << std::endl;



	return 0;
}
