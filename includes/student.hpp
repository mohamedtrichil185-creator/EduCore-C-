#ifndef STUDENT_HPP
# define STUDENT_HPP

#include <string>
#include <iostream>

using namespace std;

struct	Student
{
	size_t Age;
	size_t	Id;
	string	first_name;
	string	last_name;
	string	City;
	string	date_of_birth;

};


struct	Node
{
	Student	Data;
	Node *next;
};

void	AddStudent(Node* &head, Student (*f)());
void	ShowAllStudents(const Node *head);
void	FindStudent();
void	ModifyStudent();
void	DeleteStudent();

Student	FillData();
#endif
