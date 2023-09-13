#include<iostream>
using namespace std;

int main()
{
	int count;
	cout<<"Enter the count of prime number to display : ";
	cin>>count;
	int n=0;
	for(int i=2;;i++)
	{
		int ct=0;//5
		for(int j=i-1;j>1;j--)
		{
			if(i%j==0)
			{
				break;
			}
			else
			{
				ct++;
			}
		}
		if(ct==i-2)
		{
			n++;
			if(n<=count)
			{
				cout<<i<<"\t";
			}
			else
			{
				break;	
			}			
		}
	}
}
