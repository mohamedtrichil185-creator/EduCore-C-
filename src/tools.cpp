#include "tools.hpp"
#include "student.hpp"

int	ReadPositiveNumber(string message)
{
	int n;

	cout	<< message ;
	cin	>> n;
	if (n < 0)
		return (ReadPositiveNumber(message));
	return (n);
}


string ReadString(string message)
{
	string s;

	cout << message;
	getline(cin >> ws, s);
	return (s);
}

void PrintStudent(const Student &student)
{
	cout	<< "first name	: " << student.first_name << endl;
	cout	<< "last name	: " << student.last_name << endl;
	cout	<< "age 	: " << student.Age << endl;
	cout	<< "Id		: " << student.Id << endl;
	cout	<< "City	: " << student.City << endl;
	cout	<< "date of birth : " << student.date_of_birth << endl;
}

void PrintStudentInFile(const Student &student, std::ofstream &file)
{
	file	<< student.first_name << endl;
	file	<< student.last_name << endl;
	file	<< student.Age << endl;
	file	<< student.Id << endl;
	file	<< student.City << endl;
	file	<< student.date_of_birth << endl;
}

void PrintNode(const Node *head)
{
	while (head)
	{
		cout << "Node:" << endl;
		PrintStudent(head->Data);
		cout << endl;

		head = head->next;
	}
}

int	GenerateStudentId()
{
	static int	nextId = 1;

	return (nextId++);
}

void	save_student_in_file(const Node *head)
{
	ofstream file("student.txt", ios::app);

	if (!file.is_open())
		return ;

	while (head)
	{
		PrintStudentInFile(head->Data, file);
		head = head->next;
	}
}
