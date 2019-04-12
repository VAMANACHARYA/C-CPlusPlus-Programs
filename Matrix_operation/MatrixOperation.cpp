#include "MatrixOperation.h"

vector <vector<int>> MatrixOperations:: MatrixAddition(const int iRow1, const int iColumn1, const vector <vector <int>> iArr1, const vector <vector <int>> iArr2)
{
	for (int i = 0; i < iRow1; i++)
	{
		vector <int> iSumTemp;
		for (int j = 0; j < iColumn1; j++)
		{
			iSumTemp.push_back(iArr1[i][j] + iArr2[i][j]);
		}
		iSum.push_back(iSumTemp);
	}
	return iSum;
}

vector <vector<int>> MatrixOperations:: FillVector(const int iRow1, const int iColumn1)
{
	vector <vector <int>>iArr;
	for (int i = 0; i < iRow1; i++)
	{
		vector <int> iTempVec;
		for (int j = 0; j < iColumn1; j++)
		{
			int iNum;
			cin >> iNum;
			iTempVec.push_back(iNum);
		}
		iArr.push_back(iTempVec);
	}
	return iArr;
}


void MatrixOperations :: showResults(int iRow1,int iColumn1, const vector <vector<int>> iSum)
{
	for (int i = 0; i < iRow1; i++)
	{
		for (int j = 0; j < iColumn1; j++)
		{
			cout << iSum[i][j] << " ";
		}
		cout << endl;
	}
}

vector <vector<int>> MatrixOperations::CreateIdentityMatrix(int iRow1, int iColumn1)
{
	vector <vector <int>> iIdentityMat;
	for (int i = 0;i < iRow1;i++)
	{
		vector <int > iIdentityMatTemp;
		for (int j = 0;j < iRow1;j++)
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