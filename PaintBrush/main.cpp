#include <iostream>
using namespace std;

#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "Ellipse.h"
#include "Square.h"
#include "Rectangle.h"

int main(int argc, char** argv) {
	int opt;
	do{
		cout<<"Select one Option :"<<endl;
		cout<<"1. Line\t2.Circle\t3.Ellipse\t4.Square\t5.Rectangle\t6.View All\t7.Exit\n";
		cin>>opt;
		
		switch(opt){
			case 1:{
				Point p1(0,0);
	            Point p2(5,5);
	       	    Line l(p1,p2,2);
	            l.display();
				break;
				break;
			}
			case 2:{
				Point p1(10,20);
				Circle c(10,p1,5);
				c.display();
				break;
			}
			case 3:{
				Point p1(10,10);
				Ellipse e(p1,50,30,5);
				e.display();
				break;
			}
			case 4:{
				Square sq(10,5);
				sq.display();
				break;
			}
			case 5:{
				Rectangle r(10,20,5);
				r.display();
				break;
			}
			case 6:{
				
				break;
			}
			case 7:{
				cout<<"Program Exit Successfully "<<endl;
				exit(0);
				break;
			}
			default:{
				cout<<"You have entered Wrong Choice !!! Please Select option again"<<endl;
				break;
			}
		}
	}
	while(opt!=7);
	return 0;
}
