//============================================================================
// Name        : ex6.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 6 - Special sum
//============================================================================


#include <iostream>
using namespace std;

int main() {

	int n,t,value;

	cin>>t;

	while(t--) // shortcut for while(t-- != 0), also same as t != 0 and adding t-- at end of loop
	{
		cin>>n;

		int sum=0;

		for(int i=0;i<n;i++)
		{
			cin>>value;

			int res =1;
			for (int j=0; j<i+1;++j)
			{
				res *= value;
			}
			sum+=res;
		}
		cout<<sum<<"\n";
	}
	return 0;
}
