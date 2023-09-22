#include <iostream>
using namespace std;

#include "Square.h"

Square::Square()
{
}
Square::Square(int side,int thickness):Shape(thickness){
	this->side=side;
}
void Square::display(){
	cout<<"Side of Square is : "<<side<<endl;
	cout<<"Area of Square is : "<<area()<<endl;
	
}

int Square::area()
{
	return side * side;
}
