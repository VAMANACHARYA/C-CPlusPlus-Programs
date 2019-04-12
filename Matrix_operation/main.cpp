#include "MatrixOperation.h"

void main()
{
	bool QuitLoop = true;
	while (QuitLoop)
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
		vector <vector <int>> iResult, iArr1, iArr2, IdentMat, MatProdResult;
		if (!iRowA && !iColA && !iRowB && !iColB)
			cout << "Enter Row and Columns greater than zero" << endl;
		else
		{

			MatrixOperations MatrixA(iRowA, iColA, iRowB, iColB);
			cout << "Enter Elements of iArrA" << endl;
			iArr1 = MatrixA.FillVector(iRowA, iColA);
			cout << "Elements of iArrA" << endl;
			MatrixA.showResults(iRowA, iColA, iArr1);
			MatrixOperations MatrixB(iRowA, iColA, iRowB, iColB);
			cout << "Enter Elements of iArrB" << endl;
			iArr2 = MatrixB.FillVector(iRowB, iColB);
			cout << "Elements of iArrB" << endl;
			MatrixB.showResults(iRowB, iColB, iArr2);
			if (iRowA == iRowB && iColA == iColB)
			{
				MatrixOperations Result;
				iResult = Result.MatrixAddition(iRowA, iColA, iArr1, iArr2);
				cout << "Sum of Matrices is:" << endl;
				Result.showResults(iRowA, iColA, iResult);
			}
			if (iColA == iRowB)
			{
				{
					cout << "Matrix Multiplication Possible" << endl;
					MatrixOperations MultMat;
					MatProdResult = MultMat.MatrixMultiplication(iRowA, iColB, iColA, iArr1, iArr2);
					cout << "Product of Matrices is:" << endl;
					//MultMat.showResults(iRowA, iColA, MatProdResult);
					int iCount = 0;
					for (int i = 0; i < MatProdResult[0].size();i++)
					{
						cout << MatProdResult[0][i] << " ";
						iCount++;
						if (iCount == iColB)
						{
							cout << endl;
							iCount = 0;
						}
					}
				}
				if (iRowA == iColA && iRowB == iColB)
				{
					MatrixOperations iIdntyMatrix;
					IdentMat = iIdntyMatrix.CreateIdentityMatrix(iRowA, iColA);
					cout << "Identity Matrices is:" << endl;
					iIdntyMatrix.showResults(iRowA, iColA, IdentMat);
				}
			}
		}
		cout << "Do you want to quit?" << endl;
		string sUserInput;
		cin >> sUserInput;
		for (int k = 0;k < sUserInput.length();k++)
		{
			sUserInput[k] = toupper(sUserInput[k]);
		}
		//transform(sUserInput.begin(), sUserInput.end(), sUserInput.begin(), ::toupper);
		if (sUserInput == "NO")
			QuitLoop = true;
		else
			QuitLoop = false;
	}
	_getch();
	return;
}