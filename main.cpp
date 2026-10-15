#include "student.hpp"
#include "tools.hpp"

int	main()
{
	Node *head;

	
	head = NULL;
	
	AddStudent(head, FillData);

	save_student_in_file(head);
	delete (head);
	return 0;
}
