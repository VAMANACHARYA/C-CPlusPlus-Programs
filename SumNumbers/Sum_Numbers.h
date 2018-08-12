#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int iSum = 0;

void SumOfNumber(int iNum)
{
	for (int i = 0; iNum > 0; iNum / 10)
	{

		int iReminder = iNum % 10;
		iSum += iReminder;
		iNum /= 10;

	}
	cout << "Sum of the number is: " << iSum << endl;
	iSum = 0;
}
