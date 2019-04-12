#pragma once
#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;

class MatrixOperations
{
private:
	vector <vector <int>> iArr1, iArr2, iSum;
	int iRow1, iColumn1, iRow2, iColumn2;
public:
	//Default Constructor
	MatrixOperations()
	{
	}
	//Constructor rewritten
	MatrixOperations(int iRow1, int iColumn1, int iRow2, int iColumn2)
	{
		this->iRow1 = iRow1;
		this->iColumn1 = iColumn1;
		this->iRow2 = iRow2;
		this->iColumn2 = iColumn2;
	}
	vector <vector<int>> MatrixAddition(int iRow1, vector <vector <int>> iArr1, vector <vector <int>> iArr2);
	vector <vector<int>> FillVector(int iRow1);
	void showResults(int iRow1, vector <vector<int>> iSum);
};