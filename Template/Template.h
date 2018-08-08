#include <iostream>
#include <conio.h>
using namespace std;

template <class T>
T GetMax(T a, T b)
{
	T result;
	result = (a > b) ? a : b;

	return (result);
}

template <class S>
S Swap(S a, S b)
{
	a = a + b;
	b = a - b;
	a = a - b;

	cout << "Value of a after swap is: " << a << endl;
	cout << "Value of b after swap is: " << b<< endl;

	return 0;

}
