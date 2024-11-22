//============================================================================
// Name        : ch2.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 2 - find which number from 10 integers has biggest value
//                             restriction: ONLY define 2 int variable
//============================================================================


#include<iostream>
using namespace std;

int main() {
	int cnt, result, num;

	cin>>cnt;

	cin>>result;	// First number
	cnt -= 1;

	// Read  times and maximize
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}

	cout<<result;

	return 0;
}
