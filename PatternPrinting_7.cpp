#include<iostream>
using namespace std;

int main()
{
	char count ='A';
	for(char i='A';i<='E';i++)
	{
		for(char j='E';j>=i;j--)
		{
			cout<<i;
		}
		cout<<"\n";
	}
}
