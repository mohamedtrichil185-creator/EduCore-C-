#ifndef STUDENT_HPP
# define STUDENT_HPP

#include <string>
#include <iostream>

using namespace std;

struct	Student
{
	int	Age;
	string	FullName;
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
