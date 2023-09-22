#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the count of Numbers : ";
	cin>>n;
	int sum_Even=0,sum_Odd=0;
	
	for(int i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			sum_Even += i;
		}
		else
		{
			sum_Odd += i;
		}
		
	}
	
	cout<<"Sum of Even Numbers is :"<<sum_Even<<endl;
	cout<<"Sum of Odd Numbers is :"<<sum_Odd;
}
