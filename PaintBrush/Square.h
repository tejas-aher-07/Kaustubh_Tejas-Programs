#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Shape
{
	int side;
	public:
		Square();
		Square(int side,int);
		void display();
		int area();
		
	protected:
};

#endif
