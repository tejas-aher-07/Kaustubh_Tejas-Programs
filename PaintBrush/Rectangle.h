#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape1.h"

class Rectangle : public Shape1
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
