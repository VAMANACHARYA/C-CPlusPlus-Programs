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
	MatrixOperations(int iRowA, int iColumnA, int iRowB, int iColumnB)
	{
		this->iRow1 = iRowA;
		this->iColumn1 = iColumnA;
		this->iRow2 = iRowB;
		this->iColumn2 = iColumnB;
	}
	vector <vector<int>> MatrixAddition(const int iRowA, const int iColumn1, const vector <vector <int>> iArrA, const vector <vector <int>> iArrB);
	vector <vector<int>> FillVector(const int iRowA, const int iColumn1);
	void showResults(int iRowA, int iColumn1, const vector <vector<int>> iSum);
	vector <vector<int>> CreateIdentityMatrix(int iRow1,int iColumn1);
};