#include "Sum_Numbers.h"

int main()
{
	int iNumEnter;
	

	char Quit[10];

	char sEnterContinue [] = "Continue";

	while (strcmp(sEnterContinue, "Quit"))
	{
		cout << "Enter an integer value: ";
		cin >> iNumEnter;

		SumOfNumber(iNumEnter);

		cout << "Type Quit to stop or Type C to continue" << sEnterContinue << endl;
		cin >> sEnterContinue;
	}
}
