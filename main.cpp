#include "student.hpp"
#include "tools.hpp"

int	main()
{
	Node *head;

	
	head = NULL;
	
	AddStudent(head, FillData);
	
	ShowAllStudents(head);
	delete (head);
	return 0;
}
