#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "Shape.h"
#include "Point.h"
class Ellipse : public Shape
{
	Point center;
	int length,height;
	public:
		Ellipse();
		Ellipse(Point ,int,int,int);
		void display();
	protected:
};

#endif
