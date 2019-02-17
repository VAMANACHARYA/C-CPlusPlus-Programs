#include <iostream>
#include <conio.h>

using namespace std;

void swapWithPtr(int *x, int*y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
	cout << *x << "," << *y << endl;
}

void swapWithoutPtr(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
	cout << x << "," << y << endl;
}

void swapAddress(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
	cout << x << "," << y << endl;
}

void main()
{
	int iArr[3];
	int a, b;
	a = 5;
	b = 10;
	cout << a << "," << b << endl;
	swapWithoutPtr(a, b);
	swapWithPtr(&a, &b);
	swapWithoutPtr(a, b);
	swapAddress(a, b);
	cout << a << "," << b << endl;
	_getch();
}
