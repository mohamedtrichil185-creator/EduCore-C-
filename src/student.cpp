#include "student.hpp"
#include "tools.hpp"

void	AddStudent(Node* &head, Student (*f)())
{
	Node *p;
	Node *N;

	p = new Node;
	p->Data = f();
	p->next = NULL;
	if (!head)
	{
		head = p;
		return ;
	}
	N = head;
	while (N->next)
		N = N->next;
	N->next = p;
}

void	ShowAllStudents(const Node *head)
{
	
	if (!head)
	{
		cout	<< "nothing here !" << endl;
		return ;
	}
	PrintNode(head);
}
