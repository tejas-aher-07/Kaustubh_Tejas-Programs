#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include "Point.h"
class Circle : public Shape
{
	int radius;
	Point center;
	public:
		Circle();
		Circle(int radius,Point center,int);
		void display();
		int area();
	protected:
};

#endif
