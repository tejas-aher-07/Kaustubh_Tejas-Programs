#include<iostream>
using namespace std;
int fun();

int main()
{
	fun();
	fun();
	fun();
	fun();
	fun();
	fun();
	int count = fun();
	cout<<"Fun Function has been calleed for "<<count<<" times!!!"<<endl;
	
}

int fun()
{
	static int n;
	n++;
	return n;
	
}
