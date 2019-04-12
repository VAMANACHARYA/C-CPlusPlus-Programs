#include "MatrixOperation.h"

vector <vector<int>> MatrixOperations:: MatrixAddition(const int iRowA, const int iColumnA, const vector <vector <int>> iArr1, const vector <vector <int>> iArr2)
{
	for (int i = 0; i < iRowA; i++)
	{
		vector <int> iSumTemp;
		for (int j = 0; j < iColumnA; j++)
		{
			iSumTemp.push_back(iArr1[i][j] + iArr2[i][j]);
		}
		iSum.push_back(iSumTemp);
	}
	return iSum;
}

vector <vector<int>> MatrixOperations:: FillVector(const int iRowA, const int iColumnA)
{
	vector <vector <int>>iArr;
	for (int i = 0; i < iRowA; i++)
	{
		vector <int> iTempVec;
		for (int j = 0; j < iColumnA; j++)
		{
			int iNum;
			cin >> iNum;
			iTempVec.push_back(iNum);
		}
		iArr.push_back(iTempVec);
	}
	return iArr;
}


void MatrixOperations :: showResults(int iRowA,int iColumnA, const vector <vector<int>> iSum)
{
	for (int i = 0; i < iRowA; i++)
	{
		for (int j = 0; j < iColumnA; j++)
		{
			cout << iSum[i][j] << " ";
		}
		cout << endl;
	}
}

vector <vector<int>> MatrixOperations::CreateIdentityMatrix(int iRowA, int iColumnA)
{
	vector <vector <int>> iIdentityMat;
	for (int i = 0;i < iRowA;i++)
	{
		vector <int > iIdentityMatTemp;
		for (int j = 0;j < iRowA;j++)
		{
			if (i == j)
				iIdentityMatTemp.push_back(1);
			else
				iIdentityMatTemp.push_back(0);
		}
		iIdentityMat.push_back(iIdentityMatTemp);
	}
	return iIdentityMat;
}

vector <vector<int>> MatrixOperations::MatrixMultiplication(const int iRowA, const int iColumnB, const int iColumnA, const vector <vector <int>> iArr1, const vector <vector <int>> iArr2)
{
	vector<int> iTempSum;
	vector< vector<int>> iResult;
	int Product;
	for (int i = 0; i < iRowA;i++)
	{
		for (int j = 0; j < iColumnB;j++)
		{
			Product = 0;
			for (int k = 0; k < iColumnA;k++)
			{
				Product += iArr1[i][k] * iArr2[k][j];
			}
			iTempSum.push_back(Product);
		}
	}
	iResult.push_back(iTempSum);
	return iResult;
}