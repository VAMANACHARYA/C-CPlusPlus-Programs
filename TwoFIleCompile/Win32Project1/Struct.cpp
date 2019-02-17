#include <stdio.h>
#include <conio.h>
#include <cstring>
#include <iostream>

using namespace std;

struct Books
{
	char Author[50];
	int Price;
};

struct SchoolDetails
{
	char TeacherName[50];
	int Age;
};

struct Employee
{
	char EmployeeName[50];
	int EmployeeId;
};

struct Fruits
{
	char FruitName[50];
	char Place[50];
} *FruitDetail;

void printEmployeeDetails(struct Employee Details);
//Pointer to structure
void PointerToStruct(struct Employee *pDetail);

typedef int Vam;

int main()
{
	Books Book1, Book2;
	Book1.Price = 500;
	strcpy_s(Book2.Author, "VAMAN");
	cout << Book1.Price << endl;
	cout << Book2.Author << endl;

	SchoolDetails Student;
	Student.Age = 10;
	cout << "Student's Age is: " << Student.Age << endl;

	SchoolDetails Teacher;
	strcpy_s(Teacher.TeacherName, "Krishna");
	cout << Teacher.TeacherName << endl;

	Employee Detail;
	Detail.EmployeeId = 105;
	strcpy_s(Detail.EmployeeName, "Ram");
	printEmployeeDetails(Detail);

	//one can define pointers to structures
	Employee pDetail;
	pDetail.EmployeeId = 500;
	strcpy_s(pDetail.EmployeeName, "PointerName");
	PointerToStruct(&pDetail);

	Vam iVariable = 100;
	cout << "iVariable is: " << iVariable << endl;
	_getch();
}

//Structure can also be sent as argument for a function
void printEmployeeDetails(struct Employee Details)
{
	cout << "Employee Name :" << Details.EmployeeName << endl;
	cout << "Employee Id :" << Details.EmployeeId << endl;
}

void PointerToStruct(struct Employee *pDetail)
{
	cout << pDetail->EmployeeId << endl;
	cout << pDetail->EmployeeName << endl;
}
