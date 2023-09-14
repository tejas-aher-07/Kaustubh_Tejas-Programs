#include<iostream>
using namespace std;

class Account
{
	int ac_Number;
	int loan_Amt;
	static const float ROI;
	
	public:
		Account(int ac, int loan_Amt)
		{
			ac_Number=ac;
			this->loan_Amt= loan_Amt;
		}
		
		void display()
		{
			cout<<"Customers with A/C Number "<<ac_Number<<" Has borrowed loan Amount of "
			<<loan_Amt<<" with rate of Interest "<<ROI<<"%"<<endl<<endl;
			
			float Total = (loan_Amt*ROI*2/100) + loan_Amt;
			cout<<"Total Payable Amount after 2 Years will be "<< Total;
		}
		
};

const float Account::ROI=6.0f;

int main()
{
	Account a(1306503458,200000);
	a.display();
}
