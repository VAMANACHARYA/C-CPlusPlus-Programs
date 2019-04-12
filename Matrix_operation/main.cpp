#include "MatrixOperation.h"

void main()
{
	int iRowA, iColA, iRowB, iColB;
	cout << "Enter Row for ArrA" << endl;
	cin >> iRowA;
	cout << "Enter Column for ArrA" << endl;
	cin >> iColA;
	cout << "Enter Row for ArrB" << endl;
	cin >> iRowB;
	cout << "Enter column for ArrB" << endl;
	cin >> iColB;
	vector <vector <int>> iResult, iArr1, iArr2;
	if (iRowA == iRowB && iColA == iColB)
	{
		MatrixOperations MatrixA(iRowA, iColA, iRowB, iColB);
		cout << "Enter Elements of iArr1" << endl;
		iArr1 = MatrixA.FillVector(iRowA);
		cout << "Elements of iArr1" << endl;
		MatrixA.showResults(iRowA, iArr1);
		MatrixOperations MatrixB(iRowA, iColA, iRowB, iColB);
		cout << "Enter Elements of iArr1" << endl;
		iArr2 = MatrixB.FillVector(iRowA);
		cout << "Elements of iArr2" << endl;
		MatrixB.showResults(iRowA, iArr2);
		MatrixOperations Result;
		iResult = Result.MatrixAddition(iRowA, iArr1, iArr2);
		cout << "Sum of Matrices is:" << endl;
		Result.showResults(iRowA, iResult);
	}
	else
		cout << "Row column mismatch. Exit and reenter" << endl;
	_getch();
	return;
}