#include "Array_Functions.h"
#include "ClassCreation.h"

void main()
{
	FunctionArrayAlloc();
	SizeofTypes();
	Line CallDefConstructor;
	Line Coordinates(5, 5.5);
	cout << Coordinates.getX() << "," << Coordinates.getY() << endl;
	Derived derived;
	cout << derived.getX() << endl;

	Point p1(10, 15);
	Point p2 = p1;
	cout << p1.getX() << "," << p1.getY() << endl;
	cout << p2.getX() << "," << p2.getY() << endl;
	return;
}