#include<iostream>
using namespace std;

int main()
{
	int j;
	int count=1;
	for(int i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<count;
			count++;
		}
		cout<<"\n";
	}
}
