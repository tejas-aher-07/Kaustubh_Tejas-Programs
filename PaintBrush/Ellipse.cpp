#include <iostream>
using namespace std;
#include "Ellipse.h"
#include "Point.h"
Ellipse::Ellipse()
{
}
Ellipse::Ellipse(Point center,int length,int height,int thickness):Shape1(thickness){
	this->center=center;
	this->length=length;
	this->height=height;
}
void Ellipse:: display(){
	cout<<"Center of Ellipse : x = "<<center.getX()<<", y = "<<center.getY()<<endl;
	cout<<"Length of Ellipse : "<<length<<endl;
	cout<<"Height of Ellipse : "<<height<<endl;
}
