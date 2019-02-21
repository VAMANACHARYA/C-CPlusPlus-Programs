#include "Array_Functions.h"

void FunctionArrayAlloc()
{
	cout << "Enter size of the array" << endl;
	int iSize = 0;
	cin >> iSize;
	int *piArray = new int[iSize];
	cout << "Enter elements in the array" << endl;
	for (int i = 0; i < iSize; i++)
	{
		int iTemp = 0;
		cin >> iTemp;
		*(piArray + i) = iTemp;
	}
	cout << "Elements of the array array are:" << endl;

	for (int i = 0; i < iSize; i++)
	{
		cout << *(piArray + i);
		cout << " ";
	}
	delete [] piArray;
	
}

void SizeofTypes()
{
	int iInt = sizeof(int);
	int iChar = sizeof(char);
}