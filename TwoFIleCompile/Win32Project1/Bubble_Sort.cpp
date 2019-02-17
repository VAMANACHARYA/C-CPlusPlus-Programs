#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void main()
{
	int iArray[5];

	cout << "Enter elements in the array" << endl;
	for (int iElm = 0; iElm < (sizeof(iArray) / sizeof(iArray[0])); iElm++)
	{
		cin >> iArray[iElm];
	}

	cout << "Sort the elements in the ascending order using bubble sort" << endl;
	int iNumIterations = 0;
	for (int iIteration = 0; iIteration < (sizeof(iArray) / sizeof(iArray[0])); iIteration++)
	{
		/*Here (sizeof(iArray) / sizeof(iArray[0]) - 1) is done because
		iArray[j+1] will not be available when j =(sizeof(iArray) / sizeof(iArray[0]))*/
		for (int iIndex = 0; iIndex < (sizeof(iArray) / sizeof(iArray[0]) - 1); iIndex++)
		{
			if (iArray[iIndex] > iArray[iIndex + 1])
			{
				int temp = iArray[iIndex];
				iArray[iIndex] = iArray[iIndex + 1];
				iArray[iIndex + 1] = temp;
				iNumIterations = iIteration;
			}
		}
		
	}


	cout << "Sorted array looks like:" << endl;
	cout << "Number of iterations to sort i : "<<iNumIterations << endl;
	for (int iElm = 0; iElm < (sizeof(iArray) / sizeof(iArray[0])); iElm++)
	{
		cout << iArray[iElm];
		cout << " ";
	}
	_getch();
}
