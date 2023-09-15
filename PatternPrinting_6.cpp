#include<iostream>
using namespace std;

int main()
{
	char count ='A';
	for(int i=1;i<=5;i++)
	{
		for(int j=5;j>=i;j--)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
