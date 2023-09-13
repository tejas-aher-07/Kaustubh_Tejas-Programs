#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
	int id;
	char name[20];
	public:
		void setter(int id,char name[])
		{
			this->id=id;
			strcpy(this->name,name);
		}
		void getter()
		{
			cout<<"Employee details are : id = "<<id<<" name = "<<name<<endl;
		}
	
};
int main()
{
	int n;
	cout<<"Enter number of employees"<<endl;
	cin>>n;
	Employee emp[30];
	
	for(int i=0;i<n;i++){
		int id;
		char name[20];
		cout<<"Enter id of Employee : ";
		cin>>id;
		cout<<"Enter name of Employee : ";
		cin>>name;
		emp[i].setter(id,name);
		
	}
	for(int i=0;i<n;i++){
		emp[i].getter();
	}
}

