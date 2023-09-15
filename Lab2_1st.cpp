#include<iostream>
using namespace std;
void Setter();

class Student
{
	int roll,DOB,Total_marks;
	
	public:
		void Setter(int i)
		{
			
			cout<<"Enter roll No , DOB and Marks for "<<i<<"student : ";
			cin>>this->roll;
			cin>>this->DOB;
			cin>>this->Total_marks;

		}
		
		void getter(int i)
		{
			cout<<endl<<"Data of "<<i<<"Student is : "<<roll<<"\t"<<DOB<<"\t"<<Total_marks<<endl;
//			i++;
		}
		
};

int main()
{
	Student S1[10];
	
	for(int i=0;i<10;i++)
	{
		int j=1;
		S1[i].Setter(j);
		j++;
	}
	
	for(int i=0;i<10;i++)
	{
		int j=1;
		S1[i].getter(j);
		j++;
	}
	
}
