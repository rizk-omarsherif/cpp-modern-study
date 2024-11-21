//============================================================================
// Name        : ch2.cpp
// Author      : Omar Rizk
// Version     : 1.0
// Copyright   : (C) 2024 Omar Rizk
// Description : Challenge 2 - Write a program that reads 2 students info about maths exam
//				 Read per student: name, id, and grade
//				 then print them with the average grade.
//============================================================================


#include<iostream>

int main(){

	std::string student_1_name, student_2_name;
	int student_1_id, student_2_id;
	double student_1_grade, student_2_grade;

	std::cout<< "Enter Student 1 name: ";
	std::cin >> student_1_name ;
	std::cout<<std::endl;

	std::cout<< "Enter Student 1 ID: ";
	std::cin >> student_1_id;
	std::cout<<std::endl;

	std::cout<< "Enter Student 1 Maths Exam Grade: ";
	std::cin >> student_1_grade ;
	std::cout<<std::endl;

	std::cout<< "Enter Student 2 name: ";
	std::cin >> student_2_name ;
	std::cout<<std::endl;

	std::cout<< "Enter Student 2 ID: ";
	std::cin >> student_2_id;
	std::cout<<std::endl;

	std::cout<< "Enter Student 2 Maths Exam Grade: ";
	std::cin >> student_2_grade ;
	std::cout<<std::endl;

	std::cout<< "Students Grades in Maths:" << std::endl;
	std::cout << student_1_name << " (with ID " << student_1_id << ") Got Grade: " << student_1_grade << std::endl;

	std::cout<< "Students Grades in Maths:" << std::endl;
	std::cout << student_2_name << " (with ID " << student_2_id << ") Got Grade: " << student_2_grade << std::endl;

	std::cout<< "Average Grade is: " << (student_1_grade+student_2_grade) / 2;
	return 0;
}
