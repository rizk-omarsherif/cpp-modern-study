//============================================================================
// Name        : ex7.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Example 7 - Pair of numbers! Read N,M,SUM and find all pair that has A+B == SUM
//                                  1<=A <=N ---- 1<=B<=M
//============================================================================


/*
#include <iostream>
using namespace std;

int main() {
	int n,m,sum;

	cin>>n>>m>>sum;

	int cnt=0;

	for (int i=1; i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(i+j==sum)
			{
				cnt++;
			}
		}
	}

	cout<<cnt;
	return 0;
}
*/


// Much better and faster way

#include <iostream>

int main()
{
	int n, m, sum;

	std::cin>>n>>m>>sum;

	int cnt=0;

	for (int i=1;i<=n;++i)
	{
		int j = sum - i;

		if (1<=j && j<=m)
		{
			cnt++;
		}
	}

	std::cout<<cnt;
}
