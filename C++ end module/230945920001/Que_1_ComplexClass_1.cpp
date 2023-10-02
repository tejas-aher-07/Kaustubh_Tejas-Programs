#include<iostream>
using namespace std;
class Complex
{
	//Data Members
	int real;
	int img;
	
	public:
		//Default Constructor
		Complex()
		{
			real=0;
			img=0;
		}
		
		//Parameterised Constructor
		Complex(int real,int img)
		{
			this->real=real;
			this->img=img;
		}
		
		//Printing Data
		void Display()
		{
			if(real==real && img==img)
			{
				cout<<"Real Number is : "<<real<<" + "<<img<<"i"<<endl;
			}
			
		}
		
		//Overloding of + operator
		Complex operator+(Complex &c1)
		{
			Complex temp;
			temp.real= this->real + c1.real;
			temp.img = this->img + c1.img;
			return temp;
		}
		
		//Overloading of - Operator
		Complex operator-(Complex &c1)
		{
			Complex temp; //creation of temp object for storing updated data
			temp.real = this->real - c1.real;
			temp.img = this->img - c1.img;
			return temp;
		}
		
		//Overloading of Negation Operator(c4=-c2)
		Complex operator -()
		{
			Complex c2;
			c2.real= -this->real;
			c2.img = -this->img;
			return c2;
		}
		
		//Overloading of pre-increment Opearator
		friend Complex operator++(Complex &c1);
		
		//Overloading of post-increment Opearator
		friend Complex operator++(Complex &c1,int value);
		
};

Complex operator++(Complex &c1)
{
	Complex c2; //creation of temp object for storing updated data
	c2.real= c1.real + 1;
	c2.img = c1.img + 1;
	return c2;
}

Complex operator++(Complex &c1,int value)
{
	Complex c2; //creation of temp object for storing updated data
	c2.real= c1.real + 1;
	c2.img = c1.img + 1;
	return c2;
	
}
int main()
{
	//Creation of Object 1 and Printing Data
	cout<<"Creation of Object 1 and Printing Data : "<<endl;
	Complex c1(10,20);
	c1.Display();
	cout<<endl;
	
	//Creation of Object 2 and Printing Data 
	cout<<"Creation of Object 2 and Printing Data : "<<endl;
	Complex c2(30,40);
	c2.Display();
	cout<<endl;
	
	//Operations on Objects using Operator Overloading
	cout<<"**********Operations on Objects using Operator Overloading ************************\n\n";
	
	//Overloading of + Opearator (c3=c1+c2)
	cout<<"Overloading of + Opearator (c3=c1+c2)"<<endl;
	Complex c3= c1 + c2;
	c3.Display();
	cout<<endl;
	
	//Overloading of - Opearator (c3=c1-c2)
	cout<<"Overloading of - Opearator (c3=c1-c2) "<<endl;
	c3= c1-c2;
	c3.Display();
	cout<<endl;
	
	//Overloading of - Opearator (c2=-c1) 
	cout<<"Overloading of - Opearator (c2=-c1) "<<endl;
	c2=-c1;
	c2.Display();
	cout<<endl;
	
	//Overloading of pre-increment ++ Opearator
	cout<<"Overloading of pre-increment ++ Opearator (c4=++c1) "<<endl;
	Complex c4 = ++c1;
	c4.Display();
	cout<<endl;
	
	//Overloading of post-increment ++ Opearator (c4=c1++) 
	cout<<"Overloading of post-increment ++ Opearator (c4=c1++) "<<endl;
	c4 = c1++;
	c4.Display();
	cout<<endl;
	
}


