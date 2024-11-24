//============================================================================
// Name        : ex8.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 8- Fibonacci Sequence
//============================================================================
#include <iostream>
using namespace std;

int main() {

	int n=10;

	int a=0, b=1;
	cout<<a<<" "<<b<<" ";

	for (int i=2;i<n;++i)
	{
		int c = a+b;
		a=b;
		b=c;
		cout<<c<<" ";
	}
	return 0;
}
