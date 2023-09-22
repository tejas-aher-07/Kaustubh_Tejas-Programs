#include <iostream>
using namespace std;
#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "Ellipse.h"
#include "Square.h"
#include "Rectangle.h"
#include "Shape1.h"


int main(int argc, char** argv) {
//	Shape1* shape;
//	shape = new Shape1[5];
	int opt;
	do
	{
	cout<<"Select one Option :"<<endl;
	cout<<"1. Line\t2.Circle\t3.Ellipse\t4.Square\t5.Rectangle\t6.Exit\t7.View All";
	cin>>opt;
	
	switch(opt){
		case 1:{
			Point *p1=new Point(0,0);
			Point *p2=new Point(5,5);
			Line *l= new Line(*p1,*p2,2);
			l->display();
			
//			shape=l;
//			cout<<shape;
			break;
		}
		case 2:{
			Point p1(10,20);
			Circle c(10,p1,5);
			c.display();
			//shape[1]=&c;
			break;
		}
		case 3:{
			Point p1(10,10);
			Ellipse e(p1,50,30,5);
			e.display();
			//shape[2]=&e;
			break;
		}
		case 4:{
			Square sq(10,5);
			sq.display();
			//shape[3]=&sq;
			break;
		}
		case 5:{
			Rectangle r(10,20,5);
			r.display();
			//shape[4]=&r;
			break;
		}
		
		case 6:{
			cout<<"Program Exit Successfully "<<endl;
			exit(0);
			break;
		}
		
		case 7:{
//			for(int i=0;i<2;i++)
//			{
//				cout<<shape[i]<<endl;
//			}
			break;
		}
		default:{
			cout<<"You have entered Wrong Choice !!! Please Select option again"<<endl;
			break;
		}
	}
}while(opt!=6);
	return 0;
}
