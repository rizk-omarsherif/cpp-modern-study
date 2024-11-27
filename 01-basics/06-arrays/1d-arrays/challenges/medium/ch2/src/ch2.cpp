//============================================================================
// Name        : ch2.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 2 - Read N then read N<=200 Integers [0 <= A[i] <= 500]
//							   Read Q for number of queries then read Q integers.
// 							   for each integer find last occurance in the array and print its index
//							   if doesn't exist print -1
//============================================================================


#include<iostream>
using namespace std;

int main() {
	// As values are 0-500, we can make array of 501 mark the last value in it
	// Then we answer the queries directly

	const int N = 500 + 1;
	int n, q, x, ans[N];

	for (int i = 0; i < N; i++)
		ans[i] = -1; /** at first the answer of any number is -1 **/

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		ans[x] = i;/** update the answer for x to be i **/
	}
	int num;
	cin >> q;
	while (q--) {
		cin >> num;
		cout << ans[num] << endl;
	}
	return 0;
}

/*
#include<iostream>
using namespace std;

int main() {
	int n, q, a[200];

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	cin >> q;
	while (q--) {
		int num;
		cin >> num;

		int pos = -1;
		// search from the end
		for (int i = n-1; i >= 0; --i) {
			if (a[i] == num) {
				pos = i;
				break;
			}
		}
		cout << pos << "\n";
	}
	return 0;
}
*/

/*
#include <iostream>


int main()
{
	int n,q,a[200]{},query[200]{},occurance=-1, last_occurance=0;;

	std::cout<<"Enter number of elements: "<<std::endl;
	std::cin>>n;

	for (int i=0; i<n; ++i)
	{
		std::cin>>a[i];
	}

	std::cout<<"Enter number of queries: "<<std::endl;
	std::cin>>q;

	for (int i=0; i<q; ++i)
	{
		std::cin>>query[i];
	}

	for (int i=0; i<q; ++i)
	{
		occurance=-1;

		for (int j=0; j<n ;++j)
		{
			if (query[i] == a[j])
			{
				++occurance;
				last_occurance=j;
			}
		}


		std::cout<<query[i]<<" exists "<<occurance+1<<" times!"<<std::endl;

		if ((occurance+1)>0)
			std::cout<<"Last appeared in index "<< last_occurance<<std::endl;
	}
}
*/
