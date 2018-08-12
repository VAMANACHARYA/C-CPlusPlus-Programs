#include <iostream>
#include <conio.h>

using namespace std;

int iFact = 1;


void FactorialValue(int iNum)
{
	while (iNum > 0)
	{
		iFact *= iNum;
		iNum -= 1;
	}
	cout << "Factorial of the number is: " << iFact << endl;

	
}