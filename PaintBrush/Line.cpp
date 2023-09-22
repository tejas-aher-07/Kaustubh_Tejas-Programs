#include<iostream>
using namespace std;

#include "Line.h"
#include "Point.h"
#include "Shape.h"
Line::Line()
{
	
}
Line::Line(Point start_Point,Point end_Point,int thickness):Shape(thickness){
	this->start_Point=start_Point;
	this->end_Point=end_Point;
}
void Line::display(){
	cout<<"Co-ordinate od start point are : x = "<<start_Point.getX()<<", y = "<<start_Point.getY()<<endl;
	cout<<"Co-ordinate od start point are : x = "<<end_Point.getX()<<", y = "<<end_Point.getY()<<endl;
}
