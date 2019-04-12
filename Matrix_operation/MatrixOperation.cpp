#include "MatrixOperation.h"

vector <vector<int>> MatrixOperations:: MatrixAddition(int iRow1, vector <vector <int>> iArr1, vector <vector <int>> iArr2)
{
	for (int i = 0; i < iRow1; i++)
	{
		vector <int> iSumTemp;
		for (int j = 0; j < iRow1; j++)
		{
			iSumTemp.push_back(iArr1[i][j] + iArr2[i][j]);
		}
		iSum.push_back(iSumTemp);
	}
	return iSum;
}

vector <vector<int>> MatrixOperations:: FillVector(int iRow1)
{
	vector <vector <int>>iArr;
	for (int i = 0; i < iRow1; i++)
	{
		vector <int> iTempVec;
		for (int j = 0; j < iRow1; j++)
		{
			int iNum;
			cin >> iNum;
			iTempVec.push_back(iNum);
		}
		iArr.push_back(iTempVec);
	}
	for (int i = 0; i < iArr.size(); i++)
	{
		for (int j = 0; j < iArr[i].size(); j++)
		{
			cout << iArr[i][j] << " ";
		}
		cout << endl;
	}
	return iArr;
}


void MatrixOperations :: showResults(int iRow1, vector <vector<int>> iSum)
{
	for (int i = 0; i < iRow1; i++)
	{
		for (int j = 0; j < iRow1; j++)
		{
			cout << iSum[i][j] << " ";
		}
		cout << endl;
	}
}