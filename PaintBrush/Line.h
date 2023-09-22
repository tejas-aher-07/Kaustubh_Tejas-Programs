#ifndef LINE_H
#define LINE_H

#include "Shape1.h"
#include "Point.h"
class Line : public Shape1
{
	Point start_Point;
	Point end_Point;
	public:
		Line();
		Line(Point start_Point,Point end_Point,int);
		void display();
	protected:
};

#endif
