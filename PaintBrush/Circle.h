#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape1.h"
#include "Point.h"
class Circle : public Shape1
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
