//============================================================================
// Name        : ch1.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 1 - Read X, then 6 numbers s1,e1 s2,e2 etc. [start end]
//                             Print how many ontervals X is part of!
//============================================================================

#include <iostream>

int main() {


	int x, start, end, count{0};

	std::cin>>x;

	std::cin>>start>>end;
	count+= (start<=x && x<=end);

	std::cin>>start>>end;
	count+= (start<=x && x<=end);

	std::cin>>start>>end;
	count+= (start<=x && x<=end);

	std::cout<<count;
	/*
	int x,s1,e1,s2,e2,s3,e3,counter{0};

	std::cout << "Enter X: " << std::endl;
	std::cin>>x;

	std::cout<< "Enter [S1 and E1]: " << std::endl;;
	std::cin>>s1 >>e1;
	std::cout<< "Enter [S2 and E2]: " << std::endl;;
	std::cin>>s2 >>e2;
	std::cout<< "Enter [S3 and E3]: " << std::endl;;
	std::cin>>s3 >>e3;

	counter+= (s1<=x && e1>=x);
	counter+= (s2<=x && e2>=x);
	counter+= (s3<=x && e3>=x);

	std::cout<<counter <<std::endl;
	*/
	return 0;
}
