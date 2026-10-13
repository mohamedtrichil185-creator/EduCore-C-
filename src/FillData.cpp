#include "student.hpp"
#include "tools.hpp"

Student	FillData()
{
	Student	data;

	data.Age = ReadPositiveNumber("Please Enter Your Age : ");
	data.FullName = ReadString("Please Enter Your Full Name : ");
	return (data);
}
