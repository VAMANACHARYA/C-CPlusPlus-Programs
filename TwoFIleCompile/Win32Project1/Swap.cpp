#include <iostream>
#include <conio.h>

using namespace std;

void swapWithPtr(int *x, int*y)
{
	cout << "Function values before swap =>" << *x << "," << *y << endl;

	int temp = *x;
	*x = *y;
	*y = temp;
	cout << "Function values after swap =>"<<*x << "," << *y << endl;
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
	int c = 100;
	int d = 200;
	cout << a << "," << b << endl;
	swapWithoutPtr(a, b);
	cout << "Swapped without ptr =>Main values" << a << "," << b << endl;
	cout << "Values before swap =>Main values" << c << "," << d << endl;
	swapWithPtr(&c, &d);
	cout << "Swapped with ptr => Main values"<<c << "," << d << endl;
	swapWithoutPtr(a, b);
	swapAddress(a, b);
	cout << a << "," << b << endl;
	_getch();
}
