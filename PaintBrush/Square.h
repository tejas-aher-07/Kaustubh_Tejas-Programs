#ifndef SQUARE_H
#define SQUARE_H

#include "Shape1.h"

class Square : public Shape1
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
