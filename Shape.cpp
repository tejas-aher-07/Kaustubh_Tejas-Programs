#include<iostream>
using namespace std;
#include<String.h>
#include<cmath>

class Shape{
	int thickness;
	public:
		Shape(){
			
		}
		Shape(int thickness){
			this->thickness=thickness;
		}
		virtual void display(){
			cout<<"Thickness of Shape :"<<thickness<<endl;
		}
		virtual int area(){
			return 0;
		}
};
class Point{
	int x1,y1;
	public:
		Point(){
			
		}
		Point(int x1,int y1){
			this->x1=x1;
			this->y1=y1;
		}
		void display(){
			cout<<"X co-ordinate : "<<x1<<endl;
			cout<<"Y co-ordinate : "<<y1<<endl;
		}
		int getX(){
			return x1;
		}
		int getY(){
			return y1;
		}
};
class Line:public Shape{
	Point start_point;
	Point end_point;
	public:
		Line(){
			
		}
		Line(Point start_point,Point end_point,int thickness):Shape(thickness){
			this->start_point=start_point;
			this->end_point=end_point;
		}
		void display(){
			Shape::display();
			cout<<"Start point of Line is : "<<start_point.getX()<<", "<<start_point.getY()<<endl;
			cout<<"End point of Line is : "<<end_point.getX()<<", "<<end_point.getY()<<endl;
		}
};
class Rectangle:public Shape{
	int width;
	int height;
	public:
		Rectangle(){
			
		}
		Rectangle(int width,int height,int thickness):Shape(thickness){
			this->width=width;
			this->height=height;
		}
		void display(){
			Shape::display();
			cout<<"Width of Rectangle : "<<width<<endl;
			cout<<"Height of Rectangle : "<<height<<endl;
			cout<<"Area of Rectangle : "<<area()<<endl;
		}
		int area(){
			return height*width;
		}
};
class Square:public Shape{
	int length;
	public:
		Square(){
			
		}
		Square(int length,int thickness):Shape(thickness){
			this->length=length;
		}
		void display(){
			Shape::display();
			cout<<"Length of Square : "<<length<<endl;
			cout<<"Area of Square : "<<area()<<endl;
		}
		int area(){
			return length*length;
		}
};
class Ecllipse:public Shape{
	int height;
	int width;
	public:
		Ecllipse(){
			
		}
		Ecllipse(int height,int width,int thickness):Shape(thickness){
			this->height=height;
			this->width=width;
		}
		void display(){
			Shape::display();
			cout<<"Width of Ecllipse : "<<width<<endl;
			cout<<"Height of Ecllipse : "<<height<<endl;
			cout<<"Area of Ecllipse : "<<area()<<endl;
		}
		int area(){
			return 3.14*height*width;
		}
};
class Circle:public Shape{
	int radius;
	public:
		Circle(){
			
		}
		Circle(int radius,int thickness):Shape(thickness){
			this->radius=radius;
		}
		void display(){
			Shape::display();
			cout<<"Radius of Circle : "<<radius<<endl;
			cout<<"Area of Circle : "<<area()<<endl;
		}
		int area(){
			return 3.14*radius*radius;
		}
};
int main(){
	cout<<"Please Select one option : "<<endl;
	cout<<"1. Line\t2. Rectangle\t3. Square\t4. Ecllipse\t5. Circle\t6. View All\t7. Exit";
	int opt;
	cin>>opt;
	int thick;
	cout<<"Enter thickness of shape : "<<endl;
	cin>>thick;
	switch(opt){
		case 1:{
			cout<<"Enter first point co-ordinates: "<<endl;
			int x1,y1;
			cin>>x1>>y1;
			cout<<"Enter second point co-ordinates: "<<endl;
			int x2,y2;
			cin>>x2>>y2;
			int a=(x2-x1);
			int b=(y2-y1);
			cout<<"Length of Line :"<<sqrt((a*a)+(b*b))<<endl;
			Point p1(x1,y1);
			Point p2(x2,y2);
			Line l(p1,p2,thick);
			l.display();
			break;
		}
		case 2:{
			Rectangle r(20,12,thick);
			r.display();
			break;
		}
		case 3:{
			Square s(20,thick);
			s.display();
			break;
		}
		case 4:{
			Ecllipse e(20,12,thick);
			e.display();
			break;
		}
		case 5:{
			Circle c(50,thick);
			c.display();
			break;
		}
		case 6:{
			
			break;
		}
		case 7:{
			break;
		}
	}
}
