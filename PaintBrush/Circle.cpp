#include <iostream>
#define pi 3.1472
using namespace std;

#include "Circle.h"
#include "Point.h"
#include "Shape1.h"
Circle::Circle()
{
}
Circle::Circle(int radius,Point center, int thickness):Shape1(thickness){
	this->radius=radius;
	this->center=center;
}
void Circle::display(){
	
	cout<<"Center of Circle is : x = "<<center.getX()<<", y = "<<center.getY()<<endl;
	cout<<"Radius of Circle is : "<<radius<<endl;
	cout<<"Area of Circle is : "<<area()<<endl;
}
int Circle::area(){
	return pi * radius * radius;
}
