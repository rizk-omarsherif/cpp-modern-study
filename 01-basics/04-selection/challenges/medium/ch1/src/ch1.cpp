//============================================================================
// Name        : ch1.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 1 - find which number from 10 integers has biggest value
//                             restriction: ONLY define 2 int variable
//============================================================================


#include <iostream>

int main()
{

	int res, num;

	std::cin>>res;

	std::cin>>num; if(res<num) res = num;
	std::cin>>num; if(res<num) res = num;
	std::cin>>num; if(res<num) res = num;
	std::cin>>num; if(res<num) res = num;
	std::cin>>num; if(res<num) res = num;
	std::cin>>num; if(res<num) res = num;
	std::cin>>num; if(res<num) res = num;
	std::cin>>num; if(res<num) res = num;
	std::cin>>num; if(res<num) res = num;

	std::cout<<res;


	return 0;
}
