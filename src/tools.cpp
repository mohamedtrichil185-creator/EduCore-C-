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
	cout << "Age      : " << student.Age << endl;
	cout << "Full Name: " << student.FullName << endl;
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
