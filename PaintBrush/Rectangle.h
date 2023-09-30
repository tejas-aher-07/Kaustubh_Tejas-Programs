#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape
{
	int length,breadth;
	public:
		Rectangle();
		Rectangle(int,int,int);
		void display();
		int area();
		
		
		                    
	protected:
};

#endif
