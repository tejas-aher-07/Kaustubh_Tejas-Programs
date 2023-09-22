#include <iostream>
using namespace std;
#include "Rectangle.h"

Rectangle::Rectangle()
{
}
Rectangle::Rectangle(int lenght,int breadth,int thickness):Shape1(thickness){
	this->length=lenght;
	this->breadth=breadth;
}
void Rectangle::display(){
	cout<<"Length of Rectangle is : "<<length<<endl;
	cout<<"Breadth of Rectangle is : "<<breadth<<endl;
	cout<<"Area of Rectangle is : "<<area();
}
int Rectangle::area()
{
	return length * breadth;
}
