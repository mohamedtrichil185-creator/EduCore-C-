#ifndef TOOLS_HPP
#define TOOLS_HPP

#include "student.hpp"

using namespace std;

int	ReadPositiveNumber(string message);
string	ReadString(string message);
void PrintStudent(const Student &student);
void PrintNode(const Node *head);
int	GenerateStudentId();

#endif
