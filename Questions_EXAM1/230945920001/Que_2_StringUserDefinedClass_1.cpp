#include<iostream>
#include<string.h>
using namespace std;

class String1
{
	//Data Members 
	int len;  //length of String
	char* ptr; //pointer for holding base address of string
	
	public:
		//Default Constructor
		String1()
		{
			len=0;
			strcpy(ptr,"");
		}
		
		//Parameterised Constructor
		String1(int len,const char *s)
		{
			this->len=len;
			ptr= new char[len+1];
			strcpy(ptr,s); 
		}
		
		//Printing Data members
		void Display()
		{
			cout<<"Length of String is "<<len<<endl;
			cout<<"String is : "<<ptr<<endl;
		}
		
		//Overloading of Assignment operator for user defined string class
		String1 operator=(String1 &s1)
		{
			String1 s2; //temp object Creation for assigning data
			s2.len= s1.len;
			s2.ptr=new char[len+1]; //Creation of memory for temp object pointer
			strcpy(s2.ptr,s1.ptr);
			return s2;
		}
		
		//User Defined Destructor
		~String1()
		{
			cout<<"Destructor is called "<<endl;
			
			if(ptr)
			{
				delete[] ptr; //delete operator for deletion
			}
			ptr=NULL; 
		}
		
		//User Defined Copy Constructor declaration
		String1(String1 &s);
};

////User Defined Copy Constructor Definition
String1 :: String1(String1 &s)
{
	this->len= s.len; //Assigning length of obj1 to obj2
	this->ptr= new char[len+1];
	strcpy(this->ptr,s.ptr); // Copying string of obj1 to obj2
}
int main()
{
	//Creation Of Object and Printing the data 
	cout<<"Creation Of Object and Printing the data "<<endl;
	String1 s1(5,"Tejas");
	s1.Display();	
	cout<<endl;
	
	//Overloading of Assignment = Opearator  
	cout<<"Overloading of = Opearator : "<<endl;
	String1 s2 =s1;
	s2.Display();
	cout<<endl;
	
	//User Defined Copy Constructor
	cout<<"Copying Data After defining user defined copy constructor"<<endl;
	String1 s3(s2);
	s3.Display();
	cout<<endl;
	
	//Calling User Defined Destructor
	cout<<"Calling User Defined Destructor "<<endl;
	s1.~String1(); //calling destructor for s1 object
	s2.~String1(); //calling destructor for s2 object
	s3.~String1(); //calling destructor for s3 object
}
