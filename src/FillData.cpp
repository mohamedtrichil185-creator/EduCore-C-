#include "student.hpp"
#include "tools.hpp"

Student	FillData()
{
	Student	data;

	data.Id = GenerateStudentId();
	data.Age = ReadPositiveNumber("Please Enter Your Age : ");
	data.City = ReadString("Please enter your city : ");
	data.date_of_birth = ReadString("Please enter your date of birth : ");
	data.first_name = ReadString("Please enter your first name : ");
	data.last_name = ReadString ("Please enter your last name : ");
		return (data);
}
