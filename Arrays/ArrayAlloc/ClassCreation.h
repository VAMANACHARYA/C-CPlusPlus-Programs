#include <iostream>

using namespace std;

class Line
{
private:
	float x1, y1, x2, y2;
public:
	//Constructor
	Line()
	{
		cout << "Default Constructor is called" << endl;
	}
	Line(float a, float b)
	{
		x1 = a;
		y1 = b;
		cout << "User defined Constructor is called" << endl;
		cout << x1 << ", " << y1 << endl;
	}
	float getX()
	{
		return x1;
	}

	float getY()
	{
		return y1;
	}
	//int x, y;
	//Destructor
	~Line()
	{
		cout << "Destructor is Called" << endl;
	}


};

class Derived : public Line
{
public:
	int f = 0, g = 0;
};

class Point
{
private:
	int x, y;
public:
	Point(int x1, int y1)
	{
		this->x = x1;
		this->y = y1;
	}
	Point(const Point &p2)
	{
		this->x = p2.x;
		this->y = p2.y;
	}
	int getX()
	{
		return this->x;
	}
	int getY()
	{
		return this->y;
	}

};