#include<iostream>
using namespace std;

int main()
{
	char count ='A';
	for(int i='A';i<='D';i++)
	{
		for(int j='A';j<=i;j++)
		{
			cout<<count;
			count++;
		}
		cout<<"\n";
	}
}
