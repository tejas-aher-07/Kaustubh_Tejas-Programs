#include<iostream>

using namespace std;

//if(d)
//	for(int i=0;i<2;i++)
//	


class Date1
{
	int dd,mm,yyyy;
	
	public:
		Date1()
		{
			cout<<"Non Parameterized Constructor"<<endl;
		}
		Date1(int dd, int mm)
		{
			this->dd = dd;
			this->mm = mm;
			cout<<"Inside Parameterized constructor"<<endl;
		}
		Date1(int dd, int mm,int yyyy)
		{
			this->dd = dd;
			this->mm = mm;
			(*this).yyyy= yyyy;
			cout<<"Inside Parameterized three arument constructor"<<endl;
		}
		
		void setDate(int date)
		{
			dd=date;
		}
		
		void setMonth(int month)
		{
			mm=month;
		}
		
		void setYear(int year)
		{
			yyyy=year;
		}
		
		void setter(int date,int month,int year)
		{
		  	dd=date;
		 	mm=month;
		 	yyyy=year;
		}
		
		void getter()
		{
			cout<<"Date is : "<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
		}
};
int main()
{
	Date1 d1;
	Date1 d2(10,12);
	d2.getter();
	
	Date1 d3(03,12,2001);
	d3.getter();
	d1.setter(03,12,2001);
	d1.getter();
	
	cout<<"Enter the date : ";
	int dd,mm,yyyy;
	cin>>dd>>mm>>yyyy;
	
	
	cout<<"After Modification : ";
	d1.setDate(dd);
	d1.setMonth(mm);
	d1.setYear(yyyy);
	d1.getter();
	
	cout<<"Size of Object d1 is : "<<sizeof(d1)<<endl;
}
