#include<iostream>
using namespace std;
int add(int =0,int =0,int =0,int=0);

int main()
{
	
	
	cout<<add()<<endl;
	cout<<add(1)<<endl;
	cout<<add(1,2)<<endl;
	cout<<add(1,2,3)<<endl;
	cout<<add(1,2,3,4)<<endl;
	
}

int add(int a,int b,int c,int d)
{
	return a+b+c+d;
}
