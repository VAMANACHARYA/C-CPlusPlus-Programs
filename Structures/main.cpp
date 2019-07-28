#include "E:\GitHub\C-CPlusPlus-Programs\Structures\header.h"

//struct with both struct_type_name and struct_variables
struct StudentNamesCopy
{
	string sNames[100];
}sStNames; //sStNames is struct_variable

//struct with struct_type_name but without struct_variables
struct Student //Student is struct_type_name
{
	string sStudentName; //type struct_data_members
	int iRollNumber; //type struct_data_members
	int iMarks; //type struct_data_members
};

//struct without struct_type_name but with struct_variables
struct
{
	int iStrctWithoutTypeName;
	string sNoTypeName;
}sVarWithoutTypeName;

struct sPtrStrct
{
	int iNum;
	double fFlt;
} *ptrToStcrt;

struct StrctInsideStrct
{
	struct Student stDetails;
	int iNumstudents;
	int iTwoDimArray[10][10];
};
/*struct StudentNamesMain
{
	string x;
};

StudentNamesMain Vam[]
{
	{"abc"},
	{"efg"}
};*/

void PassStructSingleArg(struct Student sArg1)
{
	cout << sArg1.iRollNumber << " " << sArg1.sStudentName << endl;
}

void PassStructMultiArg(struct Student sArg1, struct Student sArg2)
{
	cout << sArg1.iRollNumber << " " << sArg1.sStudentName << endl;
	cout << sArg2.iRollNumber << " " << sArg2.sStudentName << endl;
}

void PassStructMemberMultiArg(int iRollNumber, string sName)
{
	cout << iRollNumber << " " << sName << endl;
}
void main()
{
	sVarWithoutTypeName.iStrctWithoutTypeName = 1000;
	sVarWithoutTypeName.sNoTypeName = "No struct_type_name";
	cout << sVarWithoutTypeName.iStrctWithoutTypeName << "\n"<< sVarWithoutTypeName.sNoTypeName<< endl;
	Student sVar1, sVar2;
	sVar1.iRollNumber = 100;//Instance sVar1
	sVar2.iRollNumber = 200;//Instance sVar2
	cout << sVar1.iRollNumber << "\n" << sVar2.iRollNumber << endl;
	/*Structure Assignments:
	The information contained in one structure can be assigned to another structure of the same type,
	using single assignment statement*/
	sVar2 = sVar1;
	cout << sVar1.iRollNumber << "\n" << sVar2.iRollNumber << endl;
	sVar1.sStudentName = "Vaman";
	sVar2.sStudentName = "Raman";
	sStNames.sNames[0] = sVar1.sStudentName;
	sStNames.sNames[1] = sVar2.sStudentName;
	cout << sStNames.sNames[0] << "\n" << sStNames.sNames[1] << endl;

	//Pass structure members to function
	PassStructMemberMultiArg(sVar1.iRollNumber, sVar1.sStudentName);
	//Pass structure to function
	PassStructSingleArg(sVar1);
	PassStructMultiArg(sVar1, sVar2);

	/*If size of the structure is large passing whole structure to a function
	will reduce the performance because, copy of the argument needs to be done
	so, all members of the structure need to be copied.
	To avoid this pointer to structure is used*/
	Student *sPtrVal1 = NULL, *sPtrVal2 = NULL;
	sPtrVal1 = &sVar1;
	sPtrVal2 = &sVar2;
	sPtrVal1->iRollNumber = 500;
	sPtrVal2->sStudentName = "Ranjesh";
	cout << sPtrVal1->iRollNumber << " " << sPtrVal2->sStudentName << endl;

	sPtrStrct sPtr;
	ptrToStcrt = &sPtr;
	ptrToStcrt->fFlt = 1.55;
	cout << ptrToStcrt->fFlt << endl;

	//Structure inside structure
	StrctInsideStrct sVarStrctInStruct;
	sVarStrctInStruct.stDetails.iRollNumber = 8000;
	sVarStrctInStruct.stDetails.sStudentName = "Sanket";
	sVarStrctInStruct.iTwoDimArray[3][5] = 600;
	cout << sVarStrctInStruct.stDetails.iRollNumber << " " << sVarStrctInStruct.stDetails.sStudentName << endl;
	cout << "2D-Array Val: " << sVarStrctInStruct.iTwoDimArray[3][5] << endl;
	_getch();
}